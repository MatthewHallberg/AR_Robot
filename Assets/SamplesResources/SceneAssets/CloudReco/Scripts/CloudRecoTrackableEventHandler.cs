/*===============================================================================
Copyright (c) 2015-2017 PTC Inc. All Rights Reserved.
 
Copyright (c) 2010-2015 Qualcomm Connected Experiences, Inc. All Rights Reserved.
 
Vuforia is a trademark of PTC Inc., registered in the United States and other 
countries.
===============================================================================*/
using UnityEngine;
using Vuforia;

public class CloudRecoTrackableEventHandler : DefaultTrackableEventHandler
{
    #region PUBLIC_MEMBERS
    /// <summary>
    /// The scan-line rendered in overlay when Cloud Reco is in scanning mode.
    /// </summary>
    ScanLine m_ScanLine;
    CloudRecoContentManager m_CloudRecoContentManager;
    #endregion // PUBLIC_MEMBERS


    #region PROTECTED_METHODS

    protected override void Start()
    {

        base.Start();

        m_ScanLine = FindObjectOfType<ScanLine>();
        m_CloudRecoContentManager = FindObjectOfType<CloudRecoContentManager>();
    }

    protected override void OnTrackingFound()
    {
        Debug.Log("<color=blue>OnTrackingFound()</color>");

        base.OnTrackingFound();

        if (m_CloudRecoContentManager)
        {
            m_CloudRecoContentManager.ShowTargetInfo(true);
        }

        // Stop finder since we have now a result, finder will be restarted again when we lose track of the result
        ObjectTracker objectTracker = TrackerManager.Instance.GetTracker<ObjectTracker>();

        if (objectTracker != null)
        {
            objectTracker.TargetFinder.Stop();

            if (m_ScanLine)
            {
                // Stop showing the scan-line
                m_ScanLine.ShowScanLine(false);
            }
        }
    }

    protected override void OnTrackingLost()
    {
        Debug.Log("<color=blue>OnTrackingLost()</color>");

        base.OnTrackingLost();

        if (m_CloudRecoContentManager)
        {
            m_CloudRecoContentManager.ShowTargetInfo(false);
        }

        // Start finder again if we lost the current trackable
        ObjectTracker objectTracker = TrackerManager.Instance.GetTracker<ObjectTracker>();

        if (objectTracker != null)
        {
            objectTracker.TargetFinder.ClearTrackables(false);
            objectTracker.TargetFinder.StartRecognition();

            if (m_ScanLine)
            {
                // Start showing the scan-line
                m_ScanLine.ShowScanLine(true);
            }
        }
    }

    #endregion //PROTECTED_METHODS
}
