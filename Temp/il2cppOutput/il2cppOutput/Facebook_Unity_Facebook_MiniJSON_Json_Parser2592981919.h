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
// System.IO.StringReader
struct StringReader_t4061477668;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.MiniJSON.Json/Parser
struct  Parser_t2592981919  : public Il2CppObject
{
public:
	// System.IO.StringReader Facebook.MiniJSON.Json/Parser::json
	StringReader_t4061477668 * ___json_2;

public:
	inline static int32_t get_offset_of_json_2() { return static_cast<int32_t>(offsetof(Parser_t2592981919, ___json_2)); }
	inline StringReader_t4061477668 * get_json_2() const { return ___json_2; }
	inline StringReader_t4061477668 ** get_address_of_json_2() { return &___json_2; }
	inline void set_json_2(StringReader_t4061477668 * value)
	{
		___json_2 = value;
		Il2CppCodeGenWriteBarrier(&___json_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
