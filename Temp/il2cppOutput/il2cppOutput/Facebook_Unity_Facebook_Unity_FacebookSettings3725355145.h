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
// System.Collections.Generic.List`1<Facebook.Unity.FacebookSettings/OnChangeCallback>
struct List_1_t1832609673;
// Facebook.Unity.FacebookSettings
struct FacebookSettings_t3725355145;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;
// System.Collections.Generic.List`1<Facebook.Unity.FacebookSettings/UrlSchemes>
struct List_1_t555929204;
// System.Action`1<Facebook.Unity.FacebookSettings/OnChangeCallback>
struct Action_1_t860240257;

#include "UnityEngine_UnityEngine_ScriptableObject2970544072.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.FacebookSettings
struct  FacebookSettings_t3725355145  : public ScriptableObject_t2970544072
{
public:
	// System.Int32 Facebook.Unity.FacebookSettings::selectedAppIndex
	int32_t ___selectedAppIndex_7;
	// System.Collections.Generic.List`1<System.String> Facebook.Unity.FacebookSettings::appIds
	List_1_t1375417109 * ___appIds_8;
	// System.Collections.Generic.List`1<System.String> Facebook.Unity.FacebookSettings::appLabels
	List_1_t1375417109 * ___appLabels_9;
	// System.Boolean Facebook.Unity.FacebookSettings::cookie
	bool ___cookie_10;
	// System.Boolean Facebook.Unity.FacebookSettings::logging
	bool ___logging_11;
	// System.Boolean Facebook.Unity.FacebookSettings::status
	bool ___status_12;
	// System.Boolean Facebook.Unity.FacebookSettings::xfbml
	bool ___xfbml_13;
	// System.Boolean Facebook.Unity.FacebookSettings::frictionlessRequests
	bool ___frictionlessRequests_14;
	// System.String Facebook.Unity.FacebookSettings::iosURLSuffix
	String_t* ___iosURLSuffix_15;
	// System.Collections.Generic.List`1<Facebook.Unity.FacebookSettings/UrlSchemes> Facebook.Unity.FacebookSettings::appLinkSchemes
	List_1_t555929204 * ___appLinkSchemes_16;

public:
	inline static int32_t get_offset_of_selectedAppIndex_7() { return static_cast<int32_t>(offsetof(FacebookSettings_t3725355145, ___selectedAppIndex_7)); }
	inline int32_t get_selectedAppIndex_7() const { return ___selectedAppIndex_7; }
	inline int32_t* get_address_of_selectedAppIndex_7() { return &___selectedAppIndex_7; }
	inline void set_selectedAppIndex_7(int32_t value)
	{
		___selectedAppIndex_7 = value;
	}

	inline static int32_t get_offset_of_appIds_8() { return static_cast<int32_t>(offsetof(FacebookSettings_t3725355145, ___appIds_8)); }
	inline List_1_t1375417109 * get_appIds_8() const { return ___appIds_8; }
	inline List_1_t1375417109 ** get_address_of_appIds_8() { return &___appIds_8; }
	inline void set_appIds_8(List_1_t1375417109 * value)
	{
		___appIds_8 = value;
		Il2CppCodeGenWriteBarrier(&___appIds_8, value);
	}

	inline static int32_t get_offset_of_appLabels_9() { return static_cast<int32_t>(offsetof(FacebookSettings_t3725355145, ___appLabels_9)); }
	inline List_1_t1375417109 * get_appLabels_9() const { return ___appLabels_9; }
	inline List_1_t1375417109 ** get_address_of_appLabels_9() { return &___appLabels_9; }
	inline void set_appLabels_9(List_1_t1375417109 * value)
	{
		___appLabels_9 = value;
		Il2CppCodeGenWriteBarrier(&___appLabels_9, value);
	}

	inline static int32_t get_offset_of_cookie_10() { return static_cast<int32_t>(offsetof(FacebookSettings_t3725355145, ___cookie_10)); }
	inline bool get_cookie_10() const { return ___cookie_10; }
	inline bool* get_address_of_cookie_10() { return &___cookie_10; }
	inline void set_cookie_10(bool value)
	{
		___cookie_10 = value;
	}

	inline static int32_t get_offset_of_logging_11() { return static_cast<int32_t>(offsetof(FacebookSettings_t3725355145, ___logging_11)); }
	inline bool get_logging_11() const { return ___logging_11; }
	inline bool* get_address_of_logging_11() { return &___logging_11; }
	inline void set_logging_11(bool value)
	{
		___logging_11 = value;
	}

	inline static int32_t get_offset_of_status_12() { return static_cast<int32_t>(offsetof(FacebookSettings_t3725355145, ___status_12)); }
	inline bool get_status_12() const { return ___status_12; }
	inline bool* get_address_of_status_12() { return &___status_12; }
	inline void set_status_12(bool value)
	{
		___status_12 = value;
	}

