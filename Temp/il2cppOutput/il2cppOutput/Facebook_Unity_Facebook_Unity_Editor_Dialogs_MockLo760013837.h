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

#include "Facebook_Unity_Facebook_Unity_Editor_EditorFaceboo3317586847.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Editor.Dialogs.MockLoginDialog
struct  MockLoginDialog_t760013837  : public EditorFacebookMockDialog_t3317586847
{
public:
	// System.String Facebook.Unity.Editor.Dialogs.MockLoginDialog::accessToken
	String_t* ___accessToken_6;

public:
	inline static int32_t get_offset_of_accessToken_6() { return static_cast<int32_t>(offsetof(MockLoginDialog_t760013837, ___accessToken_6)); }
	inline String_t* get_accessToken_6() const { return ___accessToken_6; }
	inline String_t** get_address_of_accessToken_6() { return &___accessToken_6; }
	inline void set_accessToken_6(String_t* value)
	{
		___accessToken_6 = value;
		Il2CppCodeGenWriteBarrier(&___accessToken_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
