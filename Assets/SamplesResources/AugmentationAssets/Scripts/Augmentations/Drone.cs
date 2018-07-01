/*========================================================================
Copyright (c) 2017 PTC Inc. All Rights Reserved.
 
Confidential and Proprietary - Protected under copyright and other laws.
Vuforia is a trademark of PTC Inc., registered in the United States and other
countries.
=========================================================================*/

public class Drone : Augmentation
{
    #region PUBLIC_METHODS

    public override void OnEnter()
    {
        base.OnEnter();
        m_EvtOnEnter.Invoke();
    }

    public override void OnExit()
    {
        base.OnExit();
        IsScanning = false;
        IsFacingObject = false;
        IsShowingLaser = false;
    }

    public void AnimEvt_StopScanning()
    {
        IsScanning = false;
        IsShowingLaser = false;
    }

    public void AnimEvt_StartScanning()
    {
        IsShowingLaser = true;
        IsScanning = true;
        IsFacingObject = true;
    }

    public void HandleVirtualButtonPressed()
    {
        AnimEvt_StartScanning();
    }

    public void HandleVirtualButtonReleased()
    {
        AnimEvt_StopScanning();
    }
    #endregion // PUBLIC_METHODS


    #region PRIVATE_METHODS
    private bool IsFacingObject
    {
        get { return animator.GetBool("IsFacingObject"); }
        set { animator.SetBool("IsFacingObject", value); }
    }

    private bool IsScanning
    {
        get { return animator.GetBool("IsScanning"); }
        set { animator.SetBool("IsScanning", value); }
    }

    private bool IsShowingLaser
    {
        get { return animator.GetBool("IsShowingLaser"); }
        set { animator.SetBool("IsShowingLaser", value); }
    }

    #endregion // PRIVATE_METHODS
}

