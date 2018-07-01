/*========================================================================
Copyright (c) 2017 PTC Inc. All Rights Reserved.
 
Confidential and Proprietary - Protected under copyright and other laws.
Vuforia is a trademark of PTC Inc., registered in the United States and other
countries.
=========================================================================*/

using System;
using System.Collections;
using UnityEngine;

public abstract class Augmentation : MonoBehaviour
{
    #region PUBLIC_MEMBER_VARIABLES
    public Action m_EvtOnEnter = delegate { };
    public Action m_EvtOnExit = delegate { };
    #endregion //PUBLIC_MEMBER_VARIABLES

    #region PROTECTED_MEMBER_VARIABLES
    protected Animator animator;
    #endregion //PROTECTED_MEMBER_VARIABLES

    #region PRIVATE_MEMBER_VARIABLES
    private bool active;
    private IEnumerator waitCoroutine;
    #endregion //PRIVATE_MEMBER_VARIABLES

    #region UNITY_MONOBEHAVIOUR_METHODS
    public virtual void Start()
    {
        animator = GetComponent<Animator>();
    }
    #endregion //UNITY_MONOBEHAVIOUR_METHODS

    #region PUBLIC_METHODS
    public void Enable()
    {
        gameObject.SetActive(true);

        // Don't want to call OnEnter if we haven't called Start yet
        if (animator != null)
        {
            if (waitCoroutine != null)
            {
                StopCoroutine(waitCoroutine);
            }

            waitCoroutine = WaitForThen(1.0f, OnEnter);
            StartCoroutine(waitCoroutine);
        }
    }

    public void Disable()
    {
        OnExit();
    }
    /// <summary>
    /// Restores the objects state as if the scene has been reloaded
    /// </summary>
    public virtual void Restore()
    {
        Disable();

        // Resets all animator parameters and sets animator to default state
        animator.Rebind();
    }

    public virtual void OnEnter()
    {
        // intentionally left blank for derived classes to extend
    }

    public virtual void OnExit()
    {
        m_EvtOnExit.Invoke();
        Debug.Log("Did exit: " + gameObject.name);
    }


    /// <summary>
    /// Enables or disables all renderers on a gameobject and its children
    /// </summary>
    /// <param name="enabled">True to enable renderers, false to disable them</param>
    public virtual void SetRenderersEnabled(bool enabled)
    {

        Renderer[] components = GetComponentsInChildren<Renderer>(true);

        // Enable rendering:
        foreach (Renderer component in components)
        {
            component.enabled = true;
        }
    }

    /// <summary>
    /// Enables or disables all colliders on a gameobject and its children
    /// </summary>
    /// <param name="enabled">True to enable colliders, false to disable them</param>
    public virtual void SetCollidersEnabled(bool enabled)
    {
        Collider[] components = GetComponentsInChildren<Collider>(true);

        // Enable rendering:
        foreach (Collider component in components)
        {
            component.enabled = true;
        }
    }
    #endregion // PUBLIC_METHODS

    #region PROTECTED_METHODS

    /// <summary>
    /// Waits for a number of seconds then performs an action
    /// </summary>
    protected IEnumerator WaitForThen(float waitSeconds, Action action)
    {
        yield return new WaitForSeconds(waitSeconds);
        action();
    }
    #endregion

}