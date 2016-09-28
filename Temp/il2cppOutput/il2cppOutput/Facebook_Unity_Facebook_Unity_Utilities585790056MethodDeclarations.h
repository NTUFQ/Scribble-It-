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

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t827649927;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t3308144514;
// System.Uri
struct Uri_t1116831938;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t274140790;
// Facebook.Unity.AccessToken
struct AccessToken_t3236047507;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t405523272;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t901821544;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime4283661327.h"
#include "System_System_Uri1116831938.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Nullable_1_gen72820554.h"

// System.Collections.Generic.Dictionary`2<System.String,System.String> Facebook.Unity.Utilities::get_CommandLineArguments()
extern "C"  Dictionary_2_t827649927 * Utilities_get_CommandLineArguments_m628844991 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Facebook.Unity.Utilities::TotalSeconds(System.DateTime)
extern "C"  int64_t Utilities_TotalSeconds_m789156381 (Il2CppObject * __this /* static, unused */, DateTime_t4283661327  ___dateTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Utilities::ToCommaSeparateList(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C"  String_t* Utilities_ToCommaSeparateList_m847176212 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Utilities::AbsoluteUrlOrEmptyString(System.Uri)
extern "C"  String_t* Utilities_AbsoluteUrlOrEmptyString_m3024729804 (Il2CppObject * __this /* static, unused */, Uri_t1116831938 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Utilities::GetUserAgent(System.String,System.String)
extern "C"  String_t* Utilities_GetUserAgent_m1276922596 (Il2CppObject * __this /* static, unused */, String_t* ___productName0, String_t* ___productVersion1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Utilities::ToJson(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  String_t* Utilities_ToJson_m3102419427 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___dictionary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.AccessToken Facebook.Unity.Utilities::ParseAccessTokenFromResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  AccessToken_t3236047507 * Utilities_ParseAccessTokenFromResult_m2472185049 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___resultDictionary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Utilities::ToStringNullOk(System.Object)
extern "C"  String_t* Utilities_ToStringNullOk_m2604680463 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Utilities::FormatToString(System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern "C"  String_t* Utilities_FormatToString_m3094108589 (Il2CppObject * __this /* static, unused */, String_t* ___baseString0, String_t* ___className1, Il2CppObject* ___propertiesAndValues2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Facebook.Unity.Utilities::ParseExpirationDateFromResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  DateTime_t4283661327  Utilities_ParseExpirationDateFromResult_m1502822351 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___resultDictionary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Facebook.Unity.Utilities::ParseLastRefreshFromResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  Nullable_1_t72820554  Utilities_ParseLastRefreshFromResult_m1434189444 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___resultDictionary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Facebook.Unity.Utilities::ParsePermissionFromResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  Il2CppObject* Utilities_ParsePermissionFromResult_m4032819190 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___resultDictionary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Facebook.Unity.Utilities::FromTimestamp(System.Int32)
extern "C"  DateTime_t4283661327  Utilities_FromTimestamp_m3813881971 (Il2CppObject * __this /* static, unused */, int32_t ___timestamp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Utilities::<ParsePermissionFromResult>m__0(System.Object)
extern "C"  String_t* Utilities_U3CParsePermissionFromResultU3Em__0_m2068188372 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___permission0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
