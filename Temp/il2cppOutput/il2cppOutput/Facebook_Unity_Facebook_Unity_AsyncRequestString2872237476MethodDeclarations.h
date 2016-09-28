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

// Facebook.Unity.AsyncRequestString
struct AsyncRequestString_t2872237476;
// System.Uri
struct Uri_t1116831938;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t827649927;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>
struct FacebookDelegate_1_t3255442115;
// UnityEngine.WWWForm
struct WWWForm_t461342257;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t405523272;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri1116831938.h"
#include "Facebook_Unity_Facebook_Unity_HttpMethod1387929545.h"
#include "UnityEngine_UnityEngine_WWWForm461342257.h"

// System.Void Facebook.Unity.AsyncRequestString::.ctor()
extern "C"  void AsyncRequestString__ctor_m2098800807 (AsyncRequestString_t2872237476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.AsyncRequestString::Post(System.Uri,System.Collections.Generic.Dictionary`2<System.String,System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>)
extern "C"  void AsyncRequestString_Post_m2827532581 (Il2CppObject * __this /* static, unused */, Uri_t1116831938 * ___url0, Dictionary_2_t827649927 * ___formData1, FacebookDelegate_1_t3255442115 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.AsyncRequestString::Get(System.Uri,System.Collections.Generic.Dictionary`2<System.String,System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>)
extern "C"  void AsyncRequestString_Get_m568742115 (Il2CppObject * __this /* static, unused */, Uri_t1116831938 * ___url0, Dictionary_2_t827649927 * ___formData1, FacebookDelegate_1_t3255442115 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.AsyncRequestString::Request(System.Uri,Facebook.Unity.HttpMethod,UnityEngine.WWWForm,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>)
extern "C"  void AsyncRequestString_Request_m2095232187 (Il2CppObject * __this /* static, unused */, Uri_t1116831938 * ___url0, int32_t ___method1, WWWForm_t461342257 * ___query2, FacebookDelegate_1_t3255442115 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.AsyncRequestString::Request(System.Uri,Facebook.Unity.HttpMethod,System.Collections.Generic.IDictionary`2<System.String,System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>)
extern "C"  void AsyncRequestString_Request_m3036159771 (Il2CppObject * __this /* static, unused */, Uri_t1116831938 * ___url0, int32_t ___method1, Il2CppObject* ___formData2, FacebookDelegate_1_t3255442115 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Facebook.Unity.AsyncRequestString::Start()
extern "C"  Il2CppObject * AsyncRequestString_Start_m2373547405 (AsyncRequestString_t2872237476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.AsyncRequestString Facebook.Unity.AsyncRequestString::SetUrl(System.Uri)
extern "C"  AsyncRequestString_t2872237476 * AsyncRequestString_SetUrl_m2132156335 (AsyncRequestString_t2872237476 * __this, Uri_t1116831938 * ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.AsyncRequestString Facebook.Unity.AsyncRequestString::SetMethod(Facebook.Unity.HttpMethod)
extern "C"  AsyncRequestString_t2872237476 * AsyncRequestString_SetMethod_m1315799666 (AsyncRequestString_t2872237476 * __this, int32_t ___method0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.AsyncRequestString Facebook.Unity.AsyncRequestString::SetFormData(System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern "C"  AsyncRequestString_t2872237476 * AsyncRequestString_SetFormData_m2394689675 (AsyncRequestString_t2872237476 * __this, Il2CppObject* ___formData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.AsyncRequestString Facebook.Unity.AsyncRequestString::SetQuery(UnityEngine.WWWForm)
extern "C"  AsyncRequestString_t2872237476 * AsyncRequestString_SetQuery_m1531396697 (AsyncRequestString_t2872237476 * __this, WWWForm_t461342257 * ___query0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.AsyncRequestString Facebook.Unity.AsyncRequestString::SetCallback(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>)
extern "C"  AsyncRequestString_t2872237476 * AsyncRequestString_SetCallback_m561347744 (AsyncRequestString_t2872237476 * __this, FacebookDelegate_1_t3255442115 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
