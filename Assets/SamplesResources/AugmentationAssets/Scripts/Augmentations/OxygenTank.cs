/*========================================================================
Copyright (c) 2017 PTC Inc. All Rights Reserved.
 
Confidential and Proprietary - Protected under copyright and other laws.
Vuforia is a trademark of PTC Inc., registered in the United States and other
countries.
=========================================================================*/

using UnityEngine;

public class OxygenTank : Augmentation
{
    #region PUBLIC_METHODS
    public override void Restore()
    {
        base.Restore();
    }

    public override void OnEnter()
    {
        base.OnEnter();
        IsDetailOn = false;

        m_EvtOnEnter.Invoke();
    }

    public void ShowDetail()
    {
        IsDetailOn = true;
    }

    public void HideDetail()
    {
        IsDetailOn = false;
    }

    public void HandleVirtualButtonPressed()
    {
        ShowDetail();
    }

    public void HandleVirtualButtonReleased()
    {
        HideDetail();
    }
    #endregion // PUBLIC_METHODS


    #region PRIVATE_METHODS

    private void DoEnter()
    {
        animator.SetTrigger("DoEnter");
    }

    private bool IsDetailOn
    {
        get { return animator.GetBool("IsDetailOn"); }
        set { animator.SetBool("IsDetailOn", value); }
    }
    #endregion // PRIVATE_METHODS
}

