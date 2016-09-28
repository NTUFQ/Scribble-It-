using UnityEngine;
using System.Collections;
using Facebook.Unity;
using System.Collections.Generic;
namespace userinfo
{
	public class UserInfo{
		private string id = null;
		private string email = null;
		private string username = null;
		private Texture2D picture = null;
		private string pictureUrl = null;
		private bool initialized = false;

		public static UserInfo instance = null;
		 
		public UserInfo(){}
		
		public static UserInfo getInstance(){
			if (UserInfo.instance == null)
				UserInfo.instance = new UserInfo ();
			return UserInfo.instance;
		}
		
		public string getId(){ 
			return this.id; 
		}
		public string getEmail(){
			return this.email;
		}
		public string getUsername(){
			return this.username;
		}
		public string getPictureUrl(){
			return this.pictureUrl;
		}
		public Texture2D getPicture(){
			return this.picture;
		}
		public void setId(string id){ 
			this.id = id;
		}
		public void setEmail(string email){ 
			this.email = email;
		}
		public void setUsername(string username){ 
			this.username = username;
		}
		public void setPicture(Texture2D picture){ 
			this.picture = picture;
		}

		public void setPictureUrl(string pictureUrl){
			this.pictureUrl = pictureUrl;
		}
		public bool isNotNull(){
			return this.id != null && this.email != null && this.username != null;
		}

		public void setNull(){
			this.id = null;
			this.email = null;
			this.username = null;
			this.picture = null;
			this.pictureUrl = null;
			this.initialized = false;
		}

		public bool initial(){
			if (!FB.IsInitialized || !FB.IsLoggedIn)
				return false;
			var aToken = Facebook.Unity.AccessToken.CurrentAccessToken;
			UserInfo.getInstance().setId(aToken.UserId);
			FB.API ("me?fields=name,email", HttpMethod.GET, this.getFBInfo);
			FB.API ("me/picture", HttpMethod.GET, this.getFBPic);
			return true;
		}

		private void getFBInfo(IGraphResult graphResult){
			Debug.Log("info");
			if (string.IsNullOrEmpty(graphResult.Error) == false)
			{
				Debug.Log("could not get");
				return;
			}
			Debug.Log("info");
			this.email = graphResult.ResultDictionary["email"] as string;
			this.username = graphResult.ResultDictionary ["name"] as string;
		}

		private void getFBPic(IGraphResult graphResult){
			if (string.IsNullOrEmpty(graphResult.Error) == false)
			{
				Debug.Log("could not get");
				return;
			}
			this.picture = graphResult.Texture;
			UnityEngine.SceneManagement.SceneManager.LoadScene("MenuView");
		}

		public bool isInitialized(){ 
			return this.initialized;
		}

	}
}