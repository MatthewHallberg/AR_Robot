using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UDTMessageBehavior : MonoBehaviour {

	public Text debugText;

	public void SetDebugText (string message) {
		debugText.text = message;
	}
}
