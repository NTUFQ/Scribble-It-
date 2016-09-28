#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUIStyle
struct GUIStyle_t2990928826;
// Facebook.Unity.Utilities/Callback`1<Facebook.Unity.ResultContainer>
struct Callback_1_t1712727651;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Editor.EditorFacebookMockDialog
struct  EditorFacebookMockDialog_t3317586847  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Rect Facebook.Unity.Editor.EditorFacebookMockDialog::modalRect
	Rect_t4241904616  ___modalRect_2;
	// UnityEngine.GUIStyle Facebook.Unity.Editor.EditorFacebookMockDialog::modalStyle
	GUIStyle_t2990928826 * ___modalStyle_3;
	// Facebook.Unity.Utilities/Callback`1<Facebook.Unity.ResultContainer> Facebook.Unity.Editor.EditorFacebookMockDialog::<Callback>k__BackingField
	Callback_1_t1712727651 * ___U3CCallbackU3Ek__BackingField_4;
	// System.String Facebook.Unity.Editor.EditorFacebookMockDialog::<CallbackID>k__BackingField
	String_t* ___U3CCallbackIDU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_modalRect_2() { return static_cast<int32_t>(offsetof(EditorFacebookMockDialog_t3317586847, ___modalRect_2)); }
	inline Rect_t4241904616  get_modalRect_2() const { return ___modalRect_2; }
	inline Rect_t4241904616 * get_address_of_modalRect_2() { return &___modalRect_2; }
	inline void set_modalRect_2(Rect_t4241904616  value)
	{
		___modalRect_2 = value;
	}

	inline static int32_t get_offset_of_modalStyle_3() { return static_cast<int32_t>(offsetof(EditorFacebookMockDialog_t3317586847, ___modalStyle_3)); }
	inline GUIStyle_t2990928826 * get_modalStyle_3() const { return ___modalStyle_3; }
	inline GUIStyle_t2990928826 ** get_address_of_modalStyle_3() { return &___modalStyle_3; }
	inline void set_modalStyle_3(GUIStyle_t2990928826 * value)
	{
		___modalStyle_3 = value;
		Il2CppCodeGenWriteBarrier(&___modalStyle_3, value);
	}

	inline static int32_t get_offset_of_U3CCallbackU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(EditorFacebookMockDialog_t3317586847, ___U3CCallbackU3Ek__BackingField_4)); }
	inline Callback_1_t1712727651 * get_U3CCallbackU3Ek__BackingField_4() const { return ___U3CCallbackU3Ek__BackingField_4; }
	inline Callback_1_t1712727651 ** get_address_of_U3CCallbackU3Ek__BackingField_4() { return &___U3CCallbackU3Ek__BackingField_4; }
	inline void set_U3CCallbackU3Ek__BackingField_4(Callback_1_t1712727651 * value)
	{
		___U3CCallbackU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCallbackU3Ek__BackingField_4, value);
	}

	inline static int32_t get_offset_of_U3CCallbackIDU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(EditorFacebookMockDialog_t3317586847, ___U3CCallbackIDU3Ek__BackingField_5)); }
	inline String_t* get_U3CCallbackIDU3Ek__BackingField_5() const { return ___U3CCallbackIDU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CCallbackIDU3Ek__BackingField_5() { return &___U3CCallbackIDU3Ek__BackingField_5; }
	inline void set_U3CCallbackIDU3Ek__BackingField_5(String_t* value)
	{
		___U3CCallbackIDU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCallbackIDU3Ek__BackingField_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
