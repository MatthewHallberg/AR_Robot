using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RobotFollowBehavior : MonoBehaviour {

	const float MAX_Z_BOUND = .4f;
	const float MIN_Z_BOUND = .3f;
	const float X__BOUND = .03f;

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

				//handle side to side with priority
				if (currImageTarget.transform.position.x < -X__BOUND) {

					StartCoroutine (MoveRobot ("l"));

				} else if (currImageTarget.transform.position.x > X__BOUND) {

					StartCoroutine (MoveRobot ("r"));

				} else if (currImageTarget.transform.position.z < MIN_Z_BOUND) {

					StartCoroutine (MoveRobot ("b"));

				} else if (currImageTarget.transform.position.z > MAX_Z_BOUND) {

					StartCoroutine (MoveRobot ("f"));
				}


			}
		} 
	}

	IEnumerator MoveRobot (string direction) {
		canMove = false;
		yield return new WaitForEndOfFrame ();
		SendMessageBehavior.Instance.SendPacket (direction);
		if (direction == "l" || direction == "r") {
			yield return new WaitForEndOfFrame ();
		}
		yield return new WaitForEndOfFrame ();
		SendMessageBehavior.Instance.SendPacket ("s");
		yield return new WaitForEndOfFrame ();
		canMove = true;
	}

	public void SetNewTarget (GameObject newTracker) {
		currImageTarget = newTracker.GetComponent<DefaultTrackableEventHandler> ();
	}
}
