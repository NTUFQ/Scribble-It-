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

// System.Action`1<System.Byte>
struct Action_1_t3258425796;
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

// System.Void System.Action`1<System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m2238172157_gshared (Action_1_t3258425796 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_1__ctor_m2238172157(__this, ___object0, ___method1, method) ((  void (*) (Action_1_t3258425796 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_1__ctor_m2238172157_gshared)(__this, ___object0, ___method1, method)
// System.Void System.Action`1<System.Byte>::Invoke(T)
extern "C"  void Action_1_Invoke_m3427425703_gshared (Action_1_t3258425796 * __this, uint8_t ___obj0, const MethodInfo* method);
#define Action_1_Invoke_m3427425703(__this, ___obj0, method) ((  void (*) (Action_1_t3258425796 *, uint8_t, const MethodInfo*))Action_1_Invoke_m3427425703_gshared)(__this, ___obj0, method)
// System.IAsyncResult System.Action`1<System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_1_BeginInvoke_m4157106804_gshared (Action_1_t3258425796 * __this, uint8_t ___obj0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Action_1_BeginInvoke_m4157106804(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Action_1_t3258425796 *, uint8_t, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Action_1_BeginInvoke_m4157106804_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Void System.Action`1<System.Byte>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m986891405_gshared (Action_1_t3258425796 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_1_EndInvoke_m986891405(__this, ___result0, method) ((  void (*) (Action_1_t3258425796 *, Il2CppObject *, const MethodInfo*))Action_1_EndInvoke_m986891405_gshared)(__this, ___result0, method)
