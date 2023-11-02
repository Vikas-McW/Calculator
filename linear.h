#ifndef LINEAR_H_
#define LINEAR_H_
#include <cmath>
namespace line {
	template<typename R, typename T> R sqrt_(T n) { return (sqrt(n)); }
	template<typename R, typename T> R abs_(T n) { return (abs(n)); }
	template<typename R, typename T> R exp_(T n) { return (exp(n)); }
	template<typename R, typename T> R log_(T n) { return (log10(n)); }
}

#endif