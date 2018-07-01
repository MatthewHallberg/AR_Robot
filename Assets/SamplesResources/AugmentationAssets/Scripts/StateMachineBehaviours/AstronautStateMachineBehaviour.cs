/*========================================================================
Copyright (c) 2017 PTC Inc. All Rights Reserved.
 
Confidential and Proprietary - Protected under copyright and other laws.
Vuforia is a trademark of PTC Inc., registered in the United States and other
countries.
=========================================================================*/

using System;
using UnityEngine;

public class AstronautStateMachineBehaviour : AugmentationStateMachineBehaviour
{
    #region PUBLIC_METHODS
    public override void DoStateEvent(Animator animator, string methodName)
    {
        var augmentation = animator.GetComponent<Astronaut>();
        var onStateEvent = GetMethod(augmentation, methodName);
        onStateEvent(augmentation);
    }

    public override Type GetTargetType()
    {
        return typeof(Astronaut);
    }
    #endregion // PUBLIC_METHODS
}

