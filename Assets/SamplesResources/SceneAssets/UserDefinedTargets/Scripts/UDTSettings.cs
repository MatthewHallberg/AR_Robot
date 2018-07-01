/*===============================================================================
Copyright (c) 2016-2017 PTC Inc. All Rights Reserved.

Vuforia is a trademark of PTC Inc., registered in the United States and other 
countries.
===============================================================================*/
using UnityEngine;
using System.Collections.Generic;
using System.Linq;
using Vuforia;

/// <summary>
/// Overrides base class TrackableSettings,
/// so to only enable Extended Tracking on the most recently added UDT target,
/// since UDT only supports Extended Tracking on one target at a time
/// (note: this may change in future versions of Vuforia)
/// </summary>
public class UDTSettings : TrackableSettings
{
    #region PRIVATE_MEMBERS
    UDTEventHandler m_UDTEventHandler;
    #endregion //PRIVATE_MEMBERS

    #region PUBLIC_METHODS
    /// <summary>
    /// Overrides base class implementation of SwitchExtendedTracking,
    /// so to only enable Extended Tracking on the most recently added UDT target,
    /// since UDT only supports Extended Tracking on one target at a time
    /// (note: this may change in future versions of Vuforia)
    /// </summary>
    public override void SwitchExtendedTracking(bool extTrackingEnabled)
    {
        mExtTrackingEnabled = extTrackingEnabled;

        if (m_UDTEventHandler == null)
            m_UDTEventHandler = FindObjectOfType<UDTEventHandler>();

        StateManager stateManager = TrackerManager.Instance.GetStateManager();

        // 1. First, stop Extended Tracking on all the trackables
        foreach (var behaviour in stateManager.GetTrackableBehaviours())
        {
            var imageBehaviour = behaviour as ImageTargetBehaviour;
            if (imageBehaviour != null)
            {
                imageBehaviour.ImageTarget.StopExtendedTracking();
            }
        }

        if (mExtTrackingEnabled)
        {
            // 2. Then, start Extended Tracking only on the most recently added target
            List<TrackableBehaviour> trackableList = stateManager.GetTrackableBehaviours().ToList();

            if (trackableList.Count > 0 && m_UDTEventHandler.LastTargetIndex >= 0)
            {
                ImageTargetBehaviour itb = trackableList[m_UDTEventHandler.LastTargetIndex] as ImageTargetBehaviour;
                if (itb != null)
                {
                    if (itb.ImageTarget.StartExtendedTracking())
                        Debug.Log("Extended Tracking successfully enabled for " + itb.name);
                    else
                        Debug.Log("Failed to enable Extended Tracking for " + itb.name);
                }
            }
        }
    }
    #endregion //PUBLIC_METHODS
}
