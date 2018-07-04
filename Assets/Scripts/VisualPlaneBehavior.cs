using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VisualPlaneBehavior : MonoBehaviour {

	private Material thisMat;
	private Vector2 matScale = new Vector2 (0, 0);

	// Use this for initialization
	void Start () {
		thisMat = GetComponent<Renderer> ().material;
	}
	
	// Update is called once per frame
	void Update () {
		//tile texture as it scales
		matScale.x = transform.localScale.x * 10;
		matScale.y = transform.localScale.z * 10;
		thisMat.mainTextureScale = matScale;
	}
}
