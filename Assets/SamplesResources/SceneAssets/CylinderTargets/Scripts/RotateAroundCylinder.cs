/*============================================================================== 
  Copyright (c) 2016-2017 PTC Inc. All Rights Reserved.

  Copyright (c) 2012-2015 Qualcomm Connected Experiences, Inc. All Rights Reserved. 
 * ==============================================================================*/
using UnityEngine;

public class RotateAroundCylinder : MonoBehaviour
{
    #region PRIVATE_MEMBER_VARIABLES

    Animator m_DroneAnimator;

    #endregion //PRIVATE_MEMBER_VARIABLES

    #region MONOBEHAVIOUR_METHODS

    void Start()
    {
        m_DroneAnimator = GetComponent<Animator>();

        if (m_DroneAnimator)
        {
            m_DroneAnimator.SetBool("IsFacingObject", true);
            m_DroneAnimator.SetBool("IsShowingLaser", true);
            m_DroneAnimator.SetBool("IsScanning", true);
        }
    }

    void Update()
    {
        Transform parentTransform = transform.parent;
        transform.RotateAround(parentTransform.position,
                               parentTransform.up,
                               -60 * Time.deltaTime); // Cylinder Target
    }

    #endregion //MONOBEHAVIOUR_METHODS
}
