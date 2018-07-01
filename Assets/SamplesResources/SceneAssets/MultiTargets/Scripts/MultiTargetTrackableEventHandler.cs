/*===============================================================================
Copyright (c) 2017 PTC Inc. All Rights Reserved.
 
Vuforia is a trademark of PTC Inc., registered in the United States and other
countries.
===============================================================================*/

using UnityEngine;

public class MultiTargetTrackableEventHandler : DefaultTrackableEventHandler
{
    public Animator astronaut;

    #region PROTECTED_METHODS

    protected override void OnTrackingFound()
    {
        astronaut.SetBool("IsDrilling", true);

        base.OnTrackingFound();
    }

    protected override void OnTrackingLost()
    {
        astronaut.SetBool("IsDrilling", false);

        base.OnTrackingLost();
    }

    #endregion // PROTECTED_METHODS

}
