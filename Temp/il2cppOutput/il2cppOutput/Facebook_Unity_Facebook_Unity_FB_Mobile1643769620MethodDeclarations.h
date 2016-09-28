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

// Facebook.Unity.FB/Mobile
struct Mobile_t1643769620;
// Facebook.Unity.Mobile.IMobileFacebook
struct IMobileFacebook_t333580503;
// System.Uri
struct Uri_t1116831938;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppInviteResult>
struct FacebookDelegate_1_t3869440255;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>
struct FacebookDelegate_1_t1951570800;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAccessTokenRefreshResult>
struct FacebookDelegate_1_t3142103211;

#include "codegen/il2cpp-codegen.h"
#include "Facebook_Unity_Facebook_Unity_ShareDialogMode56248424.h"
#include "System_System_Uri1116831938.h"

// System.Void Facebook.Unity.FB/Mobile::.ctor()
extern "C"  void Mobile__ctor_m2731626374 (Mobile_t1643769620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.ShareDialogMode Facebook.Unity.FB/Mobile::get_ShareDialogMode()
extern "C"  int32_t Mobile_get_ShareDialogMode_m2678622099 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB/Mobile::set_ShareDialogMode(Facebook.Unity.ShareDialogMode)
extern "C"  void Mobile_set_ShareDialogMode_m3487232808 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.Mobile.IMobileFacebook Facebook.Unity.FB/Mobile::get_MobileFacebookImpl()
extern "C"  Il2CppObject * Mobile_get_MobileFacebookImpl_m4006530332 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB/Mobile::AppInvite(System.Uri,System.Uri,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppInviteResult>)
extern "C"  void Mobile_AppInvite_m1429109616 (Il2CppObject * __this /* static, unused */, Uri_t1116831938 * ___appLinkUrl0, Uri_t1116831938 * ___previewImageUrl1, FacebookDelegate_1_t3869440255 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB/Mobile::FetchDeferredAppLinkData(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>)
extern "C"  void Mobile_FetchDeferredAppLinkData_m1437434205 (Il2CppObject * __this /* static, unused */, FacebookDelegate_1_t1951570800 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB/Mobile::RefreshCurrentAccessToken(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAccessTokenRefreshResult>)
extern "C"  void Mobile_RefreshCurrentAccessToken_m268068771 (Il2CppObject * __this /* static, unused */, FacebookDelegate_1_t3142103211 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
