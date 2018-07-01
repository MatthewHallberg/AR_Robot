/*========================================================================
Copyright (c) 2017 PTC Inc. All Rights Reserved.
 
Confidential and Proprietary - Protected under copyright and other laws.
Vuforia is a trademark of PTC Inc., registered in the United States and other
countries.
=========================================================================*/

using UnityEngine;

public class Habitat : Augmentation
{
    #region PUBLIC_MEMBER_VARIABLES

    public bool IsHatchOpen
    {
        get { return animator.GetBool("IsHatchOpen"); }
        set { animator.SetBool("IsHatchOpen", value); }
    }

    public bool IsDoorOpen
    {
        get { return animator.GetBool("IsDoorOpen"); }
        set { animator.SetBool("IsDoorOpen", value); }
    }
    #endregion // PUBLIC_MEMBER_VARIABLES

    #region PRIVATE_MEMBER_VARIABLES
    #endregion // PRIVATE_MEMBER_VARIABLES

    #region UNITY_MONOBEHAVIOUR_METHODS

    #endregion // UNITY_MONOBEHAVIOUR_METHODS


    #region PUBLIC_METHODS

    public override void Restore()
    {
        base.Restore();
        IsDoorOpen = false;
        IsHatchOpen = false;
    }

    public override void OnEnter()
    {
        base.OnEnter();
        m_EvtOnEnter.Invoke();
    }

    public void OpenDoor(bool value)
    {
        IsDoorOpen = value;
    }
    #endregion // PUBLIC_METHODS


    #region PRIVATE_METHODS
    #endregion // PRIVATE_METHODS
}

