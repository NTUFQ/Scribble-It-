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

// Facebook.Unity.FB
struct FB_t3725712860;
// System.String
struct String_t;
// Facebook.Unity.IFacebook
struct IFacebook_t3463528877;
// Facebook.Unity.FB/OnDLLLoaded
struct OnDLLLoaded_t970356664;
// Facebook.Unity.InitDelegate
struct InitDelegate_t5726901;
// Facebook.Unity.HideUnityDelegate
struct HideUnityDelegate_t3175190102;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t3308144514;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>
struct FacebookDelegate_1_t2910652574;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>
struct FacebookDelegate_1_t1018651059;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t3176762032;
// System.Uri
struct Uri_t1116831938;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>
struct FacebookDelegate_1_t1660139668;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>
struct FacebookDelegate_1_t3255442115;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t405523272;
// UnityEngine.WWWForm
struct WWWForm_t461342257;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>
struct FacebookDelegate_1_t1951570800;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupCreateResult>
struct FacebookDelegate_1_t3386649104;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupJoinResult>
struct FacebookDelegate_1_t901260670;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t696267445;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "Facebook_Unity_Facebook_Unity_FB_OnDLLLoaded970356664.h"
#include "Facebook_Unity_Facebook_Unity_InitDelegate5726901.h"
#include "Facebook_Unity_Facebook_Unity_HideUnityDelegate3175190102.h"
#include "Facebook_Unity_Facebook_Unity_OGActionType3473630824.h"
#include "mscorlib_System_Nullable_1_gen1237965023.h"
#include "System_System_Uri1116831938.h"
#include "Facebook_Unity_Facebook_Unity_HttpMethod1387929545.h"
#include "UnityEngine_UnityEngine_WWWForm461342257.h"
#include "mscorlib_System_Nullable_1_gen81078199.h"

