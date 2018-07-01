/*===============================================================================
Copyright (c) 2017 PTC Inc. All Rights Reserved.

Confidential and Proprietary - Protected under copyright and other laws.
Vuforia is a trademark of PTC Inc., registered in the United States and other 
countries.
===============================================================================*/
using UnityEngine;

public class VuMarkTrackableEventHandler : DefaultTrackableEventHandler
{
    #region PROTECTED_METHODS

    protected override void OnTrackingFound()
    {
        base.OnTrackingFound();

        Animator animator = GetComponentInChildren<Animator>();

        if (animator != null)
        {
            animator.SetTrigger("ShowBlinking");
        }
    }

    #endregion // PROTECTED_METHODS
}
