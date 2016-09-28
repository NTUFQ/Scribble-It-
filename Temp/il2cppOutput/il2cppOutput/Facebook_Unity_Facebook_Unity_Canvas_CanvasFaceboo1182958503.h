#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Facebook.Unity.ResultContainer
struct ResultContainer_t3731608834;
// Facebook.Unity.Utilities/Callback`1<Facebook.Unity.ResultContainer>
struct Callback_1_t1712727651;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Canvas.CanvasFacebook/<FormatAuthResponse>c__AnonStorey0
struct  U3CFormatAuthResponseU3Ec__AnonStorey0_t1182958503  : public Il2CppObject
{
public:
	// Facebook.Unity.ResultContainer Facebook.Unity.Canvas.CanvasFacebook/<FormatAuthResponse>c__AnonStorey0::result
	ResultContainer_t3731608834 * ___result_0;
	// Facebook.Unity.Utilities/Callback`1<Facebook.Unity.ResultContainer> Facebook.Unity.Canvas.CanvasFacebook/<FormatAuthResponse>c__AnonStorey0::callback
	Callback_1_t1712727651 * ___callback_1;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(U3CFormatAuthResponseU3Ec__AnonStorey0_t1182958503, ___result_0)); }
	inline ResultContainer_t3731608834 * get_result_0() const { return ___result_0; }
	inline ResultContainer_t3731608834 ** get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(ResultContainer_t3731608834 * value)
	{
		___result_0 = value;
		Il2CppCodeGenWriteBarrier(&___result_0, value);
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(U3CFormatAuthResponseU3Ec__AnonStorey0_t1182958503, ___callback_1)); }
	inline Callback_1_t1712727651 * get_callback_1() const { return ___callback_1; }
	inline Callback_1_t1712727651 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(Callback_1_t1712727651 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier(&___callback_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
