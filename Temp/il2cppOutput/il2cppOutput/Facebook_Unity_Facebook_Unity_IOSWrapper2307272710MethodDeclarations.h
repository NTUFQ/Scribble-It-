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

// Facebook.Unity.IOSWrapper
struct IOSWrapper_t2307272710;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t4054002952;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void Facebook.Unity.IOSWrapper::.ctor()
extern "C"  void IOSWrapper__ctor_m1369357701 (IOSWrapper_t2307272710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOSWrapper::Init(System.String,System.Boolean,System.String,System.String)
extern "C"  void IOSWrapper_Init_m2168726626 (IOSWrapper_t2307272710 * __this, String_t* ___appId0, bool ___frictionlessRequests1, String_t* ___urlSuffix2, String_t* ___unityUserAgentSuffix3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOSWrapper::LogInWithReadPermissions(System.Int32,System.String)
extern "C"  void IOSWrapper_LogInWithReadPermissions_m2447392715 (IOSWrapper_t2307272710 * __this, int32_t ___requestId0, String_t* ___scope1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOSWrapper::LogInWithPublishPermissions(System.Int32,System.String)
extern "C"  void IOSWrapper_LogInWithPublishPermissions_m1814022004 (IOSWrapper_t2307272710 * __this, int32_t ___requestId0, String_t* ___scope1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOSWrapper::LogOut()
extern "C"  void IOSWrapper_LogOut_m1903658633 (IOSWrapper_t2307272710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOSWrapper::SetShareDialogMode(System.Int32)
extern "C"  void IOSWrapper_SetShareDialogMode_m4132627192 (IOSWrapper_t2307272710 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOSWrapper::ShareLink(System.Int32,System.String,System.String,System.String,System.String)
extern "C"  void IOSWrapper_ShareLink_m2331647773 (IOSWrapper_t2307272710 * __this, int32_t ___requestId0, String_t* ___contentURL1, String_t* ___contentTitle2, String_t* ___contentDescription3, String_t* ___photoURL4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOSWrapper::FeedShare(System.Int32,System.String,System.String,System.String,System.String,System.String,System.String,System.String)
extern "C"  void IOSWrapper_FeedShare_m2223180025 (IOSWrapper_t2307272710 * __this, int32_t ___requestId0, String_t* ___toId1, String_t* ___link2, String_t* ___linkName3, String_t* ___linkCaption4, String_t* ___linkDescription5, String_t* ___picture6, String_t* ___mediaSource7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOSWrapper::AppRequest(System.Int32,System.String,System.String,System.String,System.String[],System.Int32,System.String,System.String[],System.Int32,System.Boolean,System.Int32,System.String,System.String)
extern "C"  void IOSWrapper_AppRequest_m3419811432 (IOSWrapper_t2307272710 * __this, int32_t ___requestId0, String_t* ___message1, String_t* ___actionType2, String_t* ___objectId3, StringU5BU5D_t4054002952* ___to4, int32_t ___toLength5, String_t* ___filters6, StringU5BU5D_t4054002952* ___excludeIds7, int32_t ___excludeIdsLength8, bool ___hasMaxRecipients9, int32_t ___maxRecipients10, String_t* ___data11, String_t* ___title12, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOSWrapper::AppInvite(System.Int32,System.String,System.String)
extern "C"  void IOSWrapper_AppInvite_m2443970550 (IOSWrapper_t2307272710 * __this, int32_t ___requestId0, String_t* ___appLinkUrl1, String_t* ___previewImageUrl2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOSWrapper::CreateGameGroup(System.Int32,System.String,System.String,System.String)
extern "C"  void IOSWrapper_CreateGameGroup_m932702905 (IOSWrapper_t2307272710 * __this, int32_t ___requestId0, String_t* ___name1, String_t* ___description2, String_t* ___privacy3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOSWrapper::JoinGameGroup(System.Int32,System.String)
extern "C"  void IOSWrapper_JoinGameGroup_m3748566995 (IOSWrapper_t2307272710 * __this, int32_t ___requestId0, String_t* ___groupId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOSWrapper::FBSettingsActivateApp(System.String)
extern "C"  void IOSWrapper_FBSettingsActivateApp_m3287113616 (IOSWrapper_t2307272710 * __this, String_t* ___appId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOSWrapper::LogAppEvent(System.String,System.Double,System.Int32,System.String[],System.String[])
extern "C"  void IOSWrapper_LogAppEvent_m4243361933 (IOSWrapper_t2307272710 * __this, String_t* ___logEvent0, double ___valueToSum1, int32_t ___numParams2, StringU5BU5D_t4054002952* ___paramKeys3, StringU5BU5D_t4054002952* ___paramVals4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOSWrapper::LogPurchaseAppEvent(System.Double,System.String,System.Int32,System.String[],System.String[])
extern "C"  void IOSWrapper_LogPurchaseAppEvent_m2046260590 (IOSWrapper_t2307272710 * __this, double ___logPurchase0, String_t* ___currency1, int32_t ___numParams2, StringU5BU5D_t4054002952* ___paramKeys3, StringU5BU5D_t4054002952* ___paramVals4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOSWrapper::FBAppEventsSetLimitEventUsage(System.Boolean)
extern "C"  void IOSWrapper_FBAppEventsSetLimitEventUsage_m1667881816 (IOSWrapper_t2307272710 * __this, bool ___limitEventUsage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOSWrapper::GetAppLink(System.Int32)
extern "C"  void IOSWrapper_GetAppLink_m751120437 (IOSWrapper_t2307272710 * __this, int32_t ___requestId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.IOSWrapper::FBSdkVersion()
extern "C"  String_t* IOSWrapper_FBSdkVersion_m3214734614 (IOSWrapper_t2307272710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOSWrapper::FetchDeferredAppLink(System.Int32)
extern "C"  void IOSWrapper_FetchDeferredAppLink_m858998066 (IOSWrapper_t2307272710 * __this, int32_t ___requestId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOSWrapper::RefreshCurrentAccessToken(System.Int32)
extern "C"  void IOSWrapper_RefreshCurrentAccessToken_m1944408107 (IOSWrapper_t2307272710 * __this, int32_t ___requestId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOSWrapper::IOSInit(System.String,System.Boolean,System.String,System.String)
extern "C"  void IOSWrapper_IOSInit_m4053022419 (Il2CppObject * __this /* static, unused */, String_t* ___appId0, bool ___frictionlessRequests1, String_t* ___urlSuffix2, String_t* ___unityUserAgentSuffix3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOSWrapper::IOSLogInWithReadPermissions(System.Int32,System.String)
extern "C"  void IOSWrapper_IOSLogInWithReadPermissions_m3764288380 (Il2CppObject * __this /* static, unused */, int32_t ___requestId0, String_t* ___scope1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOSWrapper::IOSLogInWithPublishPermissions(System.Int32,System.String)
extern "C"  void IOSWrapper_IOSLogInWithPublishPermissions_m3221496355 (Il2CppObject * __this /* static, unused */, int32_t ___requestId0, String_t* ___scope1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOSWrapper::IOSLogOut()
extern "C"  void IOSWrapper_IOSLogOut_m3727558586 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOSWrapper::IOSSetShareDialogMode(System.Int32)
extern "C"  void IOSWrapper_IOSSetShareDialogMode_m3306496297 (Il2CppObject * __this /* static, unused */, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOSWrapper::IOSShareLink(System.Int32,System.String,System.String,System.String,System.String)
extern "C"  void IOSWrapper_IOSShareLink_m3405061324 (Il2CppObject * __this /* static, unused */, int32_t ___requestId0, String_t* ___contentURL1, String_t* ___contentTitle2, String_t* ___contentDescription3, String_t* ___photoURL4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOSWrapper::IOSFeedShare(System.Int32,System.String,System.String,System.String,System.String,System.String,System.String,System.String)
extern "C"  void IOSWrapper_IOSFeedShare_m2385279976 (Il2CppObject * __this /* static, unused */, int32_t ___requestId0, String_t* ___toId1, String_t* ___link2, String_t* ___linkName3, String_t* ___linkCaption4, String_t* ___linkDescription5, String_t* ___picture6, String_t* ___mediaSource7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOSWrapper::IOSAppRequest(System.Int32,System.String,System.String,System.String,System.String[],System.Int32,System.String,System.String[],System.Int32,System.Boolean,System.Int32,System.String,System.String)
extern "C"  void IOSWrapper_IOSAppRequest_m1454739545 (Il2CppObject * __this /* static, unused */, int32_t ___requestId0, String_t* ___message1, String_t* ___actionType2, String_t* ___objectId3, StringU5BU5D_t4054002952* ___to4, int32_t ___toLength5, String_t* ___filters6, StringU5BU5D_t4054002952* ___excludeIds7, int32_t ___excludeIdsLength8, bool ___hasMaxRecipients9, int32_t ___maxRecipients10, String_t* ___data11, String_t* ___title12, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOSWrapper::IOSAppInvite(System.Int32,System.String,System.String)
extern "C"  void IOSWrapper_IOSAppInvite_m4287566373 (Il2CppObject * __this /* static, unused */, int32_t ___requestId0, String_t* ___appLinkUrl1, String_t* ___previewImageUrl2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOSWrapper::IOSCreateGameGroup(System.Int32,System.String,System.String,System.String)
extern "C"  void IOSWrapper_IOSCreateGameGroup_m531040104 (Il2CppObject * __this /* static, unused */, int32_t ___requestId0, String_t* ___name1, String_t* ___description2, String_t* ___privacy3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOSWrapper::IOSJoinGameGroup(System.Int32,System.String)
extern "C"  void IOSWrapper_IOSJoinGameGroup_m375439554 (Il2CppObject * __this /* static, unused */, int32_t ___requestId0, String_t* ___groupId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOSWrapper::IOSFBSettingsActivateApp(System.String)
extern "C"  void IOSWrapper_IOSFBSettingsActivateApp_m3457359169 (Il2CppObject * __this /* static, unused */, String_t* ___appId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOSWrapper::IOSFBAppEventsLogEvent(System.String,System.Double,System.Int32,System.String[],System.String[])
extern "C"  void IOSWrapper_IOSFBAppEventsLogEvent_m2177350163 (Il2CppObject * __this /* static, unused */, String_t* ___logEvent0, double ___valueToSum1, int32_t ___numParams2, StringU5BU5D_t4054002952* ___paramKeys3, StringU5BU5D_t4054002952* ___paramVals4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOSWrapper::IOSFBAppEventsLogPurchase(System.Double,System.String,System.Int32,System.String[],System.String[])
extern "C"  void IOSWrapper_IOSFBAppEventsLogPurchase_m1722022020 (Il2CppObject * __this /* static, unused */, double ___logPurchase0, String_t* ___currency1, int32_t ___numParams2, StringU5BU5D_t4054002952* ___paramKeys3, StringU5BU5D_t4054002952* ___paramVals4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOSWrapper::IOSFBAppEventsSetLimitEventUsage(System.Boolean)
extern "C"  void IOSWrapper_IOSFBAppEventsSetLimitEventUsage_m305132743 (Il2CppObject * __this /* static, unused */, bool ___limitEventUsage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOSWrapper::IOSGetAppLink(System.Int32)
extern "C"  void IOSWrapper_IOSGetAppLink_m1994207078 (Il2CppObject * __this /* static, unused */, int32_t ___requestID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.IOSWrapper::IOSFBSdkVersion()
extern "C"  String_t* IOSWrapper_IOSFBSdkVersion_m3681056109 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOSWrapper::IOSFetchDeferredAppLink(System.Int32)
extern "C"  void IOSWrapper_IOSFetchDeferredAppLink_m1516157731 (Il2CppObject * __this /* static, unused */, int32_t ___requestID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.IOSWrapper::IOSRefreshCurrentAccessToken(System.Int32)
extern "C"  void IOSWrapper_IOSRefreshCurrentAccessToken_m1373300954 (Il2CppObject * __this /* static, unused */, int32_t ___requestID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
