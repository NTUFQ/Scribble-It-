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

// Facebook.Unity.Arcade.ArcadeFacebook
struct ArcadeFacebook_t3259079902;
// Facebook.Unity.Arcade.IArcadeWrapper
struct IArcadeWrapper_t4074360930;
// Facebook.Unity.CallbackManager
struct CallbackManager_t1300627398;
// System.String
struct String_t;
// Facebook.Unity.HideUnityDelegate
struct HideUnityDelegate_t3175190102;
// Facebook.Unity.InitDelegate
struct InitDelegate_t5726901;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t696267445;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t3308144514;
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
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>
struct FacebookDelegate_1_t2910652574;
// Facebook.Unity.ResultContainer
struct ResultContainer_t3731608834;

#include "codegen/il2cpp-codegen.h"
#include "Facebook_Unity_Facebook_Unity_CallbackManager1300627398.h"
#include "mscorlib_System_String7231557.h"
#include "Facebook_Unity_Facebook_Unity_HideUnityDelegate3175190102.h"
#include "Facebook_Unity_Facebook_Unity_InitDelegate5726901.h"
#include "mscorlib_System_Nullable_1_gen81078199.h"
#include "mscorlib_System_Nullable_1_gen3557757347.h"
#include "mscorlib_System_Nullable_1_gen1237965023.h"
#include "System_System_Uri1116831938.h"
#include "Facebook_Unity_Facebook_Unity_ResultContainer3731608834.h"

