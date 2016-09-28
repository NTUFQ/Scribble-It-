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

// Facebook.Unity.AccessToken
struct AccessToken_t3236047507;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t3308144514;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_DateTime4283661327.h"
#include "mscorlib_System_Nullable_1_gen72820554.h"
#include "Facebook_Unity_Facebook_Unity_AccessToken3236047507.h"

// System.Void Facebook.Unity.AccessToken::.ctor(System.String,System.String,System.DateTime,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.DateTime>)
extern "C"  void AccessToken__ctor_m3921934872 (AccessToken_t3236047507 * __this, String_t* ___tokenString0, String_t* ___userId1, DateTime_t4283661327  ___expirationTime2, Il2CppObject* ___permissions3, Nullable_1_t72820554  ___lastRefresh4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.AccessToken Facebook.Unity.AccessToken::get_CurrentAccessToken()
extern "C"  AccessToken_t3236047507 * AccessToken_get_CurrentAccessToken_m3560457098 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.AccessToken::set_CurrentAccessToken(Facebook.Unity.AccessToken)
extern "C"  void AccessToken_set_CurrentAccessToken_m2576317411 (Il2CppObject * __this /* static, unused */, AccessToken_t3236047507 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.AccessToken::get_TokenString()
extern "C"  String_t* AccessToken_get_TokenString_m365992002 (AccessToken_t3236047507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.AccessToken::set_TokenString(System.String)
extern "C"  void AccessToken_set_TokenString_m2909088081 (AccessToken_t3236047507 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Facebook.Unity.AccessToken::get_ExpirationTime()
extern "C"  DateTime_t4283661327  AccessToken_get_ExpirationTime_m643940572 (AccessToken_t3236047507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.AccessToken::set_ExpirationTime(System.DateTime)
extern "C"  void AccessToken_set_ExpirationTime_m3753124449 (AccessToken_t3236047507 * __this, DateTime_t4283661327  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> Facebook.Unity.AccessToken::get_Permissions()
extern "C"  Il2CppObject* AccessToken_get_Permissions_m4094535779 (AccessToken_t3236047507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.AccessToken::set_Permissions(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C"  void AccessToken_set_Permissions_m3960526224 (AccessToken_t3236047507 * __this, Il2CppObject* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.AccessToken::get_UserId()
extern "C"  String_t* AccessToken_get_UserId_m1677984016 (AccessToken_t3236047507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.AccessToken::set_UserId(System.String)
extern "C"  void AccessToken_set_UserId_m2474353153 (AccessToken_t3236047507 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Facebook.Unity.AccessToken::get_LastRefresh()
extern "C"  Nullable_1_t72820554  AccessToken_get_LastRefresh_m637391188 (AccessToken_t3236047507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.AccessToken::set_LastRefresh(System.Nullable`1<System.DateTime>)
extern "C"  void AccessToken_set_LastRefresh_m2357800029 (AccessToken_t3236047507 * __this, Nullable_1_t72820554  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.AccessToken::ToString()
extern "C"  String_t* AccessToken_ToString_m313147629 (AccessToken_t3236047507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.AccessToken::ToJson()
extern "C"  String_t* AccessToken_ToJson_m3929358020 (AccessToken_t3236047507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
