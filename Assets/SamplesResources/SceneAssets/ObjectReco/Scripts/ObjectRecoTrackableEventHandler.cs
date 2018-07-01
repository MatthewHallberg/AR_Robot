/*===============================================================================
Copyright (c) 2017 PTC Inc. All Rights Reserved.
 
Vuforia is a trademark of PTC Inc., registered in the United States and other
countries.
===============================================================================*/
using UnityEngine;

public class ObjectRecoTrackableEventHandler : DefaultTrackableEventHandler
{
    public Animator m_Habitat;
    public Animator m_Astronaut;

    #region PROTECTED_METHODS

    protected override void OnTrackingFound()
    {
        base.OnTrackingFound();

        m_Habitat.SetBool("IsDoorOpen", true);
        m_Astronaut.SetBool("IsWaving", true);
    }

    protected override void OnTrackingLost()
    {
        base.OnTrackingLost();

        m_Habitat.SetBool("IsDoorOpen", false);
    }

    #endregion // PROTECTED_METHODS
}