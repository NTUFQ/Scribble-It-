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

// Facebook.Unity.Canvas.CanvasFacebook
struct CanvasFacebook_t3651918198;
// Facebook.Unity.Canvas.ICanvasJSWrapper
struct ICanvasJSWrapper_t2006186241;
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
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>
struct FacebookDelegate_1_t1660139668;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>
struct FacebookDelegate_1_t709409949;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupCreateResult>
struct FacebookDelegate_1_t3386649104;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupJoinResult>
struct FacebookDelegate_1_t901260670;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>
struct FacebookDelegate_1_t1951570800;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t696267445;
// Facebook.Unity.ResultContainer
struct ResultContainer_t3731608834;
// Facebook.Unity.Utilities/Callback`1<Facebook.Unity.ResultContainer>
struct Callback_1_t1712727651;

#include "codegen/il2cpp-codegen.h"
#include "Facebook_Unity_Facebook_Unity_CallbackManager1300627398.h"
#include "mscorlib_System_String7231557.h"
#include "Facebook_Unity_Facebook_Unity_HideUnityDelegate3175190102.h"
#include "Facebook_Unity_Facebook_Unity_InitDelegate5726901.h"
#include "mscorlib_System_Nullable_1_gen3557757347.h"
#include "mscorlib_System_Nullable_1_gen1237965023.h"
#include "System_System_Uri1116831938.h"
#include "mscorlib_System_Nullable_1_gen81078199.h"
#include "Facebook_Unity_Facebook_Unity_ResultContainer3731608834.h"

