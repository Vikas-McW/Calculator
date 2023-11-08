#include "calculator.h"

#pragma once

#ifdef MYDLL_EXPORTS
#define MYDLL_API __declspec(dllexport)
#else
#define MYDLL_API __declspec(dllimport)
#endif

namespace linear_scope {
	MYDLL_API double linear(int operation);
	template<typename R, typename T> MYDLL_API R sqrt_(T n);
	template<typename R, typename T> MYDLL_API R abs_(T n);
	template<typename R, typename T> MYDLL_API R exp_(T n);
	template<typename R, typename T> MYDLL_API R log_(T n);
}
