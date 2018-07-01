/*========================================================================
Copyright (c) 2017 PTC Inc. All Rights Reserved.
 
Confidential and Proprietary - Protected under copyright and other laws.
Vuforia is a trademark of PTC Inc., registered in the United States and other
countries.
=========================================================================*/

using UnityEngine;

public class RockPileController : MonoBehaviour
{
    #region PUBLIC_MEMBER_VARIABLES
    public Transform m_GrabbableRock;
    #endregion // PUBLIC_MEMBER_VARIABLES

    #region PRIVATE_MEMBER_VARIABLES
    private FadeObject fadeController;
    #endregion // PRIVATE_MEMBER_VARIABLES

    #region UNITY_MONOBEHAVIOUR_METHODS

    void Awake()
    {
        fadeController = GetComponent<FadeObject>();
    }
    #endregion // UNITY_MONOBEHAVIOUR_METHODS


    #region PUBLIC_METHODS
    public void FadeOut()
    {
        fadeController.m_IsVisible = false;

        if (m_GrabbableRock != null)
        {
            var rockFader = m_GrabbableRock.GetComponent<FadeObject>();
            rockFader.m_IsVisible = false;
        }
    }

    public void FadeIn()
    {
        fadeController.m_IsVisible = true;

        if (m_GrabbableRock != null)
        {
            var rockFader = m_GrabbableRock.GetComponent<FadeObject>();
            rockFader.m_IsVisible = true;
        }
    }
    #endregion // PUBLIC_METHODS


    #region PRIVATE_METHODS
    #endregion // PRIVATE_METHODS
}

