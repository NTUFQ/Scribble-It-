#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text[]
struct TextU5BU5D_t3798907012;
// UnityEngine.UI.RawImage[]
struct RawImageU5BU5D_t3147994310;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// userinfo.Menu
struct  Menu_t804139095  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Text[] userinfo.Menu::textFields
	TextU5BU5D_t3798907012* ___textFields_2;
	// UnityEngine.UI.RawImage[] userinfo.Menu::images
	RawImageU5BU5D_t3147994310* ___images_3;

public:
	inline static int32_t get_offset_of_textFields_2() { return static_cast<int32_t>(offsetof(Menu_t804139095, ___textFields_2)); }
	inline TextU5BU5D_t3798907012* get_textFields_2() const { return ___textFields_2; }
	inline TextU5BU5D_t3798907012** get_address_of_textFields_2() { return &___textFields_2; }
	inline void set_textFields_2(TextU5BU5D_t3798907012* value)
	{
		___textFields_2 = value;
		Il2CppCodeGenWriteBarrier(&___textFields_2, value);
	}

	inline static int32_t get_offset_of_images_3() { return static_cast<int32_t>(offsetof(Menu_t804139095, ___images_3)); }
	inline RawImageU5BU5D_t3147994310* get_images_3() const { return ___images_3; }
	inline RawImageU5BU5D_t3147994310** get_address_of_images_3() { return &___images_3; }
	inline void set_images_3(RawImageU5BU5D_t3147994310* value)
	{
		___images_3 = value;
		Il2CppCodeGenWriteBarrier(&___images_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
