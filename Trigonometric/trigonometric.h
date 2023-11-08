#include "calculator.h"

#pragma once

#ifdef MYDLL_EXPORTS
#define MYDLL_API __declspec(dllexport)
#else
#define MYDLL_API __declspec(dllimport)
#endif

namespace trigonometric_scope {
	MYDLL_API double trigonometric(int operation);
	template<typename R, typename T> MYDLL_API R sin_(T n);
	template<typename R, typename T> MYDLL_API R cos_(T n);
	template<typename R, typename T> MYDLL_API R tan_(T n);
}
