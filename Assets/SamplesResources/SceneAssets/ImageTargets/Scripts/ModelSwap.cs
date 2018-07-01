/*============================================================================== 
 Copyright (c) 2016-2017 PTC Inc. All Rights Reserved.
 
 Copyright (c) 2015 Qualcomm Connected Experiences, Inc. All Rights Reserved. 
 * ==============================================================================*/
using UnityEngine;

public class ModelSwap : MonoBehaviour
{
    #region PRIVATE_MEMBERS

    [SerializeField] GameObject m_DefaultModel;
    [SerializeField] GameObject m_ExtTrackedModel;
    GameObject m_ActiveModel;
    TrackableSettings m_TrackableSettings;

    #endregion //PRIVATE_MEMBERS

    #region MONOBEHAVIOUR_METHODS

    void Start()
    {
        m_ActiveModel = m_DefaultModel;
        m_TrackableSettings = FindObjectOfType<TrackableSettings>();
    }

    void Update()
    {
        if (m_TrackableSettings.IsExtendedTrackingEnabled() && (m_ActiveModel == m_DefaultModel))
        {
            // Switch default augmentation to extended tracking augmentation
            m_DefaultModel.SetActive(false);
            m_ExtTrackedModel.SetActive(true);
            m_ActiveModel = m_ExtTrackedModel;
        }
        else if (!m_TrackableSettings.IsExtendedTrackingEnabled() && (m_ActiveModel == m_ExtTrackedModel))
        {
            // Switch extended tracking augmentation to default augmentation
            m_ExtTrackedModel.SetActive(false);
            m_DefaultModel.SetActive(true);
            m_ActiveModel = m_DefaultModel;
        }
    }

    #endregion //MONOBEHAVIOUR_METHODS
}
