#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Facebook.Unity.Canvas.ICanvasJSWrapper
struct ICanvasJSWrapper_t2006186241;
// Facebook.Unity.HideUnityDelegate
struct HideUnityDelegate_t3175190102;
// Facebook.Unity.Utilities/Callback`1<Facebook.Unity.ResultContainer>
struct Callback_1_t1712727651;

#include "Facebook_Unity_Facebook_Unity_FacebookBase850267831.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Canvas.CanvasFacebook
struct  CanvasFacebook_t3651918198  : public FacebookBase_t850267831
{
public:
	// System.String Facebook.Unity.Canvas.CanvasFacebook::appId
	String_t* ___appId_13;
	// System.String Facebook.Unity.Canvas.CanvasFacebook::appLinkUrl
	String_t* ___appLinkUrl_14;
	// Facebook.Unity.Canvas.ICanvasJSWrapper Facebook.Unity.Canvas.CanvasFacebook::canvasJSWrapper
	Il2CppObject * ___canvasJSWrapper_15;
	// Facebook.Unity.HideUnityDelegate Facebook.Unity.Canvas.CanvasFacebook::onHideUnityDelegate
	HideUnityDelegate_t3175190102 * ___onHideUnityDelegate_16;
	// System.Boolean Facebook.Unity.Canvas.CanvasFacebook::<LimitEventUsage>k__BackingField
	bool ___U3CLimitEventUsageU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_appId_13() { return static_cast<int32_t>(offsetof(CanvasFacebook_t3651918198, ___appId_13)); }
	inline String_t* get_appId_13() const { return ___appId_13; }
	inline String_t** get_address_of_appId_13() { return &___appId_13; }
	inline void set_appId_13(String_t* value)
	{
		___appId_13 = value;
		Il2CppCodeGenWriteBarrier(&___appId_13, value);
	}

	inline static int32_t get_offset_of_appLinkUrl_14() { return static_cast<int32_t>(offsetof(CanvasFacebook_t3651918198, ___appLinkUrl_14)); }
	inline String_t* get_appLinkUrl_14() const { return ___appLinkUrl_14; }
	inline String_t** get_address_of_appLinkUrl_14() { return &___appLinkUrl_14; }
	inline void set_appLinkUrl_14(String_t* value)
	{
		___appLinkUrl_14 = value;
		Il2CppCodeGenWriteBarrier(&___appLinkUrl_14, value);
	}

	inline static int32_t get_offset_of_canvasJSWrapper_15() { return static_cast<int32_t>(offsetof(CanvasFacebook_t3651918198, ___canvasJSWrapper_15)); }
	inline Il2CppObject * get_canvasJSWrapper_15() const { return ___canvasJSWrapper_15; }
	inline Il2CppObject ** get_address_of_canvasJSWrapper_15() { return &___canvasJSWrapper_15; }
	inline void set_canvasJSWrapper_15(Il2CppObject * value)
	{
		___canvasJSWrapper_15 = value;
		Il2CppCodeGenWriteBarrier(&___canvasJSWrapper_15, value);
	}

	inline static int32_t get_offset_of_onHideUnityDelegate_16() { return static_cast<int32_t>(offsetof(CanvasFacebook_t3651918198, ___onHideUnityDelegate_16)); }
	inline HideUnityDelegate_t3175190102 * get_onHideUnityDelegate_16() const { return ___onHideUnityDelegate_16; }
	inline HideUnityDelegate_t3175190102 ** get_address_of_onHideUnityDelegate_16() { return &___onHideUnityDelegate_16; }
	inline void set_onHideUnityDelegate_16(HideUnityDelegate_t3175190102 * value)
	{
		___onHideUnityDelegate_16 = value;
		Il2CppCodeGenWriteBarrier(&___onHideUnityDelegate_16, value);
	}

	inline static int32_t get_offset_of_U3CLimitEventUsageU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(CanvasFacebook_t3651918198, ___U3CLimitEventUsageU3Ek__BackingField_17)); }
	inline bool get_U3CLimitEventUsageU3Ek__BackingField_17() const { return ___U3CLimitEventUsageU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CLimitEventUsageU3Ek__BackingField_17() { return &___U3CLimitEventUsageU3Ek__BackingField_17; }
	inline void set_U3CLimitEventUsageU3Ek__BackingField_17(bool value)
	{
		___U3CLimitEventUsageU3Ek__BackingField_17 = value;
	}
};

struct CanvasFacebook_t3651918198_StaticFields
{
public:
	// Facebook.Unity.Utilities/Callback`1<Facebook.Unity.ResultContainer> Facebook.Unity.Canvas.CanvasFacebook::<>f__am$cache0
	Callback_1_t1712727651 * ___U3CU3Ef__amU24cache0_18;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_18() { return static_cast<int32_t>(offsetof(CanvasFacebook_t3651918198_StaticFields, ___U3CU3Ef__amU24cache0_18)); }
	inline Callback_1_t1712727651 * get_U3CU3Ef__amU24cache0_18() const { return ___U3CU3Ef__amU24cache0_18; }
	inline Callback_1_t1712727651 ** get_address_of_U3CU3Ef__amU24cache0_18() { return &___U3CU3Ef__amU24cache0_18; }
	inline void set_U3CU3Ef__amU24cache0_18(Callback_1_t1712727651 * value)
	{
		___U3CU3Ef__amU24cache0_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
