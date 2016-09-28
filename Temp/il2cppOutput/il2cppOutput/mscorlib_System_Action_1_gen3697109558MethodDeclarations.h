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

// System.Action`1<System.Reflection.CustomAttributeTypedArgument>
struct Action_1_t3697109558;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Reflection_CustomAttributeTypedArg3301293422.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Action`1<System.Reflection.CustomAttributeTypedArgument>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m3098383478_gshared (Action_1_t3697109558 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_1__ctor_m3098383478(__this, ___object0, ___method1, method) ((  void (*) (Action_1_t3697109558 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_1__ctor_m3098383478_gshared)(__this, ___object0, ___method1, method)
// System.Void System.Action`1<System.Reflection.CustomAttributeTypedArgument>::Invoke(T)
extern "C"  void Action_1_Invoke_m2306418446_gshared (Action_1_t3697109558 * __this, CustomAttributeTypedArgument_t3301293422  ___obj0, const MethodInfo* method);
#define Action_1_Invoke_m2306418446(__this, ___obj0, method) ((  void (*) (Action_1_t3697109558 *, CustomAttributeTypedArgument_t3301293422 , const MethodInfo*))Action_1_Invoke_m2306418446_gshared)(__this, ___obj0, method)
// System.IAsyncResult System.Action`1<System.Reflection.CustomAttributeTypedArgument>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_1_BeginInvoke_m2018499939_gshared (Action_1_t3697109558 * __this, CustomAttributeTypedArgument_t3301293422  ___obj0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Action_1_BeginInvoke_m2018499939(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Action_1_t3697109558 *, CustomAttributeTypedArgument_t3301293422 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Action_1_BeginInvoke_m2018499939_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Void System.Action`1<System.Reflection.CustomAttributeTypedArgument>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m1169797510_gshared (Action_1_t3697109558 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_1_EndInvoke_m1169797510(__this, ___result0, method) ((  void (*) (Action_1_t3697109558 *, Il2CppObject *, const MethodInfo*))Action_1_EndInvoke_m1169797510_gshared)(__this, ___result0, method)