// System.Void Facebook.Unity.Canvas.CanvasFacebook::.ctor()
extern "C"  void CanvasFacebook__ctor_m2263910471 (CanvasFacebook_t3651918198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::.ctor(Facebook.Unity.Canvas.ICanvasJSWrapper,Facebook.Unity.CallbackManager)
extern "C"  void CanvasFacebook__ctor_m3519467094 (CanvasFacebook_t3651918198 * __this, Il2CppObject * ___canvasJSWrapper0, CallbackManager_t1300627398 * ___callbackManager1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.Canvas.CanvasFacebook::get_LimitEventUsage()
extern "C"  bool CanvasFacebook_get_LimitEventUsage_m2303745388 (CanvasFacebook_t3651918198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::set_LimitEventUsage(System.Boolean)
extern "C"  void CanvasFacebook_set_LimitEventUsage_m2274543745 (CanvasFacebook_t3651918198 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Canvas.CanvasFacebook::get_SDKName()
extern "C"  String_t* CanvasFacebook_get_SDKName_m1626282654 (CanvasFacebook_t3651918198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Canvas.CanvasFacebook::get_SDKVersion()
extern "C"  String_t* CanvasFacebook_get_SDKVersion_m3062567111 (CanvasFacebook_t3651918198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Canvas.CanvasFacebook::get_SDKUserAgent()
extern "C"  String_t* CanvasFacebook_get_SDKUserAgent_m3318791657 (CanvasFacebook_t3651918198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::Init(System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,System.String,System.Boolean,Facebook.Unity.HideUnityDelegate,Facebook.Unity.InitDelegate)
extern "C"  void CanvasFacebook_Init_m949907860 (CanvasFacebook_t3651918198 * __this, String_t* ___appId0, bool ___cookie1, bool ___logging2, bool ___status3, bool ___xfbml4, String_t* ___channelUrl5, String_t* ___authResponse6, bool ___frictionlessRequests7, String_t* ___javascriptSDKLocale8, bool ___loadDebugJSSDK9, HideUnityDelegate_t3175190102 * ___hideUnityDelegate10, InitDelegate_t5726901 * ___onInitComplete11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::LogInWithPublishPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void CanvasFacebook_LogInWithPublishPermissions_m2781722037 (CanvasFacebook_t3651918198 * __this, Il2CppObject* ___permissions0, FacebookDelegate_1_t2910652574 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::LogInWithReadPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void CanvasFacebook_LogInWithReadPermissions_m3228194120 (CanvasFacebook_t3651918198 * __this, Il2CppObject* ___permissions0, FacebookDelegate_1_t2910652574 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::LogOut()
extern "C"  void CanvasFacebook_LogOut_m3864990727 (CanvasFacebook_t3651918198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::AppRequest(System.String,System.Nullable`1<Facebook.Unity.OGActionType>,System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>)
extern "C"  void CanvasFacebook_AppRequest_m2784822456 (CanvasFacebook_t3651918198 * __this, String_t* ___message0, Nullable_1_t3557757347  ___actionType1, String_t* ___objectId2, Il2CppObject* ___to3, Il2CppObject* ___filters4, Il2CppObject* ___excludeIds5, Nullable_1_t1237965023  ___maxRecipients6, String_t* ___data7, String_t* ___title8, FacebookDelegate_1_t1018651059 * ___callback9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::ActivateApp(System.String)
extern "C"  void CanvasFacebook_ActivateApp_m703632079 (CanvasFacebook_t3651918198 * __this, String_t* ___appId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::ShareLink(System.Uri,System.String,System.String,System.Uri,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void CanvasFacebook_ShareLink_m1680340781 (CanvasFacebook_t3651918198 * __this, Uri_t1116831938 * ___contentURL0, String_t* ___contentTitle1, String_t* ___contentDescription2, Uri_t1116831938 * ___photoURL3, FacebookDelegate_1_t1660139668 * ___callback4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::FeedShare(System.String,System.Uri,System.String,System.String,System.String,System.Uri,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void CanvasFacebook_FeedShare_m1463011225 (CanvasFacebook_t3651918198 * __this, String_t* ___toId0, Uri_t1116831938 * ___link1, String_t* ___linkName2, String_t* ___linkCaption3, String_t* ___linkDescription4, Uri_t1116831938 * ___picture5, String_t* ___mediaSource6, FacebookDelegate_1_t1660139668 * ___callback7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>)
extern "C"  void CanvasFacebook_Pay_m2679541212 (CanvasFacebook_t3651918198 * __this, String_t* ___product0, String_t* ___action1, int32_t ___quantity2, Nullable_1_t1237965023  ___quantityMin3, Nullable_1_t1237965023  ___quantityMax4, String_t* ___requestId5, String_t* ___pricepointId6, String_t* ___testCurrency7, FacebookDelegate_1_t709409949 * ___callback8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::PayWithProductId(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>)
extern "C"  void CanvasFacebook_PayWithProductId_m2584577488 (CanvasFacebook_t3651918198 * __this, String_t* ___productId0, String_t* ___action1, int32_t ___quantity2, Nullable_1_t1237965023  ___quantityMin3, Nullable_1_t1237965023  ___quantityMax4, String_t* ___requestId5, String_t* ___pricepointId6, String_t* ___testCurrency7, FacebookDelegate_1_t709409949 * ___callback8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupCreateResult>)
extern "C"  void CanvasFacebook_GameGroupCreate_m277309933 (CanvasFacebook_t3651918198 * __this, String_t* ___name0, String_t* ___description1, String_t* ___privacy2, FacebookDelegate_1_t3386649104 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::GameGroupJoin(System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupJoinResult>)
extern "C"  void CanvasFacebook_GameGroupJoin_m3751473089 (CanvasFacebook_t3651918198 * __this, String_t* ___id0, FacebookDelegate_1_t901260670 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::GetAppLink(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>)
extern "C"  void CanvasFacebook_GetAppLink_m3020949941 (CanvasFacebook_t3651918198 * __this, FacebookDelegate_1_t1951570800 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void CanvasFacebook_AppEventsLogEvent_m1029054190 (CanvasFacebook_t3651918198 * __this, String_t* ___logEvent0, Nullable_1_t81078199  ___valueToSum1, Dictionary_2_t696267445 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void CanvasFacebook_AppEventsLogPurchase_m3763384550 (CanvasFacebook_t3651918198 * __this, float ___logPurchase0, String_t* ___currency1, Dictionary_2_t696267445 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnLoginComplete(Facebook.Unity.ResultContainer)
extern "C"  void CanvasFacebook_OnLoginComplete_m3411826885 (CanvasFacebook_t3651918198 * __this, ResultContainer_t3731608834 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnGetAppLinkComplete(Facebook.Unity.ResultContainer)
extern "C"  void CanvasFacebook_OnGetAppLinkComplete_m619939959 (CanvasFacebook_t3651918198 * __this, ResultContainer_t3731608834 * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnFacebookAuthResponseChange(System.String)
extern "C"  void CanvasFacebook_OnFacebookAuthResponseChange_m2678317191 (CanvasFacebook_t3651918198 * __this, String_t* ___responseJsonData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnFacebookAuthResponseChange(Facebook.Unity.ResultContainer)
extern "C"  void CanvasFacebook_OnFacebookAuthResponseChange_m858410008 (CanvasFacebook_t3651918198 * __this, ResultContainer_t3731608834 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnPayComplete(System.String)
extern "C"  void CanvasFacebook_OnPayComplete_m2876146395 (CanvasFacebook_t3651918198 * __this, String_t* ___responseJsonData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnPayComplete(Facebook.Unity.ResultContainer)
extern "C"  void CanvasFacebook_OnPayComplete_m3314949188 (CanvasFacebook_t3651918198 * __this, ResultContainer_t3731608834 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnAppRequestsComplete(Facebook.Unity.ResultContainer)
extern "C"  void CanvasFacebook_OnAppRequestsComplete_m4174365345 (CanvasFacebook_t3651918198 * __this, ResultContainer_t3731608834 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnShareLinkComplete(Facebook.Unity.ResultContainer)
extern "C"  void CanvasFacebook_OnShareLinkComplete_m2645990229 (CanvasFacebook_t3651918198 * __this, ResultContainer_t3731608834 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnGroupCreateComplete(Facebook.Unity.ResultContainer)
extern "C"  void CanvasFacebook_OnGroupCreateComplete_m1914048503 (CanvasFacebook_t3651918198 * __this, ResultContainer_t3731608834 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnGroupJoinComplete(Facebook.Unity.ResultContainer)
extern "C"  void CanvasFacebook_OnGroupJoinComplete_m2109804325 (CanvasFacebook_t3651918198 * __this, ResultContainer_t3731608834 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnUrlResponse(System.String)
extern "C"  void CanvasFacebook_OnUrlResponse_m344500780 (CanvasFacebook_t3651918198 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnHideUnity(System.Boolean)
extern "C"  void CanvasFacebook_OnHideUnity_m718474064 (CanvasFacebook_t3651918198 * __this, bool ___isGameShown0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::FormatAuthResponse(Facebook.Unity.ResultContainer,Facebook.Unity.Utilities/Callback`1<Facebook.Unity.ResultContainer>)
extern "C"  void CanvasFacebook_FormatAuthResponse_m2588091403 (Il2CppObject * __this /* static, unused */, ResultContainer_t3731608834 * ___result0, Callback_1_t1712727651 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::PayImpl(System.String,System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>)
extern "C"  void CanvasFacebook_PayImpl_m2594645528 (CanvasFacebook_t3651918198 * __this, String_t* ___product0, String_t* ___productId1, String_t* ___action2, int32_t ___quantity3, Nullable_1_t1237965023  ___quantityMin4, Nullable_1_t1237965023  ___quantityMax5, String_t* ___requestId6, String_t* ___pricepointId7, String_t* ___testCurrency8, FacebookDelegate_1_t709409949 * ___callback9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::<OnLoginComplete>m__0(Facebook.Unity.ResultContainer)
extern "C"  void CanvasFacebook_U3COnLoginCompleteU3Em__0_m3880401884 (CanvasFacebook_t3651918198 * __this, ResultContainer_t3731608834 * ___formattedResponse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::<OnFacebookAuthResponseChange>m__1(Facebook.Unity.ResultContainer)
extern "C"  void CanvasFacebook_U3COnFacebookAuthResponseChangeU3Em__1_m4205560674 (Il2CppObject * __this /* static, unused */, ResultContainer_t3731608834 * ___formattedResponse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
