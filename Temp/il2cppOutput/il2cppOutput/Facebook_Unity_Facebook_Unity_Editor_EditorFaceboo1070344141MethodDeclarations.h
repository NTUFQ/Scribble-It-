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

// Facebook.Unity.Editor.EditorFacebook
struct EditorFacebook_t1070344141;
// Facebook.Unity.Editor.IEditorWrapper
struct IEditorWrapper_t1154981111;
// Facebook.Unity.CallbackManager
struct CallbackManager_t1300627398;
// System.String
struct String_t;
// Facebook.Unity.IFacebookCallbackHandler
struct IFacebookCallbackHandler_t3361174390;
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
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupCreateResult>
struct FacebookDelegate_1_t3386649104;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupJoinResult>
struct FacebookDelegate_1_t901260670;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>
struct FacebookDelegate_1_t1951570800;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t696267445;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppInviteResult>
struct FacebookDelegate_1_t3869440255;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>
struct FacebookDelegate_1_t709409949;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAccessTokenRefreshResult>
struct FacebookDelegate_1_t3142103211;
// Facebook.Unity.ResultContainer
struct ResultContainer_t3731608834;

#include "codegen/il2cpp-codegen.h"
#include "Facebook_Unity_Facebook_Unity_CallbackManager1300627398.h"
#include "Facebook_Unity_Facebook_Unity_ShareDialogMode56248424.h"
#include "Facebook_Unity_Facebook_Unity_InitDelegate5726901.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Nullable_1_gen3557757347.h"
#include "mscorlib_System_Nullable_1_gen1237965023.h"
#include "System_System_Uri1116831938.h"
#include "mscorlib_System_Nullable_1_gen81078199.h"
#include "Facebook_Unity_Facebook_Unity_ResultContainer3731608834.h"

