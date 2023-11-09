#include "calculator.h"
#include "collection.h"

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
