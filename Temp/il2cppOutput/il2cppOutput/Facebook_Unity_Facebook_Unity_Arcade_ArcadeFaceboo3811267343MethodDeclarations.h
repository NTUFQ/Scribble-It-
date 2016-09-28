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

// Facebook.Unity.Arcade.ArcadeFacebookGameObject
struct ArcadeFacebookGameObject_t3811267343;
// Facebook.Unity.Arcade.IArcadeFacebookImplementation
struct IArcadeFacebookImplementation_t1564144159;
// Facebook.Unity.Arcade.ArcadeFacebook/OnComplete
struct OnComplete_t3728454708;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "Facebook_Unity_Facebook_Unity_Arcade_ArcadeFaceboo3728454708.h"
#include "mscorlib_System_String7231557.h"

// System.Void Facebook.Unity.Arcade.ArcadeFacebookGameObject::.ctor()
extern "C"  void ArcadeFacebookGameObject__ctor_m422365046 (ArcadeFacebookGameObject_t3811267343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.Arcade.IArcadeFacebookImplementation Facebook.Unity.Arcade.ArcadeFacebookGameObject::get_ArcadeFacebookImpl()
extern "C"  Il2CppObject * ArcadeFacebookGameObject_get_ArcadeFacebookImpl_m3343658732 (ArcadeFacebookGameObject_t3811267343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebookGameObject::WaitForResponse(Facebook.Unity.Arcade.ArcadeFacebook/OnComplete,System.String)
extern "C"  void ArcadeFacebookGameObject_WaitForResponse_m562050833 (ArcadeFacebookGameObject_t3811267343 * __this, OnComplete_t3728454708 * ___onCompleteDelegate0, String_t* ___callbackId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Arcade.ArcadeFacebookGameObject::OnAwake()
extern "C"  void ArcadeFacebookGameObject_OnAwake_m2542846266 (ArcadeFacebookGameObject_t3811267343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Facebook.Unity.Arcade.ArcadeFacebookGameObject::WaitForPipeResponse(Facebook.Unity.Arcade.ArcadeFacebook/OnComplete,System.String)
extern "C"  Il2CppObject * ArcadeFacebookGameObject_WaitForPipeResponse_m3405609705 (ArcadeFacebookGameObject_t3811267343 * __this, OnComplete_t3728454708 * ___onCompleteDelegate0, String_t* ___callbackId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
