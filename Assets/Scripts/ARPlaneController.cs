using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ARPlaneController : MonoBehaviour {

	public GameObject visualPlanePrefab;
	private Dictionary<string,GameObject> planes = new Dictionary<string, GameObject>();

	public void MessageRecieved (string message) {
		string[] packet = message.Split (',');
		string name = packet [0];
		Transform currPlane;
		if (planes.ContainsKey (name)) {
			currPlane = planes [name].transform.GetChild(0);
		} else {
			currPlane = Instantiate (visualPlanePrefab).transform.GetChild (0);
			planes.Add (name, currPlane.parent.gameObject);
		}
		currPlane.position = new Vector3 (float.Parse (packet [1]), float.Parse (packet [2]), float.Parse (packet [3]));
		currPlane.rotation = new Quaternion (float.Parse (packet [4]), float.Parse (packet [5]), float.Parse (packet [6]),float.Parse (packet [7]));
		currPlane.localScale = new Vector3 (float.Parse (packet [8]), float.Parse (packet [9]), float.Parse (packet [10]));
	}
}
