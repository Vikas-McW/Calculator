#include <iostream>
#include <cmath>
#include "linear.h"
#include "arithmetic.h"
#include "trigonometic.h"
void source(void);

const double PI = 3.14;

using namespace std;

int main(int argc, char *argv[]) {
	/*
	cout << typeid(result).name() << endl;
	if (typeid(result).name() == typeid(int).name())
		cout << true << endl;
	else
		cout << false << endl;
	*/
	char choice = 'y';
	while (true) {
		source();
		cout << "Do you want run again (y/n) : "; cin >> choice;
		if (choice != 'y' && choice != 'Y')
			break;
		cout << "-----------------------------------------------------------------------" << endl;
		cout << endl << endl;
		system("cls"); 
	}
	return 0;
}


void source(void) {
	cout << "Welcome to Math's World : " << endl
		<< "Choose Operation Type : " << endl
		<< "1 : Arithmatic Operations : " << endl     // 1
		<< "\t" << "1.1 : Addition (+) " << endl
		<< "\t" << "1.2 : Substract (-) " << endl
		<< "\t" << "1.3 : Multiply (*) " << endl
		<< "\t" << "1.4 : Division (/) " << endl
		<< "\t" << "1.5 : Remainder (%) " << endl
		<< "\t" << "1.6 : Power (**) " << endl
		<< "2 : Linear Operations : " << endl         //  2
		<< "\t" << "2.1 : Squire Root " << endl
		<< "\t" << "2.2 : Absolute Value " << endl
		<< "\t" << "2.3 : Exponetial " << endl
		<< "\t" << "2.4 : Log10" << endl
		<< "3 : Trigonometric Operations : " << endl  // 3
		<< "\t" << "3.1 : sin " << endl
		<< "\t" << "3.2 : cos " << endl
		<< "\t" << "3.3 : tan " << endl
		<< "4 : Exit " << endl
		<< endl;

	int operation_type = 0, operation = 0;
	double num1, num2, num, result;

	cout << "Enter Operation Type : "; cin >> operation_type;


	switch (operation_type) {
		// -------------------------------------------------------------------------------
	case 1:
		cout << "Choose Operation : " << endl
			<< "1 : Arithmatic Operations : " << endl     // 1
			<< "\t" << "1.1 : Addition (+) " << endl
			<< "\t" << "1.2 : Substract (-) " << endl
			<< "\t" << "1.3 : Multiply (*) " << endl
			<< "\t" << "1.4 : Division (/) " << endl
			<< "\t" << "1.5 : Remainder (%) " << endl
			<< "\t" << "1.6 : Power (**) " << endl
			<< endl;
		cout << "Enter Operation : 1."; cin >> operation;

		switch (operation) {
		case 1:
			cout << "Enter number 1 : "; cin >> num1;
			cout << "Enter number 2 : "; cin >> num2;
			result = arith::add<double>(num1, num2);
			break;
		case 2:
			cout << "Enter number 1 : "; cin >> num1;
			cout << "Enter number 2 : "; cin >> num2;
			result = arith::sub<double>(num1, num2);
			break;
		case 3:
			cout << "Enter number 1 : "; cin >> num1;
			cout << "Enter number 2 : "; cin >> num2;
			result = arith::mul<double>(num1, num2);
			break;
		case 4:
			cout << "Enter number 1 : "; cin >> num1;
			cout << "Enter number 2 : "; cin >> num2;
			result = arith::div<double>(num1, num2);
			break;
		case 5:
			cout << "Enter number 1 : "; cin >> num1;
			cout << "Enter number 2 : "; cin >> num2;
			result = (double)arith::mod<int>(num1, num2);
			break;
		case 6:
			cout << "Enter number 1 : "; cin >> num1;
			cout << "Enter number 2 : "; cin >> num2;
			result = arith::pow_<double>(num1, num2);
			break;
		default:
			cout << "Invalid Operation." << endl
				<< "Try again..!" << endl;
		}
		cout << "Result : " << result << endl << endl;
		break;
		// -------------------------------------------------------------------------------

		// -------------------------------------------------------------------------------
	case 2:
		cout << "Choose Operation : " << endl
			<< "2 : Linear Operations : " << endl         //  2
			<< "\t" << "2.1 : Squire Root " << endl
			<< "\t" << "2.2 : Absolute Value " << endl
			<< "\t" << "2.3 : Exponetial " << endl
			<< "\t" << "2.4 : Log10" << endl
			<< endl;

		cout << "Enter Operation : 2."; cin >> operation;

		switch (operation) {
		case 1:
			cout << "Enter a number : "; cin >> num;
			result = (double)line::sqrt_<double>(num);
			break;
		case 2:
			cout << "Enter a number : "; cin >> num;
			result = line::abs_<double>(num);
			break;
		case 3:
			cout << "Enter a number : "; cin >> num;
			result = line::exp_<double>(num);
			break;
		case 4:
			cout << "Enter a number : "; cin >> num;
			result = line::log_<double>(num);
			break;
		default:
			cout << "Invalid Operation." << endl
				<< "Try again..!" << endl;
		}
		cout << "Result : " << result << endl << endl;
		break;
		// -------------------------------------------------------------------------------

		// -------------------------------------------------------------------------------
	case 3:
		cout << "Choose Operation : " << endl
			<< "3 : Trigonometric Operations : " << endl  // 3
			<< "\t" << "3.1 : sin " << endl
			<< "\t" << "3.2 : cos " << endl
			<< "\t" << "3.3 : tan " << endl
			<< endl;

		cout << "Enter Operation : 3."; cin >> operation;

		switch (operation) {
		case 1:
			cout << "Degree in radian (num * PI). Enter num : "; cin >> num;
			num *= PI;
			result = trig::sin_<double>(num);
			break;
		case 2:
			cout << "Degree in radian (num * PI). Enter num : "; cin >> num;
			num *= PI;
			result = trig::cos_<double>(num);
			break;
		case 3:
			cout << "Degree in radian (num * PI). Enter num : "; cin >> num;
			num *= PI;
			result = trig::tan_<double>(num);
			break;
		default:
			cout << "Invalid Operation." << endl
				<< "Try again..!" << endl;
		}
		cout << "Result : " << result << endl << endl;
		break;
		// ------------------------------------------------------------------------------

		// ------------------------------------------------------------------------------
	case 4:
		cout << "Bye..." << endl;						// exit
		exit(0);

		break;
		// ------------------------------------------------------------------------------

		// ------------------------------------------------------------------------------
	default:
		cout << "Invalid Operatoin Type...!" << endl << endl;   // default

		// ------------------------------------------------------------------------------
	}

}