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
// Facebook.Unity.AccessToken
struct AccessToken_t3236047507;

#include "Facebook_Unity_Facebook_Unity_ResultBase64408782.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.LoginResult
struct  LoginResult_t1256196228  : public ResultBase_t64408782
{
public:
	// Facebook.Unity.AccessToken Facebook.Unity.LoginResult::<AccessToken>k__BackingField
	AccessToken_t3236047507 * ___U3CAccessTokenU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_U3CAccessTokenU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(LoginResult_t1256196228, ___U3CAccessTokenU3Ek__BackingField_14)); }
	inline AccessToken_t3236047507 * get_U3CAccessTokenU3Ek__BackingField_14() const { return ___U3CAccessTokenU3Ek__BackingField_14; }
	inline AccessToken_t3236047507 ** get_address_of_U3CAccessTokenU3Ek__BackingField_14() { return &___U3CAccessTokenU3Ek__BackingField_14; }
	inline void set_U3CAccessTokenU3Ek__BackingField_14(AccessToken_t3236047507 * value)
	{
		___U3CAccessTokenU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAccessTokenU3Ek__BackingField_14, value);
	}
};

struct LoginResult_t1256196228_StaticFields
{
public:
	// System.String Facebook.Unity.LoginResult::UserIdKey
	String_t* ___UserIdKey_10;
	// System.String Facebook.Unity.LoginResult::ExpirationTimestampKey
	String_t* ___ExpirationTimestampKey_11;
	// System.String Facebook.Unity.LoginResult::PermissionsKey
	String_t* ___PermissionsKey_12;
	// System.String Facebook.Unity.LoginResult::AccessTokenKey
	String_t* ___AccessTokenKey_13;

public:
	inline static int32_t get_offset_of_UserIdKey_10() { return static_cast<int32_t>(offsetof(LoginResult_t1256196228_StaticFields, ___UserIdKey_10)); }
	inline String_t* get_UserIdKey_10() const { return ___UserIdKey_10; }
	inline String_t** get_address_of_UserIdKey_10() { return &___UserIdKey_10; }
	inline void set_UserIdKey_10(String_t* value)
	{
		___UserIdKey_10 = value;
		Il2CppCodeGenWriteBarrier(&___UserIdKey_10, value);
	}

	inline static int32_t get_offset_of_ExpirationTimestampKey_11() { return static_cast<int32_t>(offsetof(LoginResult_t1256196228_StaticFields, ___ExpirationTimestampKey_11)); }
	inline String_t* get_ExpirationTimestampKey_11() const { return ___ExpirationTimestampKey_11; }
	inline String_t** get_address_of_ExpirationTimestampKey_11() { return &___ExpirationTimestampKey_11; }
	inline void set_ExpirationTimestampKey_11(String_t* value)
	{
		___ExpirationTimestampKey_11 = value;
		Il2CppCodeGenWriteBarrier(&___ExpirationTimestampKey_11, value);
	}

	inline static int32_t get_offset_of_PermissionsKey_12() { return static_cast<int32_t>(offsetof(LoginResult_t1256196228_StaticFields, ___PermissionsKey_12)); }
	inline String_t* get_PermissionsKey_12() const { return ___PermissionsKey_12; }
	inline String_t** get_address_of_PermissionsKey_12() { return &___PermissionsKey_12; }
	inline void set_PermissionsKey_12(String_t* value)
	{
		___PermissionsKey_12 = value;
		Il2CppCodeGenWriteBarrier(&___PermissionsKey_12, value);
	}

	inline static int32_t get_offset_of_AccessTokenKey_13() { return static_cast<int32_t>(offsetof(LoginResult_t1256196228_StaticFields, ___AccessTokenKey_13)); }
	inline String_t* get_AccessTokenKey_13() const { return ___AccessTokenKey_13; }
	inline String_t** get_address_of_AccessTokenKey_13() { return &___AccessTokenKey_13; }
	inline void set_AccessTokenKey_13(String_t* value)
	{
		___AccessTokenKey_13 = value;
		Il2CppCodeGenWriteBarrier(&___AccessTokenKey_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
