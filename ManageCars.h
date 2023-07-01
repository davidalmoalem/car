#pragma once
#include <iostream>
#include "MyCar.h"
using namespace std;

class ManageCars {
private:
	MyCar* value;
    int All_Num_Cars;
	
	
public:
	
	ManageCars();
	~ManageCars();
	void Print_All_Num_Cars();
	void Adding_Cars(MyCar& car);
	void Removing_Cars(int plate);
	void Printc(int plate);
	void Cars_Between_Years(int fromYear, int toYear);
	void Car_Price(int fromPrice, int toPrice);
	void Delete_car();
	void Printing_All_Cars();
};