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
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t827649927;
// System.Func`2<System.Object,System.String>
struct Func_2_t315946507;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Utilities
struct  Utilities_t585790056  : public Il2CppObject
{
public:

public:
};

struct Utilities_t585790056_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Facebook.Unity.Utilities::commandLineArguments
	Dictionary_2_t827649927 * ___commandLineArguments_1;
	// System.Func`2<System.Object,System.String> Facebook.Unity.Utilities::<>f__am$cache0
	Func_2_t315946507 * ___U3CU3Ef__amU24cache0_2;

public:
	inline static int32_t get_offset_of_commandLineArguments_1() { return static_cast<int32_t>(offsetof(Utilities_t585790056_StaticFields, ___commandLineArguments_1)); }
	inline Dictionary_2_t827649927 * get_commandLineArguments_1() const { return ___commandLineArguments_1; }
	inline Dictionary_2_t827649927 ** get_address_of_commandLineArguments_1() { return &___commandLineArguments_1; }
	inline void set_commandLineArguments_1(Dictionary_2_t827649927 * value)
	{
		___commandLineArguments_1 = value;
		Il2CppCodeGenWriteBarrier(&___commandLineArguments_1, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_2() { return static_cast<int32_t>(offsetof(Utilities_t585790056_StaticFields, ___U3CU3Ef__amU24cache0_2)); }
	inline Func_2_t315946507 * get_U3CU3Ef__amU24cache0_2() const { return ___U3CU3Ef__amU24cache0_2; }
	inline Func_2_t315946507 ** get_address_of_U3CU3Ef__amU24cache0_2() { return &___U3CU3Ef__amU24cache0_2; }
	inline void set_U3CU3Ef__amU24cache0_2(Func_2_t315946507 * value)
	{
		___U3CU3Ef__amU24cache0_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
