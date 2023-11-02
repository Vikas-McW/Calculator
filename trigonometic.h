#ifndef TRIGONOMETRIC_H_
#define TRIGONOMETRIC_H_
#include <cmath>
namespace trig {
	template<typename R, typename T> R sin_(T n) { return (sin(n)); }
	template<typename R, typename T> R cos_(T n) { return (cos(n)); }
	template<typename R, typename T> R tan_(T n) { return (tan(n)); }
}

#endif