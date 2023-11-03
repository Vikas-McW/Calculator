#include "calculator.h"
#include "trigonometric.h"

using namespace std;
const double PI = 3.14;

namespace trigonometric_scope {
	double trigonometric(int operation) {
		double num, result;
		switch (operation) {
		case 1:
			cout << "Degree in radian (num * PI). Enter num : "; cin >> num;
			num *= PI;
			result = sin_<double>(num);
			break;
		case 2:
			cout << "Degree in radian (num * PI). Enter num : "; cin >> num;
			num *= PI;
			result = cos_<double>(num);
			break;
		case 3:
			cout << "Degree in radian (num * PI). Enter num : "; cin >> num;
			num *= PI;
			result = tan_<double>(num);
			break;
		default:
			cout << "Invalid Operation." << endl
				<< "Try again..!" << endl;
		}

		return (double)result;
	}

	template<typename R, typename T> R sin_(T n) { return (sin(n)); }
	template<typename R, typename T> R cos_(T n) { return (cos(n)); }
	template<typename R, typename T> R tan_(T n) { return (tan(n)); }
}
