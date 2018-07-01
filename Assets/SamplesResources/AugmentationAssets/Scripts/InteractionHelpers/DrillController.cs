/*========================================================================
Copyright (c) 2017 PTC Inc. All Rights Reserved.
 
Confidential and Proprietary - Protected under copyright and other laws.
Vuforia is a trademark of PTC Inc., registered in the United States and other
countries.
=========================================================================*/

using UnityEngine;

public class DrillController : MonoBehaviour
{
    #region PUBLIC_MEMBER_VARIABLES
    public bool m_IsDrilling = false;
    #endregion //PUBLIC_MEMBER_VARIABLES

    #region PRIVATE_MEMBER_VARIABLES
    private float drillLerpPercentage = 0.0f;
    #endregion //PRIVATE_MEMBER_VARIABLES

    #region UNITY_MONOBEHAVIOUR_METHODS
    private void Update()
    {
        if (m_IsDrilling && drillLerpPercentage < 1.0f)
        {
            drillLerpPercentage += Time.deltaTime * 3.0f;

            if (drillLerpPercentage > 1.0f)
            {
                drillLerpPercentage = 1.0f;
            }

            transform.localScale = Vector3.one * drillLerpPercentage;
        }
        else if (!m_IsDrilling && drillLerpPercentage > 0.0f)
        {
            drillLerpPercentage -= Time.deltaTime * 3.0f;

            if (drillLerpPercentage < 0.0f)
            {
                drillLerpPercentage = 0.0f;
            }

            transform.localScale = Vector3.one * drillLerpPercentage;
        }
    }
    #endregion //UNITY_MONOBEHAVIOUR_METHODS
}
