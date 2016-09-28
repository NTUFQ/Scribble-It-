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
// Facebook.Unity.Arcade.IArcadeWrapper
struct IArcadeWrapper_t4074360930;

#include "Facebook_Unity_Facebook_Unity_FacebookBase850267831.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Arcade.ArcadeFacebook
struct  ArcadeFacebook_t3259079902  : public FacebookBase_t850267831
{
public:
	// System.String Facebook.Unity.Arcade.ArcadeFacebook::appId
	String_t* ___appId_4;
	// Facebook.Unity.Arcade.IArcadeWrapper Facebook.Unity.Arcade.ArcadeFacebook::arcadeWrapper
	Il2CppObject * ___arcadeWrapper_5;
	// System.Boolean Facebook.Unity.Arcade.ArcadeFacebook::<LimitEventUsage>k__BackingField
	bool ___U3CLimitEventUsageU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_appId_4() { return static_cast<int32_t>(offsetof(ArcadeFacebook_t3259079902, ___appId_4)); }
	inline String_t* get_appId_4() const { return ___appId_4; }
	inline String_t** get_address_of_appId_4() { return &___appId_4; }
	inline void set_appId_4(String_t* value)
	{
		___appId_4 = value;
		Il2CppCodeGenWriteBarrier(&___appId_4, value);
	}

	inline static int32_t get_offset_of_arcadeWrapper_5() { return static_cast<int32_t>(offsetof(ArcadeFacebook_t3259079902, ___arcadeWrapper_5)); }
	inline Il2CppObject * get_arcadeWrapper_5() const { return ___arcadeWrapper_5; }
	inline Il2CppObject ** get_address_of_arcadeWrapper_5() { return &___arcadeWrapper_5; }
	inline void set_arcadeWrapper_5(Il2CppObject * value)
	{
		___arcadeWrapper_5 = value;
		Il2CppCodeGenWriteBarrier(&___arcadeWrapper_5, value);
	}

	inline static int32_t get_offset_of_U3CLimitEventUsageU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ArcadeFacebook_t3259079902, ___U3CLimitEventUsageU3Ek__BackingField_6)); }
	inline bool get_U3CLimitEventUsageU3Ek__BackingField_6() const { return ___U3CLimitEventUsageU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CLimitEventUsageU3Ek__BackingField_6() { return &___U3CLimitEventUsageU3Ek__BackingField_6; }
	inline void set_U3CLimitEventUsageU3Ek__BackingField_6(bool value)
	{
		___U3CLimitEventUsageU3Ek__BackingField_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
