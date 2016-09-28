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

// Facebook.Unity.ResultBase
struct ResultBase_t64408782;
// Facebook.Unity.ResultContainer
struct ResultContainer_t3731608834;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t274140790;

#include "codegen/il2cpp-codegen.h"
#include "Facebook_Unity_Facebook_Unity_ResultContainer3731608834.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Nullable_1_gen1237965118.h"

// System.Void Facebook.Unity.ResultBase::.ctor(Facebook.Unity.ResultContainer)
extern "C"  void ResultBase__ctor_m565840890 (ResultBase_t64408782 * __this, ResultContainer_t3731608834 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.ResultBase::.ctor(Facebook.Unity.ResultContainer,System.String,System.Boolean)
extern "C"  void ResultBase__ctor_m3339164167 (ResultBase_t64408782 * __this, ResultContainer_t3731608834 * ___result0, String_t* ___error1, bool ___cancelled2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.ResultBase::get_Error()
extern "C"  String_t* ResultBase_get_Error_m1125899677 (ResultBase_t64408782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.ResultBase::set_Error(System.String)
extern "C"  void ResultBase_set_Error_m2418675132 (ResultBase_t64408782 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Facebook.Unity.ResultBase::get_ResultDictionary()
extern "C"  Il2CppObject* ResultBase_get_ResultDictionary_m2936519014 (ResultBase_t64408782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.ResultBase::set_ResultDictionary(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void ResultBase_set_ResultDictionary_m3011106117 (ResultBase_t64408782 * __this, Il2CppObject* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.ResultBase::get_RawResult()
extern "C"  String_t* ResultBase_get_RawResult_m3167136954 (ResultBase_t64408782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.ResultBase::set_RawResult(System.String)
extern "C"  void ResultBase_set_RawResult_m3827565119 (ResultBase_t64408782 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.ResultBase::get_Cancelled()
extern "C"  bool ResultBase_get_Cancelled_m4131016149 (ResultBase_t64408782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.ResultBase::set_Cancelled(System.Boolean)
extern "C"  void ResultBase_set_Cancelled_m1178197190 (ResultBase_t64408782 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.ResultBase::get_CallbackId()
extern "C"  String_t* ResultBase_get_CallbackId_m3922064685 (ResultBase_t64408782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.ResultBase::set_CallbackId(System.String)
extern "C"  void ResultBase_set_CallbackId_m3055771678 (ResultBase_t64408782 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int64> Facebook.Unity.ResultBase::get_CanvasErrorCode()
extern "C"  Nullable_1_t1237965118  ResultBase_get_CanvasErrorCode_m2531428893 (ResultBase_t64408782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.ResultBase::set_CanvasErrorCode(System.Nullable`1<System.Int64>)
extern "C"  void ResultBase_set_CanvasErrorCode_m282116722 (ResultBase_t64408782 * __this, Nullable_1_t1237965118  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.ResultBase::ToString()
extern "C"  String_t* ResultBase_ToString_m609677392 (ResultBase_t64408782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.ResultBase::Init(Facebook.Unity.ResultContainer,System.String,System.Boolean,System.String)
extern "C"  void ResultBase_Init_m3793361929 (ResultBase_t64408782 * __this, ResultContainer_t3731608834 * ___result0, String_t* ___error1, bool ___cancelled2, String_t* ___callbackId3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.ResultBase::GetErrorValue(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  String_t* ResultBase_GetErrorValue_m4056890431 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.ResultBase::GetCancelledValue(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  bool ResultBase_GetCancelledValue_m1569936185 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.ResultBase::GetCallbackId(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  String_t* ResultBase_GetCallbackId_m1550157928 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
