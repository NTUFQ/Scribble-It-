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

// Facebook.Unity.MethodArguments
struct MethodArguments_t3236074899;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t274140790;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t3308144514;
// System.Uri
struct Uri_t1116831938;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t827649927;

#include "codegen/il2cpp-codegen.h"
#include "Facebook_Unity_Facebook_Unity_MethodArguments3236074899.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Uri1116831938.h"

// System.Void Facebook.Unity.MethodArguments::.ctor()
extern "C"  void MethodArguments__ctor_m420939174 (MethodArguments_t3236074899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.MethodArguments::.ctor(Facebook.Unity.MethodArguments)
extern "C"  void MethodArguments__ctor_m1141597106 (MethodArguments_t3236074899 * __this, MethodArguments_t3236074899 * ___methodArgs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.MethodArguments::.ctor(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void MethodArguments__ctor_m745365430 (MethodArguments_t3236074899 * __this, Il2CppObject* ___arguments0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.MethodArguments::AddString(System.String,System.String)
extern "C"  void MethodArguments_AddString_m1604512040 (MethodArguments_t3236074899 * __this, String_t* ___argumentName0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.MethodArguments::AddCommaSeparatedList(System.String,System.Collections.Generic.IEnumerable`1<System.String>)
extern "C"  void MethodArguments_AddCommaSeparatedList_m3026621288 (MethodArguments_t3236074899 * __this, String_t* ___argumentName0, Il2CppObject* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.MethodArguments::AddDictionary(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void MethodArguments_AddDictionary_m3827543133 (MethodArguments_t3236074899 * __this, String_t* ___argumentName0, Il2CppObject* ___dict1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.MethodArguments::AddUri(System.String,System.Uri)
extern "C"  void MethodArguments_AddUri_m800614240 (MethodArguments_t3236074899 * __this, String_t* ___argumentName0, Uri_t1116831938 * ___uri1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.MethodArguments::ToJsonString()
extern "C"  String_t* MethodArguments_ToJsonString_m1449654645 (MethodArguments_t3236074899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Facebook.Unity.MethodArguments::ToStringDict(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  Dictionary_2_t827649927 * MethodArguments_ToStringDict_m3831490736 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___dict0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
