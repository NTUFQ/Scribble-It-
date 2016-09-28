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
// Facebook.Unity.Editor.IEditorWrapper
struct IEditorWrapper_t1154981111;

#include "Facebook_Unity_Facebook_Unity_FacebookBase850267831.h"
#include "Facebook_Unity_Facebook_Unity_ShareDialogMode56248424.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Editor.EditorFacebook
struct  EditorFacebook_t1070344141  : public FacebookBase_t850267831
{
public:
	// Facebook.Unity.Editor.IEditorWrapper Facebook.Unity.Editor.EditorFacebook::editorWrapper
	Il2CppObject * ___editorWrapper_6;
	// System.Boolean Facebook.Unity.Editor.EditorFacebook::<LimitEventUsage>k__BackingField
	bool ___U3CLimitEventUsageU3Ek__BackingField_7;
	// Facebook.Unity.ShareDialogMode Facebook.Unity.Editor.EditorFacebook::<ShareDialogMode>k__BackingField
	int32_t ___U3CShareDialogModeU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_editorWrapper_6() { return static_cast<int32_t>(offsetof(EditorFacebook_t1070344141, ___editorWrapper_6)); }
	inline Il2CppObject * get_editorWrapper_6() const { return ___editorWrapper_6; }
	inline Il2CppObject ** get_address_of_editorWrapper_6() { return &___editorWrapper_6; }
	inline void set_editorWrapper_6(Il2CppObject * value)
	{
		___editorWrapper_6 = value;
		Il2CppCodeGenWriteBarrier(&___editorWrapper_6, value);
	}

	inline static int32_t get_offset_of_U3CLimitEventUsageU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(EditorFacebook_t1070344141, ___U3CLimitEventUsageU3Ek__BackingField_7)); }
	inline bool get_U3CLimitEventUsageU3Ek__BackingField_7() const { return ___U3CLimitEventUsageU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CLimitEventUsageU3Ek__BackingField_7() { return &___U3CLimitEventUsageU3Ek__BackingField_7; }
	inline void set_U3CLimitEventUsageU3Ek__BackingField_7(bool value)
	{
		___U3CLimitEventUsageU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CShareDialogModeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(EditorFacebook_t1070344141, ___U3CShareDialogModeU3Ek__BackingField_8)); }
	inline int32_t get_U3CShareDialogModeU3Ek__BackingField_8() const { return ___U3CShareDialogModeU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CShareDialogModeU3Ek__BackingField_8() { return &___U3CShareDialogModeU3Ek__BackingField_8; }
	inline void set_U3CShareDialogModeU3Ek__BackingField_8(int32_t value)
	{
		___U3CShareDialogModeU3Ek__BackingField_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
