#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// Facebook.Unity.FacebookSettings/UrlSchemes
struct UrlSchemes_t3482710948;
// Facebook.Unity.FacebookSettings/OnChangeCallback
struct OnChangeCallback_t464424121;

#include "mscorlib_System_Array1146569071.h"
#include "Facebook_Unity_Facebook_Unity_FacebookSettings_Url3482710948.h"
#include "Facebook_Unity_Facebook_Unity_FacebookSettings_OnCh464424121.h"

#pragma once
// Facebook.Unity.FacebookSettings/UrlSchemes[]
struct UrlSchemesU5BU5D_t1469920589  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) UrlSchemes_t3482710948 * m_Items[1];

public:
	inline UrlSchemes_t3482710948 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline UrlSchemes_t3482710948 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, UrlSchemes_t3482710948 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Facebook.Unity.FacebookSettings/OnChangeCallback[]
struct OnChangeCallbackU5BU5D_t3423171652  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) OnChangeCallback_t464424121 * m_Items[1];

public:
	inline OnChangeCallback_t464424121 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline OnChangeCallback_t464424121 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, OnChangeCallback_t464424121 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