// System.Void Facebook.Unity.FB::.ctor()
extern "C"  void FB__ctor_m953325935 (FB_t3725712860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.FB::get_AppId()
extern "C"  String_t* FB_get_AppId_m3153876835 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::set_AppId(System.String)
extern "C"  void FB_set_AppId_m2568263862 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.FB::get_GraphApiVersion()
extern "C"  String_t* FB_get_GraphApiVersion_m633326099 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::set_GraphApiVersion(System.String)
extern "C"  void FB_set_GraphApiVersion_m767650630 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.FB::get_IsLoggedIn()
extern "C"  bool FB_get_IsLoggedIn_m2125248893 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.FB::get_IsInitialized()
extern "C"  bool FB_get_IsInitialized_m1433354944 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.FB::get_LimitAppEventUsage()
extern "C"  bool FB_get_LimitAppEventUsage_m779121177 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::set_LimitAppEventUsage(System.Boolean)
extern "C"  void FB_set_LimitAppEventUsage_m1246652630 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.IFacebook Facebook.Unity.FB::get_FacebookImpl()
extern "C"  Il2CppObject * FB_get_FacebookImpl_m1439873943 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::set_FacebookImpl(Facebook.Unity.IFacebook)
extern "C"  void FB_set_FacebookImpl_m2050077418 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.FB::get_FacebookDomain()
extern "C"  String_t* FB_get_FacebookDomain_m2001835557 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::set_FacebookDomain(System.String)
extern "C"  void FB_set_FacebookDomain_m2564506278 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.FB/OnDLLLoaded Facebook.Unity.FB::get_OnDLLLoadedDelegate()
extern "C"  OnDLLLoaded_t970356664 * FB_get_OnDLLLoadedDelegate_m902018446 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::set_OnDLLLoadedDelegate(Facebook.Unity.FB/OnDLLLoaded)
extern "C"  void FB_set_OnDLLLoadedDelegate_m3048129819 (Il2CppObject * __this /* static, unused */, OnDLLLoaded_t970356664 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::Init(Facebook.Unity.InitDelegate,Facebook.Unity.HideUnityDelegate,System.String)
extern "C"  void FB_Init_m1990457940 (Il2CppObject * __this /* static, unused */, InitDelegate_t5726901 * ___onInitComplete0, HideUnityDelegate_t3175190102 * ___onHideUnity1, String_t* ___authResponse2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::Init(System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,Facebook.Unity.HideUnityDelegate,Facebook.Unity.InitDelegate)
extern "C"  void FB_Init_m1570948877 (Il2CppObject * __this /* static, unused */, String_t* ___appId0, bool ___cookie1, bool ___logging2, bool ___status3, bool ___xfbml4, bool ___frictionlessRequests5, String_t* ___authResponse6, String_t* ___javascriptSDKLocale7, HideUnityDelegate_t3175190102 * ___onHideUnity8, InitDelegate_t5726901 * ___onInitComplete9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::LogInWithPublishPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void FB_LogInWithPublishPermissions_m3021785821 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___permissions0, FacebookDelegate_1_t2910652574 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::LogInWithReadPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void FB_LogInWithReadPermissions_m456102176 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___permissions0, FacebookDelegate_1_t2910652574 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::LogOut()
extern "C"  void FB_LogOut_m1891575775 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::AppRequest(System.String,Facebook.Unity.OGActionType,System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>)
extern "C"  void FB_AppRequest_m906749547 (Il2CppObject * __this /* static, unused */, String_t* ___message0, int32_t ___actionType1, String_t* ___objectId2, Il2CppObject* ___to3, String_t* ___data4, String_t* ___title5, FacebookDelegate_1_t1018651059 * ___callback6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::AppRequest(System.String,Facebook.Unity.OGActionType,System.String,System.Collections.Generic.IEnumerable`1<System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>)
extern "C"  void FB_AppRequest_m969233078 (Il2CppObject * __this /* static, unused */, String_t* ___message0, int32_t ___actionType1, String_t* ___objectId2, Il2CppObject* ___filters3, Il2CppObject* ___excludeIds4, Nullable_1_t1237965023  ___maxRecipients5, String_t* ___data6, String_t* ___title7, FacebookDelegate_1_t1018651059 * ___callback8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::AppRequest(System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>)
extern "C"  void FB_AppRequest_m44794316 (Il2CppObject * __this /* static, unused */, String_t* ___message0, Il2CppObject* ___to1, Il2CppObject* ___filters2, Il2CppObject* ___excludeIds3, Nullable_1_t1237965023  ___maxRecipients4, String_t* ___data5, String_t* ___title6, FacebookDelegate_1_t1018651059 * ___callback7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::ShareLink(System.Uri,System.String,System.String,System.Uri,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void FB_ShareLink_m3305243733 (Il2CppObject * __this /* static, unused */, Uri_t1116831938 * ___contentURL0, String_t* ___contentTitle1, String_t* ___contentDescription2, Uri_t1116831938 * ___photoURL3, FacebookDelegate_1_t1660139668 * ___callback4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::FeedShare(System.String,System.Uri,System.String,System.String,System.String,System.Uri,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void FB_FeedShare_m744940225 (Il2CppObject * __this /* static, unused */, String_t* ___toId0, Uri_t1116831938 * ___link1, String_t* ___linkName2, String_t* ___linkCaption3, String_t* ___linkDescription4, Uri_t1116831938 * ___picture5, String_t* ___mediaSource6, FacebookDelegate_1_t1660139668 * ___callback7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::API(System.String,Facebook.Unity.HttpMethod,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern "C"  void FB_API_m2405128183 (Il2CppObject * __this /* static, unused */, String_t* ___query0, int32_t ___method1, FacebookDelegate_1_t3255442115 * ___callback2, Il2CppObject* ___formData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::API(System.String,Facebook.Unity.HttpMethod,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>,UnityEngine.WWWForm)
extern "C"  void FB_API_m738898903 (Il2CppObject * __this /* static, unused */, String_t* ___query0, int32_t ___method1, FacebookDelegate_1_t3255442115 * ___callback2, WWWForm_t461342257 * ___formData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::ActivateApp()
extern "C"  void FB_ActivateApp_m4166678075 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::GetAppLink(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>)
extern "C"  void FB_GetAppLink_m3102192013 (Il2CppObject * __this /* static, unused */, FacebookDelegate_1_t1951570800 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::GameGroupCreate(System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupCreateResult>)
extern "C"  void FB_GameGroupCreate_m767992597 (Il2CppObject * __this /* static, unused */, String_t* ___name0, String_t* ___description1, String_t* ___privacy2, FacebookDelegate_1_t3386649104 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::GameGroupJoin(System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupJoinResult>)
extern "C"  void FB_GameGroupJoin_m1757989097 (Il2CppObject * __this /* static, unused */, String_t* ___id0, FacebookDelegate_1_t901260670 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::LogAppEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void FB_LogAppEvent_m3453384697 (Il2CppObject * __this /* static, unused */, String_t* ___logEvent0, Nullable_1_t81078199  ___valueToSum1, Dictionary_2_t696267445 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::LogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void FB_LogPurchase_m704759504 (Il2CppObject * __this /* static, unused */, float ___logPurchase0, String_t* ___currency1, Dictionary_2_t696267445 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::LogVersion()
extern "C"  void FB_LogVersion_m3570356969 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::.cctor()
extern "C"  void FB__cctor_m3301203998 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
