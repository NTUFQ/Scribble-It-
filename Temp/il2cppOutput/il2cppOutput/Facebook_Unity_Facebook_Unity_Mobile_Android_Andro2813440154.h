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
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Mobile.Android.AndroidWrapper
struct  AndroidWrapper_t2813440154  : public Il2CppObject
{
public:

public:
};

struct AndroidWrapper_t2813440154_StaticFields
{
public:
	// System.Type Facebook.Unity.Mobile.Android.AndroidWrapper::androidJavaClassType
	Type_t * ___androidJavaClassType_4;
	// System.Object Facebook.Unity.Mobile.Android.AndroidWrapper::androidJavaClassObject
	Il2CppObject * ___androidJavaClassObject_5;
	// System.Reflection.MethodInfo Facebook.Unity.Mobile.Android.AndroidWrapper::callStaticMethodInfo
	MethodInfo_t * ___callStaticMethodInfo_6;
	// System.Reflection.MethodInfo Facebook.Unity.Mobile.Android.AndroidWrapper::callStaticMethodInfoGeneric
	MethodInfo_t * ___callStaticMethodInfoGeneric_7;

public:
	inline static int32_t get_offset_of_androidJavaClassType_4() { return static_cast<int32_t>(offsetof(AndroidWrapper_t2813440154_StaticFields, ___androidJavaClassType_4)); }
	inline Type_t * get_androidJavaClassType_4() const { return ___androidJavaClassType_4; }
	inline Type_t ** get_address_of_androidJavaClassType_4() { return &___androidJavaClassType_4; }
	inline void set_androidJavaClassType_4(Type_t * value)
	{
		___androidJavaClassType_4 = value;
		Il2CppCodeGenWriteBarrier(&___androidJavaClassType_4, value);
	}

	inline static int32_t get_offset_of_androidJavaClassObject_5() { return static_cast<int32_t>(offsetof(AndroidWrapper_t2813440154_StaticFields, ___androidJavaClassObject_5)); }
	inline Il2CppObject * get_androidJavaClassObject_5() const { return ___androidJavaClassObject_5; }
	inline Il2CppObject ** get_address_of_androidJavaClassObject_5() { return &___androidJavaClassObject_5; }
	inline void set_androidJavaClassObject_5(Il2CppObject * value)
	{
		___androidJavaClassObject_5 = value;
		Il2CppCodeGenWriteBarrier(&___androidJavaClassObject_5, value);
	}

	inline static int32_t get_offset_of_callStaticMethodInfo_6() { return static_cast<int32_t>(offsetof(AndroidWrapper_t2813440154_StaticFields, ___callStaticMethodInfo_6)); }
	inline MethodInfo_t * get_callStaticMethodInfo_6() const { return ___callStaticMethodInfo_6; }
	inline MethodInfo_t ** get_address_of_callStaticMethodInfo_6() { return &___callStaticMethodInfo_6; }
	inline void set_callStaticMethodInfo_6(MethodInfo_t * value)
	{
		___callStaticMethodInfo_6 = value;
		Il2CppCodeGenWriteBarrier(&___callStaticMethodInfo_6, value);
	}

	inline static int32_t get_offset_of_callStaticMethodInfoGeneric_7() { return static_cast<int32_t>(offsetof(AndroidWrapper_t2813440154_StaticFields, ___callStaticMethodInfoGeneric_7)); }
	inline MethodInfo_t * get_callStaticMethodInfoGeneric_7() const { return ___callStaticMethodInfoGeneric_7; }
	inline MethodInfo_t ** get_address_of_callStaticMethodInfoGeneric_7() { return &___callStaticMethodInfoGeneric_7; }
	inline void set_callStaticMethodInfoGeneric_7(MethodInfo_t * value)
	{
		___callStaticMethodInfoGeneric_7 = value;
		Il2CppCodeGenWriteBarrier(&___callStaticMethodInfoGeneric_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
