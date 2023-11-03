#include "calculator.h"
#include "arithmetic.h"

using namespace std;

namespace arithmetic_scope {
	double arithmetic(int operation) {
		double num1, num2, result;
		switch (operation) {
		case 1:
			cout << "Enter number 1 : "; cin >> num1;
			cout << "Enter number 2 : "; cin >> num2;
			result = add<double>(num1, num2);
			break;
		case 2:
			cout << "Enter number 1 : "; cin >> num1;
			cout << "Enter number 2 : "; cin >> num2;
			result = sub<double>(num1, num2);
			break;
		case 3:
			cout << "Enter number 1 : "; cin >> num1;
			cout << "Enter number 2 : "; cin >> num2;
			result = mul<double>(num1, num2);
			break;
		case 4:
			cout << "Enter number 1 : "; cin >> num1;
			cout << "Enter number 2 : "; cin >> num2;
			result = div<double>(num1, num2);
			break;
		case 5:
			cout << "Enter number 1 : "; cin >> num1;
			cout << "Enter number 2 : "; cin >> num2;
			result = (double)mod<int>(num1, num2);
			break;
		case 6:
			cout << "Enter number 1 : "; cin >> num1;
			cout << "Enter number 2 : "; cin >> num2;
			result = pow_<double>(num1, num2);
			break;
		default:
			cout << "Invalid Operation." << endl
				<< "Try again..!" << endl;
		}
		return (double)result;

	}

	template <typename R, typename T1, typename T2> R add(T1 a, T2 b) { return (a + b); }
	template <typename R, typename T1, typename T2> R sub(T1 a, T2 b) { return (a - b); }
	template <typename R, typename T1, typename T2> R mul(T1 a, T2 b) { return (a * b); }
	template <typename R, typename T1, typename T2> R div(T1 a, T2 b) { return (a / b); }
	template <typename R, typename T1, typename T2> R mod(T1 a, T2 b) { return (int)((int)a % (int)b); }
	template <typename R, typename T1, typename T2> R pow_(T1 a, T2 b) { return (pow(a, b)); }

}