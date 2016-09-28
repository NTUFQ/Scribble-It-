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

// Facebook.Unity.Arcade.ArcadeFacebook/OnComplete
struct OnComplete_t3728454708;
// System.Object
struct Il2CppObject;
// Facebook.Unity.ResultContainer
struct ResultContainer_t3731608834;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "Facebook_Unity_Facebook_Unity_ResultContainer3731608834.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void Facebook.Unity.Arcade.ArcadeFacebook/OnComplete::.ctor(System.Object,System.IntPtr)
extern "C"  void OnComplete__ctor_m2453196746 (OnComplete_t3728454708 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook/OnComplete::Invoke(Facebook.Unity.ResultContainer)
extern "C"  void OnComplete_Invoke_m3020546209 (OnComplete_t3728454708 * __this, ResultContainer_t3731608834 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Facebook.Unity.Arcade.ArcadeFacebook/OnComplete::BeginInvoke(Facebook.Unity.ResultContainer,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnComplete_BeginInvoke_m1692855674 (OnComplete_t3728454708 * __this, ResultContainer_t3731608834 * ___resultContainer0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebook/OnComplete::EndInvoke(System.IAsyncResult)
extern "C"  void OnComplete_EndInvoke_m2133833434 (OnComplete_t3728454708 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
