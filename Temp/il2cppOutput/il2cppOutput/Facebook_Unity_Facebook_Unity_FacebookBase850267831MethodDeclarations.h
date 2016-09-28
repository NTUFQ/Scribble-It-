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

// Facebook.Unity.FacebookBase
struct FacebookBase_t850267831;
// Facebook.Unity.CallbackManager
struct CallbackManager_t1300627398;
// System.String
struct String_t;
// Facebook.Unity.InitDelegate
struct InitDelegate_t5726901;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t3308144514;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t3176762032;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>
struct FacebookDelegate_1_t1018651059;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t405523272;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>
struct FacebookDelegate_1_t3255442115;
// UnityEngine.WWWForm
struct WWWForm_t461342257;
// Facebook.Unity.ResultContainer
struct ResultContainer_t3731608834;
// Facebook.Unity.LoginResult
struct LoginResult_t1256196228;
// System.Uri
struct Uri_t1116831938;
// Facebook.Unity.ILoginResult
struct ILoginResult_t528611517;

#include "codegen/il2cpp-codegen.h"
#include "Facebook_Unity_Facebook_Unity_CallbackManager1300627398.h"
#include "Facebook_Unity_Facebook_Unity_InitDelegate5726901.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Nullable_1_gen1237965023.h"
#include "Facebook_Unity_Facebook_Unity_HttpMethod1387929545.h"
#include "UnityEngine_UnityEngine_WWWForm461342257.h"
#include "Facebook_Unity_Facebook_Unity_ResultContainer3731608834.h"
#include "mscorlib_System_Nullable_1_gen3557757347.h"
#include "Facebook_Unity_Facebook_Unity_LoginResult1256196228.h"

// System.Void Facebook.Unity.FacebookBase::.ctor(Facebook.Unity.CallbackManager)
extern "C"  void FacebookBase__ctor_m4145665389 (FacebookBase_t850267831 * __this, CallbackManager_t1300627398 * ___callbackManager0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.FacebookBase::get_SDKUserAgent()
extern "C"  String_t* FacebookBase_get_SDKUserAgent_m214297398 (FacebookBase_t850267831 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.FacebookBase::get_LoggedIn()
extern "C"  bool FacebookBase_get_LoggedIn_m3396084750 (FacebookBase_t850267831 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.FacebookBase::get_Initialized()
extern "C"  bool FacebookBase_get_Initialized_m767656591 (FacebookBase_t850267831 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::set_Initialized(System.Boolean)
extern "C"  void FacebookBase_set_Initialized_m2400594432 (FacebookBase_t850267831 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.CallbackManager Facebook.Unity.FacebookBase::get_CallbackManager()
extern "C"  CallbackManager_t1300627398 * FacebookBase_get_CallbackManager_m1397720613 (FacebookBase_t850267831 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::set_CallbackManager(Facebook.Unity.CallbackManager)
extern "C"  void FacebookBase_set_CallbackManager_m3353522710 (FacebookBase_t850267831 * __this, CallbackManager_t1300627398 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::Init(Facebook.Unity.InitDelegate)
extern "C"  void FacebookBase_Init_m2509294524 (FacebookBase_t850267831 * __this, InitDelegate_t5726901 * ___onInitComplete0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::LogOut()
extern "C"  void FacebookBase_LogOut_m662397498 (FacebookBase_t850267831 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::AppRequest(System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>)
extern "C"  void FacebookBase_AppRequest_m3718848465 (FacebookBase_t850267831 * __this, String_t* ___message0, Il2CppObject* ___to1, Il2CppObject* ___filters2, Il2CppObject* ___excludeIds3, Nullable_1_t1237965023  ___maxRecipients4, String_t* ___data5, String_t* ___title6, FacebookDelegate_1_t1018651059 * ___callback7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::API(System.String,Facebook.Unity.HttpMethod,System.Collections.Generic.IDictionary`2<System.String,System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>)
extern "C"  void FacebookBase_API_m2162567596 (FacebookBase_t850267831 * __this, String_t* ___query0, int32_t ___method1, Il2CppObject* ___formData2, FacebookDelegate_1_t3255442115 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::API(System.String,Facebook.Unity.HttpMethod,UnityEngine.WWWForm,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>)
extern "C"  void FacebookBase_API_m2221766028 (FacebookBase_t850267831 * __this, String_t* ___query0, int32_t ___method1, WWWForm_t461342257 * ___formData2, FacebookDelegate_1_t3255442115 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::OnInitComplete(Facebook.Unity.ResultContainer)
extern "C"  void FacebookBase_OnInitComplete_m3990492469 (FacebookBase_t850267831 * __this, ResultContainer_t3731608834 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::OnLogoutComplete(Facebook.Unity.ResultContainer)
extern "C"  void FacebookBase_OnLogoutComplete_m1042012207 (FacebookBase_t850267831 * __this, ResultContainer_t3731608834 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::ValidateAppRequestArgs(System.String,System.Nullable`1<Facebook.Unity.OGActionType>,System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>)
extern "C"  void FacebookBase_ValidateAppRequestArgs_m3934855518 (FacebookBase_t850267831 * __this, String_t* ___message0, Nullable_1_t3557757347  ___actionType1, String_t* ___objectId2, Il2CppObject* ___to3, Il2CppObject* ___filters4, Il2CppObject* ___excludeIds5, Nullable_1_t1237965023  ___maxRecipients6, String_t* ___data7, String_t* ___title8, FacebookDelegate_1_t1018651059 * ___callback9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::OnAuthResponse(Facebook.Unity.LoginResult)
extern "C"  void FacebookBase_OnAuthResponse_m3374785811 (FacebookBase_t850267831 * __this, LoginResult_t1256196228 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.String> Facebook.Unity.FacebookBase::CopyByValue(System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern "C"  Il2CppObject* FacebookBase_CopyByValue_m341819304 (FacebookBase_t850267831 * __this, Il2CppObject* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri Facebook.Unity.FacebookBase::GetGraphUrl(System.String)
extern "C"  Uri_t1116831938 * FacebookBase_GetGraphUrl_m1290074699 (FacebookBase_t850267831 * __this, String_t* ___query0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::<OnInitComplete>m__0(Facebook.Unity.ILoginResult)
extern "C"  void FacebookBase_U3COnInitCompleteU3Em__0_m2170820039 (FacebookBase_t850267831 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
