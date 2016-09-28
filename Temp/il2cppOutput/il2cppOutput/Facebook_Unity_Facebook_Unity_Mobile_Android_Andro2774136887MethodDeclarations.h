#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Facebook.Unity.Mobile.Android.AndroidFacebook
struct AndroidFacebook_t2774136887;
// Facebook.Unity.Mobile.Android.IAndroidWrapper
struct IAndroidWrapper_t942185935;
// Facebook.Unity.CallbackManager
struct CallbackManager_t1300627398;
// System.String
struct String_t;
// Facebook.Unity.HideUnityDelegate
struct HideUnityDelegate_t3175190102;
// Facebook.Unity.InitDelegate
struct InitDelegate_t5726901;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t3308144514;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>
struct FacebookDelegate_1_t2910652574;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t3176762032;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>
struct FacebookDelegate_1_t1018651059;
// System.Uri
struct Uri_t1116831938;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppInviteResult>
struct FacebookDelegate_1_t3869440255;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>
struct FacebookDelegate_1_t1660139668;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupCreateResult>
struct FacebookDelegate_1_t3386649104;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupJoinResult>
struct FacebookDelegate_1_t901260670;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>
struct FacebookDelegate_1_t1951570800;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t696267445;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAccessTokenRefreshResult>
struct FacebookDelegate_1_t3142103211;

#include "codegen/il2cpp-codegen.h"
#include "Facebook_Unity_Facebook_Unity_CallbackManager1300627398.h"
#include "mscorlib_System_String7231557.h"
#include "Facebook_Unity_Facebook_Unity_HideUnityDelegate3175190102.h"
#include "Facebook_Unity_Facebook_Unity_InitDelegate5726901.h"
#include "mscorlib_System_Nullable_1_gen3557757347.h"
#include "mscorlib_System_Nullable_1_gen1237965023.h"
#include "System_System_Uri1116831938.h"
#include "mscorlib_System_Nullable_1_gen81078199.h"
#include "Facebook_Unity_Facebook_Unity_ShareDialogMode56248424.h"

// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::.ctor()
extern "C"  void AndroidFacebook__ctor_m1999649409 (AndroidFacebook_t2774136887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::.ctor(Facebook.Unity.Mobile.Android.IAndroidWrapper,Facebook.Unity.CallbackManager)
extern "C"  void AndroidFacebook__ctor_m1226104977 (AndroidFacebook_t2774136887 * __this, Il2CppObject * ___facebookJavaClass0, CallbackManager_t1300627398 * ___callbackManager1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Mobile.Android.AndroidFacebook::get_KeyHash()
extern "C"  String_t* AndroidFacebook_get_KeyHash_m3467680678 (AndroidFacebook_t2774136887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::set_KeyHash(System.String)
extern "C"  void AndroidFacebook_set_KeyHash_m3345061139 (AndroidFacebook_t2774136887 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.Mobile.Android.AndroidFacebook::get_LimitEventUsage()
extern "C"  bool AndroidFacebook_get_LimitEventUsage_m3395151882 (AndroidFacebook_t2774136887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::set_LimitEventUsage(System.Boolean)
extern "C"  void AndroidFacebook_set_LimitEventUsage_m2622308283 (AndroidFacebook_t2774136887 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Mobile.Android.AndroidFacebook::get_SDKName()
extern "C"  String_t* AndroidFacebook_get_SDKName_m2510877566 (AndroidFacebook_t2774136887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Mobile.Android.AndroidFacebook::get_SDKVersion()
extern "C"  String_t* AndroidFacebook_get_SDKVersion_m2110262247 (AndroidFacebook_t2774136887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::Init(System.String,Facebook.Unity.HideUnityDelegate,Facebook.Unity.InitDelegate)
extern "C"  void AndroidFacebook_Init_m3665737270 (AndroidFacebook_t2774136887 * __this, String_t* ___appId0, HideUnityDelegate_t3175190102 * ___hideUnityDelegate1, InitDelegate_t5726901 * ___onInitComplete2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::LogInWithReadPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void AndroidFacebook_LogInWithReadPermissions_m3034588238 (AndroidFacebook_t2774136887 * __this, Il2CppObject* ___permissions0, FacebookDelegate_1_t2910652574 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::LogInWithPublishPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void AndroidFacebook_LogInWithPublishPermissions_m3209969903 (AndroidFacebook_t2774136887 * __this, Il2CppObject* ___permissions0, FacebookDelegate_1_t2910652574 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::LogOut()
extern "C"  void AndroidFacebook_LogOut_m4262832397 (AndroidFacebook_t2774136887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::AppRequest(System.String,System.Nullable`1<Facebook.Unity.OGActionType>,System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>)
extern "C"  void AndroidFacebook_AppRequest_m1841817918 (AndroidFacebook_t2774136887 * __this, String_t* ___message0, Nullable_1_t3557757347  ___actionType1, String_t* ___objectId2, Il2CppObject* ___to3, Il2CppObject* ___filters4, Il2CppObject* ___excludeIds5, Nullable_1_t1237965023  ___maxRecipients6, String_t* ___data7, String_t* ___title8, FacebookDelegate_1_t1018651059 * ___callback9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::AppInvite(System.Uri,System.Uri,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppInviteResult>)
extern "C"  void AndroidFacebook_AppInvite_m4062058475 (AndroidFacebook_t2774136887 * __this, Uri_t1116831938 * ___appLinkUrl0, Uri_t1116831938 * ___previewImageUrl1, FacebookDelegate_1_t3869440255 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::ShareLink(System.Uri,System.String,System.String,System.Uri,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void AndroidFacebook_ShareLink_m54005863 (AndroidFacebook_t2774136887 * __this, Uri_t1116831938 * ___contentURL0, String_t* ___contentTitle1, String_t* ___contentDescription2, Uri_t1116831938 * ___photoURL3, FacebookDelegate_1_t1660139668 * ___callback4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::FeedShare(System.String,System.Uri,System.String,System.String,System.String,System.Uri,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void AndroidFacebook_FeedShare_m1994897491 (AndroidFacebook_t2774136887 * __this, String_t* ___toId0, Uri_t1116831938 * ___link1, String_t* ___linkName2, String_t* ___linkCaption3, String_t* ___linkDescription4, Uri_t1116831938 * ___picture5, String_t* ___mediaSource6, FacebookDelegate_1_t1660139668 * ___callback7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupCreateResult>)
extern "C"  void AndroidFacebook_GameGroupCreate_m185882151 (AndroidFacebook_t2774136887 * __this, String_t* ___name0, String_t* ___description1, String_t* ___privacy2, FacebookDelegate_1_t3386649104 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::GameGroupJoin(System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupJoinResult>)
extern "C"  void AndroidFacebook_GameGroupJoin_m2107065339 (AndroidFacebook_t2774136887 * __this, String_t* ___id0, FacebookDelegate_1_t901260670 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::GetAppLink(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>)
extern "C"  void AndroidFacebook_GetAppLink_m1899330491 (AndroidFacebook_t2774136887 * __this, FacebookDelegate_1_t1951570800 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void AndroidFacebook_AppEventsLogEvent_m2880167284 (AndroidFacebook_t2774136887 * __this, String_t* ___logEvent0, Nullable_1_t81078199  ___valueToSum1, Dictionary_2_t696267445 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void AndroidFacebook_AppEventsLogPurchase_m3792714604 (AndroidFacebook_t2774136887 * __this, float ___logPurchase0, String_t* ___currency1, Dictionary_2_t696267445 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::ActivateApp(System.String)
extern "C"  void AndroidFacebook_ActivateApp_m4245303893 (AndroidFacebook_t2774136887 * __this, String_t* ___appId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::FetchDeferredAppLink(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>)
extern "C"  void AndroidFacebook_FetchDeferredAppLink_m3557238584 (AndroidFacebook_t2774136887 * __this, FacebookDelegate_1_t1951570800 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::RefreshCurrentAccessToken(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAccessTokenRefreshResult>)
extern "C"  void AndroidFacebook_RefreshCurrentAccessToken_m3754767688 (AndroidFacebook_t2774136887 * __this, FacebookDelegate_1_t3142103211 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::SetShareDialogMode(Facebook.Unity.ShareDialogMode)
extern "C"  void AndroidFacebook_SetShareDialogMode_m574774210 (AndroidFacebook_t2774136887 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.Android.AndroidFacebook::CallFB(System.String,System.String)
extern "C"  void AndroidFacebook_CallFB_m2918292065 (AndroidFacebook_t2774136887 * __this, String_t* ___method0, String_t* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
