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

// Facebook.Unity.Utilities/Callback`1<System.Object>
struct Callback_1_t2151935188;
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

// System.Void Facebook.Unity.Utilities/Callback`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Callback_1__ctor_m3502288424_gshared (Callback_1_t2151935188 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Callback_1__ctor_m3502288424(__this, ___object0, ___method1, method) ((  void (*) (Callback_1_t2151935188 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Callback_1__ctor_m3502288424_gshared)(__this, ___object0, ___method1, method)
// System.Void Facebook.Unity.Utilities/Callback`1<System.Object>::Invoke(T)
extern "C"  void Callback_1_Invoke_m3346323740_gshared (Callback_1_t2151935188 * __this, Il2CppObject * ___obj0, const MethodInfo* method);
#define Callback_1_Invoke_m3346323740(__this, ___obj0, method) ((  void (*) (Callback_1_t2151935188 *, Il2CppObject *, const MethodInfo*))Callback_1_Invoke_m3346323740_gshared)(__this, ___obj0, method)
// System.IAsyncResult Facebook.Unity.Utilities/Callback`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Callback_1_BeginInvoke_m1006632937_gshared (Callback_1_t2151935188 * __this, Il2CppObject * ___obj0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Callback_1_BeginInvoke_m1006632937(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Callback_1_t2151935188 *, Il2CppObject *, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Callback_1_BeginInvoke_m1006632937_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Void Facebook.Unity.Utilities/Callback`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void Callback_1_EndInvoke_m2041672760_gshared (Callback_1_t2151935188 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Callback_1_EndInvoke_m2041672760(__this, ___result0, method) ((  void (*) (Callback_1_t2151935188 *, Il2CppObject *, const MethodInfo*))Callback_1_EndInvoke_m2041672760_gshared)(__this, ___result0, method)
