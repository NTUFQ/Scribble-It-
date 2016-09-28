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

// Facebook.Unity.CallbackManager
struct CallbackManager_t1300627398;
// Facebook.Unity.IInternalResult
struct IInternalResult_t3958929953;
// System.Object
struct Il2CppObject;
// Facebook.Unity.IResult
struct IResult_t2984644868;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void Facebook.Unity.CallbackManager::.ctor()
extern "C"  void CallbackManager__ctor_m659317971 (CallbackManager_t1300627398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.CallbackManager::OnFacebookResponse(Facebook.Unity.IInternalResult)
extern "C"  void CallbackManager_OnFacebookResponse_m3209563445 (CallbackManager_t1300627398 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.CallbackManager::CallCallback(System.Object,Facebook.Unity.IResult)
extern "C"  void CallbackManager_CallCallback_m3357712961 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___callback0, Il2CppObject * ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