// System.Void Facebook.Unity.Arcade.ArcadeFacebook::.ctor()
extern "C"  void ArcadeFacebook__ctor_m2060797767 (ArcadeFacebook_t3259079902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::.ctor(Facebook.Unity.Arcade.IArcadeWrapper,Facebook.Unity.CallbackManager)
extern "C"  void ArcadeFacebook__ctor_m2377269455 (ArcadeFacebook_t3259079902 * __this, Il2CppObject * ___arcadeWrapper0, CallbackManager_t1300627398 * ___callbackManager1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.Arcade.ArcadeFacebook::get_LimitEventUsage()
extern "C"  bool ArcadeFacebook_get_LimitEventUsage_m2457525356 (ArcadeFacebook_t3259079902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::set_LimitEventUsage(System.Boolean)
extern "C"  void ArcadeFacebook_set_LimitEventUsage_m418580353 (ArcadeFacebook_t3259079902 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Arcade.ArcadeFacebook::get_SDKName()
extern "C"  String_t* ArcadeFacebook_get_SDKName_m2684918174 (ArcadeFacebook_t3259079902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Arcade.ArcadeFacebook::get_SDKVersion()
extern "C"  String_t* ArcadeFacebook_get_SDKVersion_m2928488903 (ArcadeFacebook_t3259079902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::Init(System.String,Facebook.Unity.HideUnityDelegate,Facebook.Unity.InitDelegate)
extern "C"  void ArcadeFacebook_Init_m2273826864 (ArcadeFacebook_t3259079902 * __this, String_t* ___appId0, HideUnityDelegate_t3175190102 * ___hideUnityDelegate1, InitDelegate_t5726901 * ___onInitComplete2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::ActivateApp(System.String)
extern "C"  void ArcadeFacebook_ActivateApp_m41776079 (ArcadeFacebook_t3259079902 * __this, String_t* ___appId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void ArcadeFacebook_AppEventsLogEvent_m3545071598 (ArcadeFacebook_t3259079902 * __this, String_t* ___logEvent0, Nullable_1_t81078199  ___valueToSum1, Dictionary_2_t696267445 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void ArcadeFacebook_AppEventsLogPurchase_m3945402854 (ArcadeFacebook_t3259079902 * __this, float ___logPurchase0, String_t* ___currency1, Dictionary_2_t696267445 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::AppRequest(System.String,System.Nullable`1<Facebook.Unity.OGActionType>,System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>)
extern "C"  void ArcadeFacebook_AppRequest_m1740989880 (ArcadeFacebook_t3259079902 * __this, String_t* ___message0, Nullable_1_t3557757347  ___actionType1, String_t* ___objectId2, Il2CppObject* ___to3, Il2CppObject* ___filters4, Il2CppObject* ___excludeIds5, Nullable_1_t1237965023  ___maxRecipients6, String_t* ___data7, String_t* ___title8, FacebookDelegate_1_t1018651059 * ___callback9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::FeedShare(System.String,System.Uri,System.String,System.String,System.String,System.Uri,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void ArcadeFacebook_FeedShare_m177227417 (ArcadeFacebook_t3259079902 * __this, String_t* ___toId0, Uri_t1116831938 * ___link1, String_t* ___linkName2, String_t* ___linkCaption3, String_t* ___linkDescription4, Uri_t1116831938 * ___picture5, String_t* ___mediaSource6, FacebookDelegate_1_t1660139668 * ___callback7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::ShareLink(System.Uri,System.String,System.String,System.Uri,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void ArcadeFacebook_ShareLink_m3204658733 (ArcadeFacebook_t3259079902 * __this, Uri_t1116831938 * ___contentURL0, String_t* ___contentTitle1, String_t* ___contentDescription2, Uri_t1116831938 * ___photoURL3, FacebookDelegate_1_t1660139668 * ___callback4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>)
extern "C"  void ArcadeFacebook_Pay_m1059598044 (ArcadeFacebook_t3259079902 * __this, String_t* ___product0, String_t* ___action1, int32_t ___quantity2, Nullable_1_t1237965023  ___quantityMin3, Nullable_1_t1237965023  ___quantityMax4, String_t* ___requestId5, String_t* ___pricepointId6, String_t* ___testCurrency7, FacebookDelegate_1_t709409949 * ___callback8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::PayWithProductId(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>)
extern "C"  void ArcadeFacebook_PayWithProductId_m3590948048 (ArcadeFacebook_t3259079902 * __this, String_t* ___productId0, String_t* ___action1, int32_t ___quantity2, Nullable_1_t1237965023  ___quantityMin3, Nullable_1_t1237965023  ___quantityMax4, String_t* ___requestId5, String_t* ___pricepointId6, String_t* ___testCurrency7, FacebookDelegate_1_t709409949 * ___callback8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupCreateResult>)
extern "C"  void ArcadeFacebook_GameGroupCreate_m4255852781 (ArcadeFacebook_t3259079902 * __this, String_t* ___name0, String_t* ___description1, String_t* ___privacy2, FacebookDelegate_1_t3386649104 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::GameGroupJoin(System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupJoinResult>)
extern "C"  void ArcadeFacebook_GameGroupJoin_m326807233 (ArcadeFacebook_t3259079902 * __this, String_t* ___id0, FacebookDelegate_1_t901260670 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::GetAppLink(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>)
extern "C"  void ArcadeFacebook_GetAppLink_m381856437 (ArcadeFacebook_t3259079902 * __this, FacebookDelegate_1_t1951570800 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::LogInWithPublishPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void ArcadeFacebook_LogInWithPublishPermissions_m3265000629 (ArcadeFacebook_t3259079902 * __this, Il2CppObject* ___scope0, FacebookDelegate_1_t2910652574 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::LogInWithReadPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void ArcadeFacebook_LogInWithReadPermissions_m895252040 (ArcadeFacebook_t3259079902 * __this, Il2CppObject* ___scope0, FacebookDelegate_1_t2910652574 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::OnAppRequestsComplete(Facebook.Unity.ResultContainer)
extern "C"  void ArcadeFacebook_OnAppRequestsComplete_m3762176417 (ArcadeFacebook_t3259079902 * __this, ResultContainer_t3731608834 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::OnGetAppLinkComplete(Facebook.Unity.ResultContainer)
extern "C"  void ArcadeFacebook_OnGetAppLinkComplete_m1715022199 (ArcadeFacebook_t3259079902 * __this, ResultContainer_t3731608834 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::OnGroupCreateComplete(Facebook.Unity.ResultContainer)
extern "C"  void ArcadeFacebook_OnGroupCreateComplete_m1501859575 (ArcadeFacebook_t3259079902 * __this, ResultContainer_t3731608834 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::OnGroupJoinComplete(Facebook.Unity.ResultContainer)
extern "C"  void ArcadeFacebook_OnGroupJoinComplete_m482561573 (ArcadeFacebook_t3259079902 * __this, ResultContainer_t3731608834 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::OnLoginComplete(Facebook.Unity.ResultContainer)
extern "C"  void ArcadeFacebook_OnLoginComplete_m2337675205 (ArcadeFacebook_t3259079902 * __this, ResultContainer_t3731608834 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::OnShareLinkComplete(Facebook.Unity.ResultContainer)
extern "C"  void ArcadeFacebook_OnShareLinkComplete_m1018747477 (ArcadeFacebook_t3259079902 * __this, ResultContainer_t3731608834 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::OnPayComplete(Facebook.Unity.ResultContainer)
extern "C"  void ArcadeFacebook_OnPayComplete_m1727241028 (ArcadeFacebook_t3259079902 * __this, ResultContainer_t3731608834 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.Arcade.ArcadeFacebook::HaveReceivedPipeResponse()
extern "C"  bool ArcadeFacebook_HaveReceivedPipeResponse_m1515731207 (ArcadeFacebook_t3259079902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Arcade.ArcadeFacebook::GetPipeResponse(System.String)
extern "C"  String_t* ArcadeFacebook_GetPipeResponse_m3405293307 (ArcadeFacebook_t3259079902 * __this, String_t* ___callbackId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.Arcade.IArcadeWrapper Facebook.Unity.Arcade.ArcadeFacebook::GetArcadeWrapper()
extern "C"  Il2CppObject * ArcadeFacebook_GetArcadeWrapper_m173676110 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::PayImpl(System.String,System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>)
extern "C"  void ArcadeFacebook_PayImpl_m3344074520 (ArcadeFacebook_t3259079902 * __this, String_t* ___product0, String_t* ___productId1, String_t* ___action2, int32_t ___quantity3, Nullable_1_t1237965023  ___quantityMin4, Nullable_1_t1237965023  ___quantityMax5, String_t* ___requestId6, String_t* ___pricepointId7, String_t* ___testCurrency8, FacebookDelegate_1_t709409949 * ___callback9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook::LoginWithPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void ArcadeFacebook_LoginWithPermissions_m1495881310 (ArcadeFacebook_t3259079902 * __this, Il2CppObject* ___scope0, FacebookDelegate_1_t2910652574 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
