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

// userinfo.UserInfo
struct UserInfo_t527564689;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// Facebook.Unity.IGraphResult
struct IGraphResult_t873401058;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Texture2D3884108195.h"

// System.Void userinfo.UserInfo::.ctor()
extern "C"  void UserInfo__ctor_m1587387037 (UserInfo_t527564689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void userinfo.UserInfo::.cctor()
extern "C"  void UserInfo__cctor_m1482261680 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// userinfo.UserInfo userinfo.UserInfo::getInstance()
extern "C"  UserInfo_t527564689 * UserInfo_getInstance_m2331856427 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String userinfo.UserInfo::getId()
extern "C"  String_t* UserInfo_getId_m3339683599 (UserInfo_t527564689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String userinfo.UserInfo::getEmail()
extern "C"  String_t* UserInfo_getEmail_m653953290 (UserInfo_t527564689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String userinfo.UserInfo::getUsername()
extern "C"  String_t* UserInfo_getUsername_m1032662474 (UserInfo_t527564689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String userinfo.UserInfo::getPictureUrl()
extern "C"  String_t* UserInfo_getPictureUrl_m2744400133 (UserInfo_t527564689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D userinfo.UserInfo::getPicture()
extern "C"  Texture2D_t3884108195 * UserInfo_getPicture_m3488575058 (UserInfo_t527564689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void userinfo.UserInfo::setId(System.String)
extern "C"  void UserInfo_setId_m2314559562 (UserInfo_t527564689 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void userinfo.UserInfo::setEmail(System.String)
extern "C"  void UserInfo_setEmail_m1502308065 (UserInfo_t527564689 * __this, String_t* ___email0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void userinfo.UserInfo::setUsername(System.String)
extern "C"  void UserInfo_setUsername_m2500701231 (UserInfo_t527564689 * __this, String_t* ___username0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void userinfo.UserInfo::setPicture(UnityEngine.Texture2D)
extern "C"  void UserInfo_setPicture_m2449814617 (UserInfo_t527564689 * __this, Texture2D_t3884108195 * ___picture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void userinfo.UserInfo::setPictureUrl(System.String)
extern "C"  void UserInfo_setPictureUrl_m980952852 (UserInfo_t527564689 * __this, String_t* ___pictureUrl0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean userinfo.UserInfo::isNotNull()
extern "C"  bool UserInfo_isNotNull_m1792627967 (UserInfo_t527564689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void userinfo.UserInfo::setNull()
extern "C"  void UserInfo_setNull_m3150966820 (UserInfo_t527564689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean userinfo.UserInfo::initial()
extern "C"  bool UserInfo_initial_m3978381395 (UserInfo_t527564689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void userinfo.UserInfo::getFBInfo(Facebook.Unity.IGraphResult)
extern "C"  void UserInfo_getFBInfo_m2646426420 (UserInfo_t527564689 * __this, Il2CppObject * ___graphResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void userinfo.UserInfo::getFBPic(Facebook.Unity.IGraphResult)
extern "C"  void UserInfo_getFBPic_m3328930416 (UserInfo_t527564689 * __this, Il2CppObject * ___graphResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean userinfo.UserInfo::isInitialized()
extern "C"  bool UserInfo_isInitialized_m983091289 (UserInfo_t527564689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
