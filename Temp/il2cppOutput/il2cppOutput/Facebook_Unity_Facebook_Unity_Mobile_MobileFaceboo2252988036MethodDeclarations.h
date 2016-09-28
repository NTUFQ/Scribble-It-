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

// Facebook.Unity.Mobile.MobileFacebook
struct MobileFacebook_t2252988036;
// Facebook.Unity.CallbackManager
struct CallbackManager_t1300627398;
// Facebook.Unity.ResultContainer
struct ResultContainer_t3731608834;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t274140790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Facebook_Unity_Facebook_Unity_CallbackManager1300627398.h"
#include "Facebook_Unity_Facebook_Unity_ShareDialogMode56248424.h"
#include "Facebook_Unity_Facebook_Unity_ResultContainer3731608834.h"
#include "mscorlib_System_String7231557.h"

// System.Void Facebook.Unity.Mobile.MobileFacebook::.ctor(Facebook.Unity.CallbackManager)
extern "C"  void MobileFacebook__ctor_m3909681664 (MobileFacebook_t2252988036 * __this, CallbackManager_t1300627398 * ___callbackManager0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.ShareDialogMode Facebook.Unity.Mobile.MobileFacebook::get_ShareDialogMode()
extern "C"  int32_t MobileFacebook_get_ShareDialogMode_m4034331860 (MobileFacebook_t2252988036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.MobileFacebook::set_ShareDialogMode(Facebook.Unity.ShareDialogMode)
extern "C"  void MobileFacebook_set_ShareDialogMode_m885058985 (MobileFacebook_t2252988036 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.MobileFacebook::OnLoginComplete(Facebook.Unity.ResultContainer)
extern "C"  void MobileFacebook_OnLoginComplete_m2656442373 (MobileFacebook_t2252988036 * __this, ResultContainer_t3731608834 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.MobileFacebook::OnGetAppLinkComplete(Facebook.Unity.ResultContainer)
extern "C"  void MobileFacebook_OnGetAppLinkComplete_m2691649847 (MobileFacebook_t2252988036 * __this, ResultContainer_t3731608834 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.MobileFacebook::OnGroupCreateComplete(Facebook.Unity.ResultContainer)
extern "C"  void MobileFacebook_OnGroupCreateComplete_m1712545591 (MobileFacebook_t2252988036 * __this, ResultContainer_t3731608834 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.MobileFacebook::OnGroupJoinComplete(Facebook.Unity.ResultContainer)
extern "C"  void MobileFacebook_OnGroupJoinComplete_m3007917669 (MobileFacebook_t2252988036 * __this, ResultContainer_t3731608834 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.MobileFacebook::OnAppRequestsComplete(Facebook.Unity.ResultContainer)
extern "C"  void MobileFacebook_OnAppRequestsComplete_m3972862433 (MobileFacebook_t2252988036 * __this, ResultContainer_t3731608834 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.MobileFacebook::OnAppInviteComplete(Facebook.Unity.ResultContainer)
extern "C"  void MobileFacebook_OnAppInviteComplete_m586670502 (MobileFacebook_t2252988036 * __this, ResultContainer_t3731608834 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.MobileFacebook::OnFetchDeferredAppLinkComplete(Facebook.Unity.ResultContainer)
extern "C"  void MobileFacebook_OnFetchDeferredAppLinkComplete_m842030004 (MobileFacebook_t2252988036 * __this, ResultContainer_t3731608834 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.MobileFacebook::OnShareLinkComplete(Facebook.Unity.ResultContainer)
extern "C"  void MobileFacebook_OnShareLinkComplete_m3544103573 (MobileFacebook_t2252988036 * __this, ResultContainer_t3731608834 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.MobileFacebook::OnRefreshCurrentAccessTokenComplete(Facebook.Unity.ResultContainer)
extern "C"  void MobileFacebook_OnRefreshCurrentAccessTokenComplete_m3488810003 (MobileFacebook_t2252988036 * __this, ResultContainer_t3731608834 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Facebook.Unity.Mobile.MobileFacebook::DeserializeMessage(System.String)
extern "C"  Il2CppObject* MobileFacebook_DeserializeMessage_m46503840 (Il2CppObject * __this /* static, unused */, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Mobile.MobileFacebook::SerializeDictionary(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  String_t* MobileFacebook_SerializeDictionary_m3604786340 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___dict0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.Mobile.MobileFacebook::TryGetCallbackId(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.String&)
extern "C"  bool MobileFacebook_TryGetCallbackId_m3050673950 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___result0, String_t** ___callbackId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.Mobile.MobileFacebook::TryGetError(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.String&)
extern "C"  bool MobileFacebook_TryGetError_m1711977588 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___result0, String_t** ___errorMessage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
