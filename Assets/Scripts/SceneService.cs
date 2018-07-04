using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneService : MonoBehaviour {

	private static SceneService instance;

	public static SceneService Instance {
		get { return instance; }
	}

	private void Awake () {
		instance = this;
		Application.runInBackground = true;
	}

	public void LoadScene (string name) {
		SceneManager.LoadScene (name);
	}
}
