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

// Facebook.Unity.Mobile.IOS.IOSFacebook
struct IOSFacebook_t3828157341;
// Facebook.Unity.Mobile.IOS.IIOSWrapper
struct IIOSWrapper_t674910905;
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
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t696267445;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>
struct FacebookDelegate_1_t1951570800;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAccessTokenRefreshResult>
struct FacebookDelegate_1_t3142103211;
// Facebook.Unity.Mobile.IOS.IOSFacebook/NativeDict
struct NativeDict_t2627293877;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t827649927;

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

// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::.ctor()
extern "C"  void IOSFacebook__ctor_m630221125 (IOSFacebook_t3828157341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::.ctor(Facebook.Unity.Mobile.IOS.IIOSWrapper,Facebook.Unity.CallbackManager)
extern "C"  void IOSFacebook__ctor_m900908181 (IOSFacebook_t3828157341 * __this, Il2CppObject * ___iosWrapper0, CallbackManager_t1300627398 * ___callbackManager1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.Mobile.IOS.IOSFacebook::get_LimitEventUsage()
extern "C"  bool IOSFacebook_get_LimitEventUsage_m1637474766 (IOSFacebook_t3828157341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::set_LimitEventUsage(System.Boolean)
extern "C"  void IOSFacebook_set_LimitEventUsage_m4142358655 (IOSFacebook_t3828157341 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Mobile.IOS.IOSFacebook::get_SDKName()
extern "C"  String_t* IOSFacebook_get_SDKName_m3130462786 (IOSFacebook_t3828157341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Mobile.IOS.IOSFacebook::get_SDKVersion()
extern "C"  String_t* IOSFacebook_get_SDKVersion_m404113059 (IOSFacebook_t3828157341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::Init(System.String,System.Boolean,System.String,Facebook.Unity.HideUnityDelegate,Facebook.Unity.InitDelegate)
extern "C"  void IOSFacebook_Init_m3282852063 (IOSFacebook_t3828157341 * __this, String_t* ___appId0, bool ___frictionlessRequests1, String_t* ___iosURLSuffix2, HideUnityDelegate_t3175190102 * ___hideUnityDelegate3, InitDelegate_t5726901 * ___onInitComplete4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::LogInWithReadPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void IOSFacebook_LogInWithReadPermissions_m1568051722 (IOSFacebook_t3828157341 * __this, Il2CppObject* ___permissions0, FacebookDelegate_1_t2910652574 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::LogInWithPublishPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void IOSFacebook_LogInWithPublishPermissions_m2027956659 (IOSFacebook_t3828157341 * __this, Il2CppObject* ___permissions0, FacebookDelegate_1_t2910652574 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::LogOut()
extern "C"  void IOSFacebook_LogOut_m465261257 (IOSFacebook_t3828157341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::AppRequest(System.String,System.Nullable`1<Facebook.Unity.OGActionType>,System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>)
extern "C"  void IOSFacebook_AppRequest_m3192917498 (IOSFacebook_t3828157341 * __this, String_t* ___message0, Nullable_1_t3557757347  ___actionType1, String_t* ___objectId2, Il2CppObject* ___to3, Il2CppObject* ___filters4, Il2CppObject* ___excludeIds5, Nullable_1_t1237965023  ___maxRecipients6, String_t* ___data7, String_t* ___title8, FacebookDelegate_1_t1018651059 * ___callback9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::AppInvite(System.Uri,System.Uri,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppInviteResult>)
extern "C"  void IOSFacebook_AppInvite_m4065335471 (IOSFacebook_t3828157341 * __this, Uri_t1116831938 * ___appLinkUrl0, Uri_t1116831938 * ___previewImageUrl1, FacebookDelegate_1_t3869440255 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::ShareLink(System.Uri,System.String,System.String,System.Uri,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void IOSFacebook_ShareLink_m1113916715 (IOSFacebook_t3828157341 * __this, Uri_t1116831938 * ___contentURL0, String_t* ___contentTitle1, String_t* ___contentDescription2, Uri_t1116831938 * ___photoURL3, FacebookDelegate_1_t1660139668 * ___callback4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::FeedShare(System.String,System.Uri,System.String,System.String,System.String,System.Uri,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void IOSFacebook_FeedShare_m3804002327 (IOSFacebook_t3828157341 * __this, String_t* ___toId0, Uri_t1116831938 * ___link1, String_t* ___linkName2, String_t* ___linkCaption3, String_t* ___linkDescription4, Uri_t1116831938 * ___picture5, String_t* ___mediaSource6, FacebookDelegate_1_t1660139668 * ___callback7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupCreateResult>)
extern "C"  void IOSFacebook_GameGroupCreate_m1299269867 (IOSFacebook_t3828157341 * __this, String_t* ___name0, String_t* ___description1, String_t* ___privacy2, FacebookDelegate_1_t3386649104 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::GameGroupJoin(System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupJoinResult>)
extern "C"  void IOSFacebook_GameGroupJoin_m3679471295 (IOSFacebook_t3828157341 * __this, String_t* ___id0, FacebookDelegate_1_t901260670 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void IOSFacebook_AppEventsLogEvent_m2929788464 (IOSFacebook_t3828157341 * __this, String_t* ___logEvent0, Nullable_1_t81078199  ___valueToSum1, Dictionary_2_t696267445 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void IOSFacebook_AppEventsLogPurchase_m411458600 (IOSFacebook_t3828157341 * __this, float ___logPurchase0, String_t* ___currency1, Dictionary_2_t696267445 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::ActivateApp(System.String)
extern "C"  void IOSFacebook_ActivateApp_m1595368721 (IOSFacebook_t3828157341 * __this, String_t* ___appId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::FetchDeferredAppLink(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>)
extern "C"  void IOSFacebook_FetchDeferredAppLink_m1146042356 (IOSFacebook_t3828157341 * __this, FacebookDelegate_1_t1951570800 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::GetAppLink(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>)
extern "C"  void IOSFacebook_GetAppLink_m2616985463 (IOSFacebook_t3828157341 * __this, FacebookDelegate_1_t1951570800 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::RefreshCurrentAccessToken(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAccessTokenRefreshResult>)
extern "C"  void IOSFacebook_RefreshCurrentAccessToken_m2595507716 (IOSFacebook_t3828157341 * __this, FacebookDelegate_1_t3142103211 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSFacebook::SetShareDialogMode(Facebook.Unity.ShareDialogMode)
extern "C"  void IOSFacebook_SetShareDialogMode_m4023523966 (IOSFacebook_t3828157341 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.Mobile.IOS.IIOSWrapper Facebook.Unity.Mobile.IOS.IOSFacebook::GetIOSWrapper()
extern "C"  Il2CppObject * IOSFacebook_GetIOSWrapper_m2047734287 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.Mobile.IOS.IOSFacebook/NativeDict Facebook.Unity.Mobile.IOS.IOSFacebook::MarshallDict(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  NativeDict_t2627293877 * IOSFacebook_MarshallDict_m3113037532 (Il2CppObject * __this /* static, unused */, Dictionary_2_t696267445 * ___dict0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.Mobile.IOS.IOSFacebook/NativeDict Facebook.Unity.Mobile.IOS.IOSFacebook::MarshallDict(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  NativeDict_t2627293877 * IOSFacebook_MarshallDict_m522583854 (Il2CppObject * __this /* static, unused */, Dictionary_2_t827649927 * ___dict0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
