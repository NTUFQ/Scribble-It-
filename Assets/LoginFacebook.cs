using UnityEngine;
using System.Collections;
using Facebook.Unity;
using System.Collections.Generic;
namespace userinfo{
public class LoginFacebook : MonoBehaviour {

	// Use this for initialization
	void Start () {
	}

	void Awake ()
	{
		if (!FB.IsInitialized) {
			// Initialize the Facebook SDK
			FB.Init(InitCallback, OnHideUnity);
		} else {
			// Already initialized, signal an app activation App Event
			FB.ActivateApp();
		}
			if (FB.IsLoggedIn) {
				if (UserInfo.getInstance().isNotNull()) {
					UnityEngine.SceneManagement.SceneManager.LoadScene("MenuView");
					return;
				}
			}
	}

	private void InitCallback ()
	{
		if (FB.IsInitialized) {
			// Signal an app activation App Event
			FB.ActivateApp();
			// Continue with Facebook SDK
			// ...
		} else {
			Debug.Log("Failed to Initialize the Facebook SDK");
		}
	}

	public void ClickFacebookLogin()
	{
		Debug.Log (FB.AppId);
		FB.LogInWithReadPermissions(new List<string>() { "public_profile", "email", "user_friends" }, this.AuthCallback);
	}

	public void ClickGuest()
	{
		UnityEngine.SceneManagement.SceneManager.LoadScene("MenuView");
	}

	private void AuthCallback (ILoginResult result) {
		if (FB.IsLoggedIn) {
				UserInfo.getInstance ().initial ();
				//UnityEngine.SceneManagement.SceneManager.LoadScene("MenuView");
		} else {
			Debug.Log("User cancelled login");
		}
	}

	private void OnHideUnity (bool isGameShown)
	{
		if (!isGameShown) {
			// Pause the game - we will need to hide
			Time.timeScale = 0;
		} else {
			// Resume the game - we're getting focus again
			Time.timeScale = 1;
		}
	}
	

	// Update is called once per frame
	void Update () {
	
	}
}
}