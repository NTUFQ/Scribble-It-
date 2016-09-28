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

// Facebook.Unity.LoginResult
struct LoginResult_t1256196228;
// Facebook.Unity.ResultContainer
struct ResultContainer_t3731608834;
// Facebook.Unity.AccessToken
struct AccessToken_t3236047507;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Facebook_Unity_Facebook_Unity_ResultContainer3731608834.h"
#include "Facebook_Unity_Facebook_Unity_AccessToken3236047507.h"

// System.Void Facebook.Unity.LoginResult::.ctor(Facebook.Unity.ResultContainer)
extern "C"  void LoginResult__ctor_m3512321426 (LoginResult_t1256196228 * __this, ResultContainer_t3731608834 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.AccessToken Facebook.Unity.LoginResult::get_AccessToken()
extern "C"  AccessToken_t3236047507 * LoginResult_get_AccessToken_m1237813240 (LoginResult_t1256196228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.LoginResult::set_AccessToken(Facebook.Unity.AccessToken)
extern "C"  void LoginResult_set_AccessToken_m2163389399 (LoginResult_t1256196228 * __this, AccessToken_t3236047507 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.LoginResult::ToString()
extern "C"  String_t* LoginResult_ToString_m790478174 (LoginResult_t1256196228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.LoginResult::.cctor()
extern "C"  void LoginResult__cctor_m22831352 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
