﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Action`1<UnityEngine.EventSystems.RaycastResult>
struct Action_1_t4158477500;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastRes3762661364.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Action`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m525831357_gshared (Action_1_t4158477500 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_1__ctor_m525831357(__this, ___object0, ___method1, method) ((  void (*) (Action_1_t4158477500 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_1__ctor_m525831357_gshared)(__this, ___object0, ___method1, method)
// System.Void System.Action`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T)
extern "C"  void Action_1_Invoke_m3111208167_gshared (Action_1_t4158477500 * __this, RaycastResult_t3762661364  ___obj0, const MethodInfo* method);
#define Action_1_Invoke_m3111208167(__this, ___obj0, method) ((  void (*) (Action_1_t4158477500 *, RaycastResult_t3762661364 , const MethodInfo*))Action_1_Invoke_m3111208167_gshared)(__this, ___obj0, method)
// System.IAsyncResult System.Action`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_1_BeginInvoke_m2799907388_gshared (Action_1_t4158477500 * __this, RaycastResult_t3762661364  ___obj0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Action_1_BeginInvoke_m2799907388(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Action_1_t4158477500 *, RaycastResult_t3762661364 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Action_1_BeginInvoke_m2799907388_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Void System.Action`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m1849746765_gshared (Action_1_t4158477500 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_1_EndInvoke_m1849746765(__this, ___result0, method) ((  void (*) (Action_1_t4158477500 *, Il2CppObject *, const MethodInfo*))Action_1_EndInvoke_m1849746765_gshared)(__this, ___result0, method)