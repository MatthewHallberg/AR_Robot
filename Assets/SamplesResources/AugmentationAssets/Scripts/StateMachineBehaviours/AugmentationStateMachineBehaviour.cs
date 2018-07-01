/*========================================================================
Copyright (c) 2017 PTC Inc. All Rights Reserved.
 
Confidential and Proprietary - Protected under copyright and other laws.
Vuforia is a trademark of PTC Inc., registered in the United States and other
countries.
=========================================================================*/

using System;
using System.Collections.Generic;
using System.Reflection;
using UnityEngine;
using UnityEngine.Events;

public abstract class AugmentationStateMachineBehaviour : StateMachineBehaviour
{

    #region PUBLIC_MEMBER_VARIABLES
    public string m_OnEnterMethodName;
    public string m_OnUpdateMethodName;
    public string m_OnExitMethodName;
    #endregion // PUBLIC_MEMBER_VARIABLES

    #region PRIVATE_STATIC_VARIABLES
    static Dictionary<Type, Dictionary<string, Delegate>> cachedDelegates = new Dictionary<Type, Dictionary<string, Delegate>>();
    #endregion // PRIVATE_STATIC_VARIABLES

    #region UNITY_STATEMACHINEBEHAVIOUR_METHODS
    public override void OnStateEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        base.OnStateEnter(animator, stateInfo, layerIndex);

        if (!String.IsNullOrEmpty(m_OnEnterMethodName))
        {
            DoStateEvent(animator, m_OnEnterMethodName);
        }
    }

    public override void OnStateExit(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        base.OnStateExit(animator, stateInfo, layerIndex);

        if (!String.IsNullOrEmpty(m_OnExitMethodName))
        {
            DoStateEvent(animator, m_OnExitMethodName);
        }
    }

    public override void OnStateUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        base.OnStateUpdate(animator, stateInfo, layerIndex);

        if (!String.IsNullOrEmpty(m_OnUpdateMethodName))
        {
            DoStateEvent(animator, m_OnUpdateMethodName);
        }
    }
    #endregion // UNITY_STATEMACHINEBEHAVIOUR_METHODS


    #region PUBLIC_METHODS
    public abstract void DoStateEvent(Animator animator, string methodName);

    public abstract Type GetTargetType();
    #endregion // PUBLIC_METHODS


    #region PRIVATE_METHODS
    /// <summary>
    /// Gets a delegate for the method of type T named methodName. Creates it if it does not already exist in the cache.
    /// </summary>
    /// <returns></returns>
    public Action<T> GetMethod<T>(T augmentation, string methodName)
    {
        Action<T> result = null;

        Dictionary<string, Delegate> delegateByMethodName;
        if (cachedDelegates.TryGetValue(typeof(T), out delegateByMethodName))
        {
            Delegate del;
            if (delegateByMethodName.TryGetValue(methodName, out del))
            {
                result = del as Action<T>;
            }
        }


        if (result == null)
        {
            MethodInfo methodInfo = UnityEventBase.GetValidMethodInfo(augmentation, methodName, new Type[0]);
            if (methodInfo == null)
            {
                UnityEngine.Debug.LogWarning("Method \"" + methodName + "\" could not be found on object of type " + typeof(T).Name);
            }
            else
            {
#if NETFX_CORE
                var del = methodInfo.CreateDelegate(typeof(Action<T>));
#else
                var del = Delegate.CreateDelegate(typeof(Action<T>), methodInfo, false);
#endif
                if (del == null)
                {
                    if (methodInfo.ReturnType != typeof(void))
                    {
                        UnityEngine.Debug.LogWarning("Method \"" + methodName + "\" must have a return type of void to be used with AugmentationStateMachineBehaviour");
                    }

                    if (methodInfo.GetGenericArguments().Length > 0)
                    {
                        UnityEngine.Debug.LogWarning("Method \"" + methodName + "\" must have no arguments to be used with AugmentationStateMachineBehaviour");
                    }
                }
                else
                {
                    result = del as Action<T>;
                    if (result != null)
                    {
                        AddDelegateToCache<T>(result, methodName);
                    }
                }
            }

        }

        return result;
    }

    /// <summary>
    /// Caches a delegate by type and method name
    /// </summary>
    void AddDelegateToCache<T>(Action<T> delegateToAdd, string methodName)
    {
        Dictionary<string, Delegate> delegateByMethodName;
        if (!cachedDelegates.TryGetValue(typeof(T), out delegateByMethodName))
        {
            delegateByMethodName = new Dictionary<string, Delegate>();
            cachedDelegates.Add(typeof(T), delegateByMethodName);
        }

        delegateByMethodName.Add(methodName, delegateToAdd);
    }
    #endregion // PRIVATE_METHODS
}

