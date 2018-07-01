/*===============================================================================
Copyright (c) 2015-2017 PTC Inc. All Rights Reserved.
 
Copyright (c) 2012-2015 Qualcomm Connected Experiences, Inc. All Rights Reserved.
 
Vuforia is a trademark of PTC Inc., registered in the United States and other 
countries.
===============================================================================*/
using UnityEngine;
using Vuforia;

/// <summary>
/// This MonoBehaviour implements the Cloud Reco Event handling for this sample.
/// It registers itself at the CloudRecoBehaviour and is notified of new search results as well as error messages
/// The current state is visualized and new results are enabled using the TargetFinder API.
/// </summary>
public class CloudRecoEventHandler : MonoBehaviour, ICloudRecoEventHandler
{
    #region PRIVATE_MEMBERS
    bool m_MustRestartApp;
    string errorTitle;
    string errorMsg;
    CloudRecoBehaviour m_CloudRecoBehaviour;
    ObjectTracker m_ObjectTracker;
    TrackableSettings m_TrackableSettings;
    CloudRecoContentManager m_CloudRecoContentManager;
    #endregion // PRIVATE_MEMBERS


    #region PUBLIC_MEMBERS
    /// <summary>
    /// Can be set in the Unity inspector to reference a ImageTargetBehaviour that is used for augmentations of new cloud reco results.
    /// </summary>
    public ImageTargetBehaviour m_ImageTargetTemplate;
    /// <summary>
    /// The scan-line rendered in overlay when Cloud Reco is in scanning mode.
    /// </summary>
    public ScanLine m_ScanLine;
    /// <summary>
    /// Cloud Reco error UI elements.
    /// </summary>
    public Canvas m_CloudErrorCanvas;
    public UnityEngine.UI.Text m_CloudErrorTitle;
    public UnityEngine.UI.Text m_CloudErrorText;
    public UnityEngine.UI.Image m_CloudActivityIcon;
    #endregion //PUBLIC_MEMBERS


    #region MONOBEHAVIOUR_METHODS
    /// <summary>
    /// register for events at the CloudRecoBehaviour
    /// </summary>
    void Start()
    {
        if (VuforiaConfiguration.Instance.Vuforia.LicenseKey == string.Empty)
        {
            errorTitle = "Cloud Reco Init Error";
            errorMsg = "Vuforia License Key not found. Cloud Reco requires a valid license.";
            ShowError(errorTitle, errorMsg);
        }

        m_TrackableSettings = FindObjectOfType<TrackableSettings>();
        m_ScanLine = FindObjectOfType<ScanLine>();
        m_CloudRecoContentManager = FindObjectOfType<CloudRecoContentManager>();

        // register this event handler at the cloud reco behaviour
        m_CloudRecoBehaviour = GetComponent<CloudRecoBehaviour>();
        if (m_CloudRecoBehaviour)
        {
            m_CloudRecoBehaviour.RegisterEventHandler(this);
        }
    }

    void Update()
    {
        if (m_CloudRecoBehaviour.CloudRecoInitialized)
        {
            SetCloudActivityIconVisible(m_ObjectTracker.TargetFinder.IsRequesting());
        }
    }
    #endregion //MONOBEHAVIOUR_METHODS


    #region ICloudRecoEventHandler_implementation
    /// <summary>
    /// Called when TargetFinder has been initialized successfully
    /// </summary>
    public void OnInitialized()
    {
        Debug.Log("Cloud Reco initialized successfully.");

        // get a reference to the Object Tracker, remember it
        m_ObjectTracker = TrackerManager.Instance.GetTracker<ObjectTracker>();
    }

    /// <summary>
    /// Called if Cloud Reco initialization fails
    /// </summary>
    public void OnInitError(TargetFinder.InitState initError)
    {
        switch (initError)
        {
            case TargetFinder.InitState.INIT_ERROR_NO_NETWORK_CONNECTION:
                m_MustRestartApp = true;
                errorTitle = "Network Unavailable";
                errorMsg = "Please check your Internet connection and try again.";
                break;
            case TargetFinder.InitState.INIT_ERROR_SERVICE_NOT_AVAILABLE:
                errorTitle = "Service Unavailable";
                errorMsg = "Failed to initialize app because the service is not available.";
                break;
        }

        // Prepend the error code in red
        errorMsg = "<color=red>" + initError.ToString().Replace("_", " ") + "</color>\n\n" + errorMsg;

        // Remove rich text tags for console logging
        var errorTextConsole = errorMsg.Replace("<color=red>", "").Replace("</color>", "");

        Debug.LogError("Cloud Reco - Initialization Error: " + initError + "\n\n" + errorTextConsole);

        ShowError(errorTitle, errorMsg);
    }

