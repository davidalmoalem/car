#include "ManageCars.h"
using namespace std;

ManageCars::ManageCars() {
	value = new MyCar[100];
	All_Num_Cars = 0;
}

ManageCars::~ManageCars() {
	delete[] value;
}

void ManageCars::Print_All_Num_Cars() {
	cout << All_Num_Cars << endl;
}

void ManageCars::Adding_Cars(MyCar& car) {
	value[All_Num_Cars] = car;
	All_Num_Cars++;
}

void ManageCars::Removing_Cars(int plate) {
	for (int i = 0; i < All_Num_Cars; i++) {
		if (value[i].getlohitrisoy() == plate) {
			for (int j = i; j < All_Num_Cars - 1; j++) {
				value[j] = value[j + 1];
			}
			All_Num_Cars--;
			cout << "Car with license plate " << plate << " removed." << endl;
			return;
		}
	}
	cout << "Can not remove the car with Lohit Risoy " << plate << " not found." << endl;
}

void ManageCars::Printc(int plate) {
	int num = 1;
	for (int i = 0; i < All_Num_Cars; i++) {
		if (plate == value[i].getlohitrisoy()) {
			cout << "Car " << num << ": " << endl;
			value[i].Printing();
			return;
		}
		num++;
	}
	cout << "Can not print the car with Lohit Risoy " << plate << " not found." << endl;
}

void ManageCars::Cars_Between_Years(int fromYear, int toYear) {
	int year = fromYear;
	int found = 0;

	for (int i = 0; i < All_Num_Cars; i++) {
		for (int j = fromYear; j <= toYear; j++) {
			if (j == value[i].getshana()) {
				found = 1;
				cout << value[i].getgear() << endl;
				cout << value[i].getcheva() << endl;
				cout << value[i].getnefahmanoa() << endl;
				cout << value[i].getYad() << endl;
				cout << value[i].getlohitrisoy() << endl;
				cout << value[i].geterathyesor() << endl;
				cout << value[i].getdegm() << endl;
				cout << value[i].getmehir() << endl;
				cout << value[i].getshana() << endl;
			}
		}
		if (found == 0) {
			cout << "Can not find a cars between the ''NULL'' years." << endl;
		}
	}
}

void ManageCars::Car_Price(int fromPrice, int toPrice) {
	int price = fromPrice;
	int found = 0;

	for (int i = 0; i < All_Num_Cars; i++) {
		for (int j = fromPrice; j <= toPrice; j++) {
			if (j == value[i].getmehir()) {
				found = 1;
				cout << value[i].getgear() << endl;
				cout << value[i].getcheva() << endl;
				cout << value[i].getnefahmanoa() << endl;
				cout << value[i].getYad() << endl;
				cout << value[i].getlohitrisoy() << endl;
				cout << value[i].geterathyesor() << endl;
				cout << value[i].getdegm() << endl;
				cout << value[i].getmehir() << endl;
				cout << value[i].getshana() << endl;
			}
		}
	}
	if (found == 0) {
		cout << "Can not find a cars between the prices you've entered." << endl;
	}
}

void ManageCars::Delete_car() {
	for (int i = 0; i < All_Num_Cars - 1; i++) {
		for (int j = All_Num_Cars; j >= 0; j--) {
			value[j] = value[j + 1];//[][][][][]
		}
		All_Num_Cars--;
	}
	cout << "All the cars are deleted. " << endl;
}

void ManageCars::Printing_All_Cars() {
	for (int i = 0; i < All_Num_Cars; i++) {
		cout << "Print all cars, Car" << i + 1 << endl;
		value[i].Printing();
	}
}