using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ARPlaneBehavior : MonoBehaviour {

	public static int planeNum = 0;

	private Material thisMat;
	private Vector2 matScale = new Vector2(0,0);
	private Vector3 lastScale = Vector3.zero;

	// Use this for initialization
	void Start () {
		thisMat = GetComponent<Renderer> ().material;
		planeNum++;
		this.name = planeNum.ToString ();
	}

	// Update is called once per frame
	void Update () {
		//tile texture as it scales
		matScale.x = transform.localScale.x * 20;
		matScale.y = transform.localScale.z * 20;
		thisMat.mainTextureScale = matScale;

		//if scale changes send message
		if (transform.localScale != lastScale) {
			SendMessage ();
		}
		lastScale = transform.localScale;
	}

	void SendMessage () {
		string message = this.name;
		message += "," + transform.position.x.ToString("F2") + "," + transform.position.y.ToString ("F2") + "," + transform.position.z.ToString ("F2");
		message += "," + transform.rotation.x.ToString ("F2") + "," + transform.rotation.y.ToString ("F2") + "," + transform.rotation.z.ToString ("F2") + "," + transform.rotation.w.ToString ("F2");
		message += "," + transform.localScale.x.ToString ("F2") + "," + transform.localScale.y.ToString ("F2") + "," + transform.localScale.z.ToString ("F2");
		SendMessageBehavior.Instance.SendPacket (message);
	}
}
