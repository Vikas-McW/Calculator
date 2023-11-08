#include "linear.h"

using namespace std;

namespace linear_scope {

	double linear(int operation) {
		double num, result;
		switch (operation) {
		case 1:
			cout << "Enter a number : "; cin >> num;
			result = (double)linear_scope::sqrt_<double>(num);
			break;
		case 2:
			cout << "Enter a number : "; cin >> num;
			result = linear_scope::abs_<double>(num);
			break;
		case 3:
			cout << "Enter a number : "; cin >> num;
			result = linear_scope::exp_<double>(num);
			break;
		case 4:
			cout << "Enter a number : "; cin >> num;
			result = linear_scope::log_<double>(num);
			break;
		default:
			cout << "Invalid Operation." << endl
				<< "Try again..!" << endl;
		}

		return (double)result;
	}

	template<typename R, typename T> R sqrt_(T n) { return (sqrt(n)); }
	template<typename R, typename T> R abs_(T n) { return (abs(n)); }
	//template<typename R, typename T> R abs_(T n) { return (0); }
	template<typename R, typename T> R exp_(T n) { return (exp(n)); }
	template<typename R, typename T> R log_(T n) { return (log10(n)); }
}