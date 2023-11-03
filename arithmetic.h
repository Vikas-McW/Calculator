namespace arithmetic_scope {
	double arithmetic(int operation);
	template <typename R, typename T1, typename T2> R add(T1 a, T2 b);
	template <typename R, typename T1, typename T2> R sub(T1 a, T2 b);
	template <typename R, typename T1, typename T2> R mul(T1 a, T2 b);
	template <typename R, typename T1, typename T2> R div(T1 a, T2 b);
	template <typename R, typename T1, typename T2> R mod(T1 a, T2 b);
	template <typename R, typename T1, typename T2> R pow_(T1 a, T2 b);
}