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
// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// userinfo.UserInfo
struct UserInfo_t527564689;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// userinfo.UserInfo
struct  UserInfo_t527564689  : public Il2CppObject
{
public:
	// System.String userinfo.UserInfo::id
	String_t* ___id_0;
	// System.String userinfo.UserInfo::email
	String_t* ___email_1;
	// System.String userinfo.UserInfo::username
	String_t* ___username_2;
	// UnityEngine.Texture2D userinfo.UserInfo::picture
	Texture2D_t3884108195 * ___picture_3;
	// System.String userinfo.UserInfo::pictureUrl
	String_t* ___pictureUrl_4;
	// System.Boolean userinfo.UserInfo::initialized
	bool ___initialized_5;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(UserInfo_t527564689, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier(&___id_0, value);
	}

	inline static int32_t get_offset_of_email_1() { return static_cast<int32_t>(offsetof(UserInfo_t527564689, ___email_1)); }
	inline String_t* get_email_1() const { return ___email_1; }
	inline String_t** get_address_of_email_1() { return &___email_1; }
	inline void set_email_1(String_t* value)
	{
		___email_1 = value;
		Il2CppCodeGenWriteBarrier(&___email_1, value);
	}

	inline static int32_t get_offset_of_username_2() { return static_cast<int32_t>(offsetof(UserInfo_t527564689, ___username_2)); }
	inline String_t* get_username_2() const { return ___username_2; }
	inline String_t** get_address_of_username_2() { return &___username_2; }
	inline void set_username_2(String_t* value)
	{
		___username_2 = value;
		Il2CppCodeGenWriteBarrier(&___username_2, value);
	}

	inline static int32_t get_offset_of_picture_3() { return static_cast<int32_t>(offsetof(UserInfo_t527564689, ___picture_3)); }
	inline Texture2D_t3884108195 * get_picture_3() const { return ___picture_3; }
	inline Texture2D_t3884108195 ** get_address_of_picture_3() { return &___picture_3; }
	inline void set_picture_3(Texture2D_t3884108195 * value)
	{
		___picture_3 = value;
		Il2CppCodeGenWriteBarrier(&___picture_3, value);
	}

	inline static int32_t get_offset_of_pictureUrl_4() { return static_cast<int32_t>(offsetof(UserInfo_t527564689, ___pictureUrl_4)); }
	inline String_t* get_pictureUrl_4() const { return ___pictureUrl_4; }
	inline String_t** get_address_of_pictureUrl_4() { return &___pictureUrl_4; }
	inline void set_pictureUrl_4(String_t* value)
	{
		___pictureUrl_4 = value;
		Il2CppCodeGenWriteBarrier(&___pictureUrl_4, value);
	}

	inline static int32_t get_offset_of_initialized_5() { return static_cast<int32_t>(offsetof(UserInfo_t527564689, ___initialized_5)); }
	inline bool get_initialized_5() const { return ___initialized_5; }
	inline bool* get_address_of_initialized_5() { return &___initialized_5; }
	inline void set_initialized_5(bool value)
	{
		___initialized_5 = value;
	}
};

struct UserInfo_t527564689_StaticFields
{
public:
	// userinfo.UserInfo userinfo.UserInfo::instance
	UserInfo_t527564689 * ___instance_6;

public:
	inline static int32_t get_offset_of_instance_6() { return static_cast<int32_t>(offsetof(UserInfo_t527564689_StaticFields, ___instance_6)); }
	inline UserInfo_t527564689 * get_instance_6() const { return ___instance_6; }
	inline UserInfo_t527564689 ** get_address_of_instance_6() { return &___instance_6; }
	inline void set_instance_6(UserInfo_t527564689 * value)
	{
		___instance_6 = value;
		Il2CppCodeGenWriteBarrier(&___instance_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
