using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RobotFollowBehavior : MonoBehaviour {

	const float Z_BOUND = .4f;
	const float X__LEFT_BOUND = .028f;
	const float X__RIGHT_BOUND = .032f;

	private static RobotFollowBehavior instance;

	public static RobotFollowBehavior Instance {
		get { return instance; }
	}

	private DefaultTrackableEventHandler currImageTarget;
	private bool canMove = true;

	private void Awake () {
		instance = this;
	}

	private void Update () {
		
		if (currImageTarget != null) {

			if (currImageTarget.isTracking && canMove) {

				//handle side to side 
				if (currImageTarget.transform.position.x < X__LEFT_BOUND) {

					StartCoroutine (MoveRobot ("l"));

				} else if (currImageTarget.transform.position.x > X__RIGHT_BOUND) {

					StartCoroutine (MoveRobot ("r"));
				}

				print (currImageTarget.transform.position.x);

				//handle forward and backward
				if (currImageTarget.transform.position.z < Z_BOUND) {

					StartCoroutine (MoveRobot ("b"));

				} else if (currImageTarget.transform.position.z > Z_BOUND) {

					StartCoroutine (MoveRobot ("f"));
				}
			}
		} 
	}

	IEnumerator MoveRobot (string direction) {
		canMove = false;
		yield return new WaitForEndOfFrame ();
		SendMessageBehavior.Instance.SendPacket (direction);
		yield return new WaitForEndOfFrame ();
		SendMessageBehavior.Instance.SendPacket ("s");
		yield return new WaitForEndOfFrame ();
		canMove = true;
	}

	public void SetNewTarget (GameObject newTracker) {
		currImageTarget = newTracker.GetComponent<DefaultTrackableEventHandler> ();
	}
}