// System.Void Facebook.Unity.Editor.EditorFacebook::.ctor(Facebook.Unity.Editor.IEditorWrapper,Facebook.Unity.CallbackManager)
extern "C"  void EditorFacebook__ctor_m1967699253 (EditorFacebook_t1070344141 * __this, Il2CppObject * ___wrapper0, CallbackManager_t1300627398 * ___callbackManager1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::.ctor()
extern "C"  void EditorFacebook__ctor_m128443879 (EditorFacebook_t1070344141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.Editor.EditorFacebook::get_LimitEventUsage()
extern "C"  bool EditorFacebook_get_LimitEventUsage_m3699598092 (EditorFacebook_t1070344141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::set_LimitEventUsage(System.Boolean)
extern "C"  void EditorFacebook_set_LimitEventUsage_m935032353 (EditorFacebook_t1070344141 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.ShareDialogMode Facebook.Unity.Editor.EditorFacebook::get_ShareDialogMode()
extern "C"  int32_t EditorFacebook_get_ShareDialogMode_m2963258164 (EditorFacebook_t1070344141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::set_ShareDialogMode(Facebook.Unity.ShareDialogMode)
extern "C"  void EditorFacebook_set_ShareDialogMode_m2492611593 (EditorFacebook_t1070344141 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Editor.EditorFacebook::get_SDKName()
extern "C"  String_t* EditorFacebook_get_SDKName_m4023500862 (EditorFacebook_t1070344141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Editor.EditorFacebook::get_SDKVersion()
extern "C"  String_t* EditorFacebook_get_SDKVersion_m1874003751 (EditorFacebook_t1070344141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.IFacebookCallbackHandler Facebook.Unity.Editor.EditorFacebook::get_EditorGameObject()
extern "C"  Il2CppObject * EditorFacebook_get_EditorGameObject_m3854702208 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::Init(Facebook.Unity.InitDelegate)
extern "C"  void EditorFacebook_Init_m3376767023 (EditorFacebook_t1070344141 * __this, InitDelegate_t5726901 * ___onInitComplete0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::LogInWithReadPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void EditorFacebook_LogInWithReadPermissions_m3956034472 (EditorFacebook_t1070344141 * __this, Il2CppObject* ___permissions0, FacebookDelegate_1_t2910652574 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::LogInWithPublishPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void EditorFacebook_LogInWithPublishPermissions_m583770965 (EditorFacebook_t1070344141 * __this, Il2CppObject* ___permissions0, FacebookDelegate_1_t2910652574 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::AppRequest(System.String,System.Nullable`1<Facebook.Unity.OGActionType>,System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>)
extern "C"  void EditorFacebook_AppRequest_m3712340760 (EditorFacebook_t1070344141 * __this, String_t* ___message0, Nullable_1_t3557757347  ___actionType1, String_t* ___objectId2, Il2CppObject* ___to3, Il2CppObject* ___filters4, Il2CppObject* ___excludeIds5, Nullable_1_t1237965023  ___maxRecipients6, String_t* ___data7, String_t* ___title8, FacebookDelegate_1_t1018651059 * ___callback9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::ShareLink(System.Uri,System.String,System.String,System.Uri,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void EditorFacebook_ShareLink_m3243033805 (EditorFacebook_t1070344141 * __this, Uri_t1116831938 * ___contentURL0, String_t* ___contentTitle1, String_t* ___contentDescription2, Uri_t1116831938 * ___photoURL3, FacebookDelegate_1_t1660139668 * ___callback4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::FeedShare(System.String,System.Uri,System.String,System.String,System.String,System.Uri,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void EditorFacebook_FeedShare_m3052244281 (EditorFacebook_t1070344141 * __this, String_t* ___toId0, Uri_t1116831938 * ___link1, String_t* ___linkName2, String_t* ___linkCaption3, String_t* ___linkDescription4, Uri_t1116831938 * ___picture5, String_t* ___mediaSource6, FacebookDelegate_1_t1660139668 * ___callback7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupCreateResult>)
extern "C"  void EditorFacebook_GameGroupCreate_m2370594701 (EditorFacebook_t1070344141 * __this, String_t* ___name0, String_t* ___description1, String_t* ___privacy2, FacebookDelegate_1_t3386649104 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::GameGroupJoin(System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupJoinResult>)
extern "C"  void EditorFacebook_GameGroupJoin_m2864606561 (EditorFacebook_t1070344141 * __this, String_t* ___id0, FacebookDelegate_1_t901260670 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::ActivateApp(System.String)
extern "C"  void EditorFacebook_ActivateApp_m2011173167 (EditorFacebook_t1070344141 * __this, String_t* ___appId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::GetAppLink(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>)
extern "C"  void EditorFacebook_GetAppLink_m1427058709 (EditorFacebook_t1070344141 * __this, FacebookDelegate_1_t1951570800 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void EditorFacebook_AppEventsLogEvent_m304516430 (EditorFacebook_t1070344141 * __this, String_t* ___logEvent0, Nullable_1_t81078199  ___valueToSum1, Dictionary_2_t696267445 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void EditorFacebook_AppEventsLogPurchase_m2173296454 (EditorFacebook_t1070344141 * __this, float ___logPurchase0, String_t* ___currency1, Dictionary_2_t696267445 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::AppInvite(System.Uri,System.Uri,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppInviteResult>)
extern "C"  void EditorFacebook_AppInvite_m2066095697 (EditorFacebook_t1070344141 * __this, Uri_t1116831938 * ___appLinkUrl0, Uri_t1116831938 * ___previewImageUrl1, FacebookDelegate_1_t3869440255 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::FetchDeferredAppLink(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>)
extern "C"  void EditorFacebook_FetchDeferredAppLink_m2729882386 (EditorFacebook_t1070344141 * __this, FacebookDelegate_1_t1951570800 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>)
extern "C"  void EditorFacebook_Pay_m2299745340 (EditorFacebook_t1070344141 * __this, String_t* ___product0, String_t* ___action1, int32_t ___quantity2, Nullable_1_t1237965023  ___quantityMin3, Nullable_1_t1237965023  ___quantityMax4, String_t* ___requestId5, String_t* ___pricepointId6, String_t* ___testCurrency7, FacebookDelegate_1_t709409949 * ___callback8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::PayWithProductId(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>)
extern "C"  void EditorFacebook_PayWithProductId_m55450480 (EditorFacebook_t1070344141 * __this, String_t* ___productId0, String_t* ___action1, int32_t ___quantity2, Nullable_1_t1237965023  ___quantityMin3, Nullable_1_t1237965023  ___quantityMax4, String_t* ___requestId5, String_t* ___pricepointId6, String_t* ___testCurrency7, FacebookDelegate_1_t709409949 * ___callback8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::RefreshCurrentAccessToken(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAccessTokenRefreshResult>)
extern "C"  void EditorFacebook_RefreshCurrentAccessToken_m1554894114 (EditorFacebook_t1070344141 * __this, FacebookDelegate_1_t3142103211 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnAppRequestsComplete(Facebook.Unity.ResultContainer)
extern "C"  void EditorFacebook_OnAppRequestsComplete_m2642692161 (EditorFacebook_t1070344141 * __this, ResultContainer_t3731608834 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnGetAppLinkComplete(Facebook.Unity.ResultContainer)
extern "C"  void EditorFacebook_OnGetAppLinkComplete_m986173143 (EditorFacebook_t1070344141 * __this, ResultContainer_t3731608834 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnGroupCreateComplete(Facebook.Unity.ResultContainer)
extern "C"  void EditorFacebook_OnGroupCreateComplete_m382375319 (EditorFacebook_t1070344141 * __this, ResultContainer_t3731608834 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnGroupJoinComplete(Facebook.Unity.ResultContainer)
extern "C"  void EditorFacebook_OnGroupJoinComplete_m320502981 (EditorFacebook_t1070344141 * __this, ResultContainer_t3731608834 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnLoginComplete(Facebook.Unity.ResultContainer)
extern "C"  void EditorFacebook_OnLoginComplete_m483235429 (EditorFacebook_t1070344141 * __this, ResultContainer_t3731608834 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnShareLinkComplete(Facebook.Unity.ResultContainer)
extern "C"  void EditorFacebook_OnShareLinkComplete_m856688885 (EditorFacebook_t1070344141 * __this, ResultContainer_t3731608834 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnAppInviteComplete(Facebook.Unity.ResultContainer)
extern "C"  void EditorFacebook_OnAppInviteComplete_m2194223110 (EditorFacebook_t1070344141 * __this, ResultContainer_t3731608834 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnFetchDeferredAppLinkComplete(Facebook.Unity.ResultContainer)
extern "C"  void EditorFacebook_OnFetchDeferredAppLinkComplete_m2025869652 (EditorFacebook_t1070344141 * __this, ResultContainer_t3731608834 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnPayComplete(Facebook.Unity.ResultContainer)
extern "C"  void EditorFacebook_OnPayComplete_m4286202340 (EditorFacebook_t1070344141 * __this, ResultContainer_t3731608834 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnRefreshCurrentAccessTokenComplete(Facebook.Unity.ResultContainer)
extern "C"  void EditorFacebook_OnRefreshCurrentAccessTokenComplete_m1864077939 (EditorFacebook_t1070344141 * __this, ResultContainer_t3731608834 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnFacebookAuthResponseChange(Facebook.Unity.ResultContainer)
extern "C"  void EditorFacebook_OnFacebookAuthResponseChange_m2231513720 (EditorFacebook_t1070344141 * __this, ResultContainer_t3731608834 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnUrlResponse(System.String)
extern "C"  void EditorFacebook_OnUrlResponse_m2761035916 (EditorFacebook_t1070344141 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnHideUnity(System.Boolean)
extern "C"  void EditorFacebook_OnHideUnity_m2597542128 (EditorFacebook_t1070344141 * __this, bool ___hidden0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
