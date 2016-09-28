﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




#pragma once
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const MethodInfo*);

	static inline R Invoke (const MethodInfo* method, void* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp::vm::Runtime::GetGenericVirtualInvokeData(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