	inline static int32_t get_offset_of_xfbml_13() { return static_cast<int32_t>(offsetof(FacebookSettings_t3725355145, ___xfbml_13)); }
	inline bool get_xfbml_13() const { return ___xfbml_13; }
	inline bool* get_address_of_xfbml_13() { return &___xfbml_13; }
	inline void set_xfbml_13(bool value)
	{
		___xfbml_13 = value;
	}

	inline static int32_t get_offset_of_frictionlessRequests_14() { return static_cast<int32_t>(offsetof(FacebookSettings_t3725355145, ___frictionlessRequests_14)); }
	inline bool get_frictionlessRequests_14() const { return ___frictionlessRequests_14; }
	inline bool* get_address_of_frictionlessRequests_14() { return &___frictionlessRequests_14; }
	inline void set_frictionlessRequests_14(bool value)
	{
		___frictionlessRequests_14 = value;
	}

	inline static int32_t get_offset_of_iosURLSuffix_15() { return static_cast<int32_t>(offsetof(FacebookSettings_t3725355145, ___iosURLSuffix_15)); }
	inline String_t* get_iosURLSuffix_15() const { return ___iosURLSuffix_15; }
	inline String_t** get_address_of_iosURLSuffix_15() { return &___iosURLSuffix_15; }
	inline void set_iosURLSuffix_15(String_t* value)
	{
		___iosURLSuffix_15 = value;
		Il2CppCodeGenWriteBarrier(&___iosURLSuffix_15, value);
	}

	inline static int32_t get_offset_of_appLinkSchemes_16() { return static_cast<int32_t>(offsetof(FacebookSettings_t3725355145, ___appLinkSchemes_16)); }
	inline List_1_t555929204 * get_appLinkSchemes_16() const { return ___appLinkSchemes_16; }
	inline List_1_t555929204 ** get_address_of_appLinkSchemes_16() { return &___appLinkSchemes_16; }
	inline void set_appLinkSchemes_16(List_1_t555929204 * value)
	{
		___appLinkSchemes_16 = value;
		Il2CppCodeGenWriteBarrier(&___appLinkSchemes_16, value);
	}
};

struct FacebookSettings_t3725355145_StaticFields
{
public:
	// System.Collections.Generic.List`1<Facebook.Unity.FacebookSettings/OnChangeCallback> Facebook.Unity.FacebookSettings::onChangeCallbacks
	List_1_t1832609673 * ___onChangeCallbacks_5;
	// Facebook.Unity.FacebookSettings Facebook.Unity.FacebookSettings::instance
	FacebookSettings_t3725355145 * ___instance_6;
	// System.Action`1<Facebook.Unity.FacebookSettings/OnChangeCallback> Facebook.Unity.FacebookSettings::<>f__am$cache0
	Action_1_t860240257 * ___U3CU3Ef__amU24cache0_17;

public:
	inline static int32_t get_offset_of_onChangeCallbacks_5() { return static_cast<int32_t>(offsetof(FacebookSettings_t3725355145_StaticFields, ___onChangeCallbacks_5)); }
	inline List_1_t1832609673 * get_onChangeCallbacks_5() const { return ___onChangeCallbacks_5; }
	inline List_1_t1832609673 ** get_address_of_onChangeCallbacks_5() { return &___onChangeCallbacks_5; }
	inline void set_onChangeCallbacks_5(List_1_t1832609673 * value)
	{
		___onChangeCallbacks_5 = value;
		Il2CppCodeGenWriteBarrier(&___onChangeCallbacks_5, value);
	}

	inline static int32_t get_offset_of_instance_6() { return static_cast<int32_t>(offsetof(FacebookSettings_t3725355145_StaticFields, ___instance_6)); }
	inline FacebookSettings_t3725355145 * get_instance_6() const { return ___instance_6; }
	inline FacebookSettings_t3725355145 ** get_address_of_instance_6() { return &___instance_6; }
	inline void set_instance_6(FacebookSettings_t3725355145 * value)
	{
		___instance_6 = value;
		Il2CppCodeGenWriteBarrier(&___instance_6, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_17() { return static_cast<int32_t>(offsetof(FacebookSettings_t3725355145_StaticFields, ___U3CU3Ef__amU24cache0_17)); }
	inline Action_1_t860240257 * get_U3CU3Ef__amU24cache0_17() const { return ___U3CU3Ef__amU24cache0_17; }
	inline Action_1_t860240257 ** get_address_of_U3CU3Ef__amU24cache0_17() { return &___U3CU3Ef__amU24cache0_17; }
	inline void set_U3CU3Ef__amU24cache0_17(Action_1_t860240257 * value)
	{
		___U3CU3Ef__amU24cache0_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
