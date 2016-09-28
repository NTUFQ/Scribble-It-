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

// System.Action`1<UnityEngine.Color32>
struct Action_1_t994669824;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "UnityEngine_UnityEngine_Color32598853688.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Action`1<UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m1455275257_gshared (Action_1_t994669824 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_1__ctor_m1455275257(__this, ___object0, ___method1, method) ((  void (*) (Action_1_t994669824 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_1__ctor_m1455275257_gshared)(__this, ___object0, ___method1, method)
// System.Void System.Action`1<UnityEngine.Color32>::Invoke(T)
extern "C"  void Action_1_Invoke_m2445125931_gshared (Action_1_t994669824 * __this, Color32_t598853688  ___obj0, const MethodInfo* method);
#define Action_1_Invoke_m2445125931(__this, ___obj0, method) ((  void (*) (Action_1_t994669824 *, Color32_t598853688 , const MethodInfo*))Action_1_Invoke_m2445125931_gshared)(__this, ___obj0, method)
// System.IAsyncResult System.Action`1<UnityEngine.Color32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_1_BeginInvoke_m154674680_gshared (Action_1_t994669824 * __this, Color32_t598853688  ___obj0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Action_1_BeginInvoke_m154674680(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Action_1_t994669824 *, Color32_t598853688 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Action_1_BeginInvoke_m154674680_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Void System.Action`1<UnityEngine.Color32>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m4125135753_gshared (Action_1_t994669824 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_1_EndInvoke_m4125135753(__this, ___result0, method) ((  void (*) (Action_1_t994669824 *, Il2CppObject *, const MethodInfo*))Action_1_EndInvoke_m4125135753_gshared)(__this, ___result0, method)
