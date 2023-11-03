#include <iostream>

#include "arithmetic.h"
#include "linear.h"
#include "trigonometric.h"

#define ARITHMATIC
#define LINEAR
#define TRIGONOMETRIC

void source(void);

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
#ifdef ARITHMATIC
		<< "1 : Arithmatic Operations : " << endl         // 1
		<< "\t" << "1.1 : Addition (+) " << endl
		<< "\t" << "1.2 : Substract (-) " << endl
		<< "\t" << "1.3 : Multiply (*) " << endl
		<< "\t" << "1.4 : Division (/) " << endl
		<< "\t" << "1.5 : Remainder (%) " << endl
		<< "\t" << "1.6 : Power (**) " << endl
#endif
#ifdef LINEAR
		<< "2 : Linear Operations : " << endl             //  2
		<< "\t" << "2.1 : Squire Root " << endl
		<< "\t" << "2.2 : Absolute Value " << endl
		<< "\t" << "2.3 : Exponetial " << endl
		<< "\t" << "2.4 : Log10" << endl
#endif
#ifdef TRIGONOMETRIC
		<< "3 : Trigonometric Operations : " << endl      // 3
		<< "\t" << "3.1 : sin " << endl
		<< "\t" << "3.2 : cos " << endl
		<< "\t" << "3.3 : tan " << endl
		<< "4 : Exit " << endl
		<< endl;
#endif
	int operation_type = 0, operation = 0;
	double result;

	cout << "Enter Operation Type : "; cin >> operation_type;


	switch (operation_type) {
		// -------------------------------------------------------------------------------
#ifdef ARITHMATIC
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
		result = arithmetic_scope::arithmetic(operation);
		cout << "Result = " << result << endl;
		break;
#endif
		// -------------------------------------------------------------------------------

		// -------------------------------------------------------------------------------
#ifdef LINEAR
	case 2:
		cout << "Choose Operation : " << endl
			<< "2 : Linear Operations : " << endl         //  2
			<< "\t" << "2.1 : Squire Root " << endl
			<< "\t" << "2.2 : Absolute Value " << endl
			<< "\t" << "2.3 : Exponetial " << endl
			<< "\t" << "2.4 : Log10" << endl
			<< endl;

		cout << "Enter Operation : 2."; cin >> operation;
		result = linear_scope::linear(operation);
		cout << "Result = " << result << endl;
		break;
#endif
		// -------------------------------------------------------------------------------

		// -------------------------------------------------------------------------------
#ifdef TRIGONOMETRIC
	case 3:
		cout << "Choose Operation : " << endl
			<< "3 : Trigonometric Operations : " << endl  // 3
			<< "\t" << "3.1 : sin " << endl
			<< "\t" << "3.2 : cos " << endl
			<< "\t" << "3.3 : tan " << endl
			<< endl;

		cout << "Enter Operation : 3."; cin >> operation;
		result = trigonometric_scope::trigonometric(operation);
		cout << "Result = " << result << endl;
		break;
#endif
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