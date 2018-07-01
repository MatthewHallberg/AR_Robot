using UnityEngine;
using Vuforia;

public class CameraFeed : MonoBehaviour {

	private Renderer rend;
	private Vector3 videoTexSize = Vector3.one;
	private Vuforia.Image image;

	#region PRIVATE_MEMBERS
	private Vuforia.Image.PIXEL_FORMAT mPixelFormat = Vuforia.Image.PIXEL_FORMAT.UNKNOWN_FORMAT;
	private bool mAccessCameraImage = true;
	private bool mFormatRegistered = false;
	#endregion // PRIVATE_MEMBERS

	#region MONOBEHAVIOUR_METHODS

	void Start () {

		rend = GetComponent<Renderer> ();

#if UNITY_EDITOR
		mPixelFormat = Vuforia.Image.PIXEL_FORMAT.RGBA8888;
#else
        mPixelFormat = Vuforia.Image.PIXEL_FORMAT.RGB888; // Use RGB888 for mobile
#endif

		// Register Vuforia life-cycle callbacks:
		VuforiaARController.Instance.RegisterVuforiaStartedCallback (OnVuforiaStarted);
		VuforiaARController.Instance.RegisterTrackablesUpdatedCallback (OnTrackablesUpdated);
		VuforiaARController.Instance.RegisterOnPauseCallback (OnPause);

	}

	#endregion // MONOBEHAVIOUR_METHODS

	#region PRIVATE_METHODS

	void OnVuforiaStarted () {

		// Try register camera image format
		if (CameraDevice.Instance.SetFrameFormat (mPixelFormat, true)) {
			Debug.Log ("Successfully registered pixel format " + mPixelFormat.ToString ());
			mFormatRegistered = true;
		} else {
			Debug.LogError (
				"\nFailed to register pixel format: " + mPixelFormat.ToString () +
				"\nThe format may be unsupported by your device." +
				"\nConsider using a different pixel format.\n");

			mFormatRegistered = false;
		}

	}

	/// <summary>
	/// Called each time the Vuforia state is updated
	/// </summary>
	void OnTrackablesUpdated () {
		if (mFormatRegistered) {
			if (mAccessCameraImage) {
				//get camera image
				image = CameraDevice.Instance.GetCameraImage (mPixelFormat);
			}
		}
	}

	/// <summary>
	/// Called when app is paused / resumed
	/// </summary>
	void OnPause (bool paused) {
		if (paused) {
			Debug.Log ("App was paused");
			UnregisterFormat ();
		} else {
			Debug.Log ("App was resumed");
			RegisterFormat ();
		}
	}

	/// <summary>
	/// Register the camera pixel format
	/// </summary>
	void RegisterFormat () {
		if (CameraDevice.Instance.SetFrameFormat (mPixelFormat, true)) {
			Debug.Log ("Successfully registered camera pixel format " + mPixelFormat.ToString ());
			mFormatRegistered = true;
		} else {
			Debug.LogError ("Failed to register camera pixel format " + mPixelFormat.ToString ());
			mFormatRegistered = false;
		}
	}

	/// <summary>
	/// Unregister the camera pixel format (e.g. call this when app is paused)
	/// </summary>
	void UnregisterFormat () {
		Debug.Log ("Unregistering camera pixel format " + mPixelFormat.ToString ());
		CameraDevice.Instance.SetFrameFormat (mPixelFormat, false);
		mFormatRegistered = false;
	}

	public Texture2D GetImage () {
		Texture2D camTex = new Texture2D (image.Width, image.Height);
		image.CopyToTexture (camTex);	
		return camTex;
	}

	public int getWidth () {
		return image.Width;
	}

	public int getHeight () {
		return image.Height;
	}

	public bool GetImageAvailable () {
		if (image != null) {
			return true;
		} else {
			return false;
		}
	}

	#endregion //PRIVATE_METHODS
}