    /// <summary>
    /// Called if a Cloud Reco update error occurs
    /// </summary>
    public void OnUpdateError(TargetFinder.UpdateState updateError)
    {
        switch (updateError)
        {
            case TargetFinder.UpdateState.UPDATE_ERROR_AUTHORIZATION_FAILED:
                errorTitle = "Authorization Error";
                errorMsg = "The cloud recognition service access keys are incorrect or have expired.";
                break;
            case TargetFinder.UpdateState.UPDATE_ERROR_NO_NETWORK_CONNECTION:
                errorTitle = "Network Unavailable";
                errorMsg = "Please check your Internet connection and try again.";
                break;
            case TargetFinder.UpdateState.UPDATE_ERROR_PROJECT_SUSPENDED:
                errorTitle = "Authorization Error";
                errorMsg = "The cloud recognition service has been suspended.";
                break;
            case TargetFinder.UpdateState.UPDATE_ERROR_REQUEST_TIMEOUT:
                errorTitle = "Request Timeout";
                errorMsg = "The network request has timed out, please check your Internet connection and try again.";
                break;
            case TargetFinder.UpdateState.UPDATE_ERROR_SERVICE_NOT_AVAILABLE:
                errorTitle = "Service Unavailable";
                errorMsg = "The service is unavailable, please try again later.";
                break;
            case TargetFinder.UpdateState.UPDATE_ERROR_TIMESTAMP_OUT_OF_RANGE:
                errorTitle = "Clock Sync Error";
                errorMsg = "Please update the date and time and try again.";
                break;
            case TargetFinder.UpdateState.UPDATE_ERROR_UPDATE_SDK:
                errorTitle = "Unsupported Version";
                errorMsg = "The application is using an unsupported version of Vuforia.";
                break;
            case TargetFinder.UpdateState.UPDATE_ERROR_BAD_FRAME_QUALITY:
                errorTitle = "Bad Frame Quality";
                errorMsg = "Low-frame quality has been continuously observed.\n\nError Event Received on Frame: " + Time.frameCount;
                break;
        }

        // Prepend the error code in red
        errorMsg = "<color=red>" + updateError.ToString().Replace("_", " ") + "</color>\n\n" + errorMsg;

        // Remove rich text tags for console logging
        var errorTextConsole = errorMsg.Replace("<color=red>", "").Replace("</color>", "");

        Debug.LogError("Cloud Reco - Update Error: " + updateError + "\n\n" + errorTextConsole);

        ShowError(errorTitle, errorMsg);
    }

    /// <summary>
    /// when we start scanning, unregister Trackable from the ImageTargetTemplate, then delete all trackables
    /// </summary>
    public void OnStateChanged(bool scanning)
    {

        Debug.Log("<color=blue>OnStateChanged(): </color>" + scanning);

        if (scanning)
        {
            // clear all known trackables
            m_ObjectTracker.TargetFinder.ClearTrackables(false);

        }

        m_ScanLine.ShowScanLine(scanning);
    }

    /// <summary>
    /// Handles new search results
    /// </summary>
    /// <param name="targetSearchResult"></param>
    public void OnNewSearchResult(TargetFinder.TargetSearchResult targetSearchResult)
    {
        Debug.Log("<color=blue>OnNewSearchResult(): </color>" + targetSearchResult.TargetName);

        // This code demonstrates how to reuse an ImageTargetBehaviour for new search results and modifying it according to the metadata
        // Depending on your application, it can make more sense to duplicate the ImageTargetBehaviour using Instantiate(), 
        // or to create a new ImageTargetBehaviour for each new result

        // Vuforia will return a new object with the right script automatically if you use
        // TargetFinder.EnableTracking(TargetSearchResult result, string gameObjectName)


        m_CloudRecoContentManager.HandleTargetFinderResult(targetSearchResult);


        //Check if the metadata isn't null
        if (targetSearchResult.MetaData == null)
        {
            Debug.Log("Target metadata not available.");
            //return;
        }
        else
        {
            Debug.Log("MetaData: " + targetSearchResult.MetaData);
            Debug.Log("TargetName: " + targetSearchResult.TargetName);
            Debug.Log("Pointer: " + targetSearchResult.TargetSearchResultPtr);
            Debug.Log("TargetSize: " + targetSearchResult.TargetSize);
            Debug.Log("TrackingRating: " + targetSearchResult.TrackingRating);
            Debug.Log("UniqueTargetId: " + targetSearchResult.UniqueTargetId);
        }

        // First clear all trackables
        m_ObjectTracker.TargetFinder.ClearTrackables(false);

        // enable the new result with the same ImageTargetBehaviour:
        ImageTargetBehaviour imageTargetBehaviour =
            m_ObjectTracker.TargetFinder.EnableTracking(targetSearchResult, m_ImageTargetTemplate.gameObject) as ImageTargetBehaviour;

        //if extended tracking was enabled from the menu, we need to start the extendedtracking on the newly found trackble.
        if (m_TrackableSettings && m_TrackableSettings.IsExtendedTrackingEnabled())
        {
            imageTargetBehaviour.ImageTarget.StartExtendedTracking();
        }
    }
    #endregion //ICloudRecoEventHandler_implementation


    #region PUBLIC_METHODS
    public void CloseErrorDialog()
    {
        if (m_CloudErrorCanvas)
        {
            m_CloudErrorCanvas.transform.parent.position = Vector3.right * 2 * Screen.width;
            m_CloudErrorCanvas.gameObject.SetActive(false);
            m_CloudErrorCanvas.enabled = false;

            if (m_MustRestartApp)
            {
                m_MustRestartApp = false;
                RestartApplication();
            }
        }
    }
    #endregion //PUBLIC_METHODS

    #region PRIVATE_METHODS
    void SetCloudActivityIconVisible(bool visible)
    {
        if (!m_CloudActivityIcon) return;

        m_CloudActivityIcon.enabled = visible;
    }

    void ShowError(string title, string msg)
    {
        if (!m_CloudErrorCanvas) return;

        if (m_CloudErrorTitle)
            m_CloudErrorTitle.text = title;

        if (m_CloudErrorText)
            m_CloudErrorText.text = msg;

        // Show the error canvas
        m_CloudErrorCanvas.transform.parent.position = Vector3.zero;
        m_CloudErrorCanvas.gameObject.SetActive(true);
        m_CloudErrorCanvas.enabled = true;
    }

    // Callback for network-not-available error message
    void RestartApplication()
    {
        int startLevel = UnityEngine.SceneManagement.SceneManager.GetActiveScene().buildIndex - 2;
        if (startLevel < 0) startLevel = 0;
        UnityEngine.SceneManagement.SceneManager.LoadScene(startLevel);
    }
    #endregion //PRIVATE_METHODS
}
