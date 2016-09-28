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

// Facebook.Unity.IFacebookLogger
struct IFacebookLogger_t1716359389;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t4054002952;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void Facebook.Unity.FacebookLogger::.cctor()
extern "C"  void FacebookLogger__cctor_m374048504 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.IFacebookLogger Facebook.Unity.FacebookLogger::get_Instance()
extern "C"  Il2CppObject * FacebookLogger_get_Instance_m2142599024 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookLogger::set_Instance(Facebook.Unity.IFacebookLogger)
extern "C"  void FacebookLogger_set_Instance_m1835757411 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookLogger::Log(System.String)
extern "C"  void FacebookLogger_Log_m1658660139 (Il2CppObject * __this /* static, unused */, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookLogger::Log(System.String,System.String[])
extern "C"  void FacebookLogger_Log_m4182523781 (Il2CppObject * __this /* static, unused */, String_t* ___format0, StringU5BU5D_t4054002952* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookLogger::Info(System.String)
extern "C"  void FacebookLogger_Info_m3174719909 (Il2CppObject * __this /* static, unused */, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookLogger::Info(System.String,System.String[])
extern "C"  void FacebookLogger_Info_m983910399 (Il2CppObject * __this /* static, unused */, String_t* ___format0, StringU5BU5D_t4054002952* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookLogger::Warn(System.String)
extern "C"  void FacebookLogger_Warn_m3884435661 (Il2CppObject * __this /* static, unused */, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookLogger::Warn(System.String,System.String[])
extern "C"  void FacebookLogger_Warn_m500129575 (Il2CppObject * __this /* static, unused */, String_t* ___format0, StringU5BU5D_t4054002952* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookLogger::Error(System.String)
extern "C"  void FacebookLogger_Error_m2691562087 (Il2CppObject * __this /* static, unused */, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookLogger::Error(System.String,System.String[])
extern "C"  void FacebookLogger_Error_m1415781569 (Il2CppObject * __this /* static, unused */, String_t* ___format0, StringU5BU5D_t4054002952* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
