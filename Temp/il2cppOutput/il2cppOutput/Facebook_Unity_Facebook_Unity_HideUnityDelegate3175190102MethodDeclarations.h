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

// Facebook.Unity.HideUnityDelegate
struct HideUnityDelegate_t3175190102;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void Facebook.Unity.HideUnityDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void HideUnityDelegate__ctor_m881599423 (HideUnityDelegate_t3175190102 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.HideUnityDelegate::Invoke(System.Boolean)
extern "C"  void HideUnityDelegate_Invoke_m3474081424 (HideUnityDelegate_t3175190102 * __this, bool ___isUnityShown0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Facebook.Unity.HideUnityDelegate::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * HideUnityDelegate_BeginInvoke_m4233816765 (HideUnityDelegate_t3175190102 * __this, bool ___isUnityShown0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.HideUnityDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void HideUnityDelegate_EndInvoke_m1875725647 (HideUnityDelegate_t3175190102 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
