#include <iostream>
#include <string>
#include "Header.h"
using namespace std;


int main() {

	string choice;

	cout << "                                            Welcome!!!!" << endl;
	cout << endl;
	cout << "=======================================================================================================" << endl;
	cout << "*******************************************************************************************************" << endl;
	cout << "=======================================================================================================" << endl;
	cout << endl;
	while (true) {
		cout << "What kind of device are you looking to build?" << endl;
		cout << "1.PC\n2.Windows Laptop\n3.MAC\n4.MacBook\n";
		cout << "Choice: ";
		getline(cin, choice);

		cout << "Assembling the device....\n";

		if (choice == "PC") {

			PC* pc = new PC();
			pc->Insertion();
			pc->Display();
			break;
		}
		else if (choice == "Windows Laptop") {

			WindowsLaptop* wl = new WindowsLaptop();
			wl->Insertion();
			wl->Display();
			break;
		}
		else if (choice == "MAC") {

			MAC* mac = new MAC();
			mac->Insertion();
			mac->Display();
			break;
		}
		else if (choice == "MacBook") {

			MacBook* mb = new MacBook();
			mb->Insertion();
			mb->Display();
			break;
		}
		else {

			cout << "Invalid. Try again." << endl;
			continue;
		}
	}
	return 0;

}