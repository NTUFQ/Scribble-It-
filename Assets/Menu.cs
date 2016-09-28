using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using Facebook.Unity;

namespace userinfo{
public class Menu : MonoBehaviour {
	public Text[] textFields;
		public RawImage[] images;
	// Use this for initialization
	void Start () {
			this.DisplayInfo ();
	}
	private void DisplayInfo(){
		UserInfo user = UserInfo.getInstance ();
		//			Debug.Log("email: " + UserInfo.getInstance().getEmail());  
		//			Debug.Log ("user: " + UserInfo.getInstance().getUsername());
		//			Debug.Log ("picture" + UserInfo.getInstance ().getPicture () as string);
		textFields = gameObject.GetComponentsInChildren<Text> ();
		foreach (Text textField in textFields) {
			if (textField.name == "Name") {
				textField.text = "Welcome " + user.getUsername();
				continue;
			}
			if (textField.name == "Email") {
				textField.text = "Email: " + user.getEmail();
				continue;
			}
			if (textField.name == "Id") {
				textField.text = "Id: " + user.getId();
				continue;
			}
		}
		images = gameObject.GetComponentsInChildren<RawImage> ();
		foreach (RawImage image in images) {
			if (image.name == "Profile") {
			image.texture = (Texture) user.getPicture ();
			}
		}
	}
	
		public void ClickLogOut(){
			if(FB.IsInitialized && FB.IsLoggedIn)
				FB.LogOut ();
			UserInfo.getInstance ().setNull ();
			UnityEngine.SceneManagement.SceneManager.LoadScene("LoginView");
		}

	// Update is called once per frame
	void Update () {
			//this.DisplayInfo ();
	}
}
}