#ifndef ARITHMATIC_H_
#define ARITHMATIC_H_

namespace arith {
	template <typename R, typename T1, typename T2> R add(T1 a, T2 b) { return (a + b); }
	template <typename R, typename T1, typename T2> R sub(T1 a, T2 b) { return (a - b); }
	template <typename R, typename T1, typename T2> R mul(T1 a, T2 b) { return (a * b); }
	template <typename R, typename T1, typename T2> R div(T1 a, T2 b) { return (a / b); }
	template <typename R, typename T1, typename T2> R mod(T1 a, T2 b) { return (int)((int)a % (int)b); }
	template <typename R, typename T1, typename T2> R pow_(T1 a, T2 b) { return (pow(a, b)); }
}
#endif