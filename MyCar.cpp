#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include "MyCar.h"

MyCar::MyCar() {
	Lohit_Rishoy = 0;
	Degem = 0;
	Mehir = 0;
	Shana = 0;
	Cheva = nullptr;
	Nefah_Manoa = 0;
	Sog_A_Gear = nullptr;
	Erath_Yesor = nullptr;
	Yad = 0;
}

MyCar::MyCar(int lohitrishoy, int degem, int mehir, int shana, const char* cheva, int nefahmanoa, const char* sogagear, const char* erathyesor, int yad)
{
	setLohitrishoy(lohitrishoy);
	setDegem(degem);
	setMehir(mehir);
	setShana(shana);
	setCheva(cheva);
	setNefahmanoa(nefahmanoa);
	setSogaGear(sogagear);
	setEreathYesor(erathyesor);
	setYad(yad);
}
bool MyCar::compare(MyCar& other) {
	if (Shana < other.getshana()) {
		return 1;
	}
	else {
		return 0;
	}
}

void MyCar::Printing() {
	cout << Lohit_Rishoy << endl;
	cout << Degem << endl;
	cout << Mehir << endl;
	cout << Shana << endl;
	cout << Cheva << endl;
	cout << Nefah_Manoa << endl;
	cout << Sog_A_Gear << endl;
	cout << Erath_Yesor << endl;
	cout << Yad << endl;
}

int MyCar::getlohitrisoy()
{
	return Lohit_Rishoy;
}

int MyCar::getdegm()
{
	return Degem;
}

int MyCar::getmehir()
{
	return Mehir;
}

int MyCar::getshana()
{
	return Shana;
}

char* MyCar::getcheva()
{
	return Cheva;
}

int MyCar::getnefahmanoa()
{
	return Nefah_Manoa;
}

char* MyCar::getgear()
{
	return Sog_A_Gear;
}

char* MyCar::geterathyesor()
{
	return Erath_Yesor;
}

int MyCar::getYad()
{
	return Yad;
}

void MyCar::setLohitrishoy(int lohit)
{
	Lohit_Rishoy = lohit;
}

void MyCar::setDegem(int degem)
{
	this->Degem = degem;
}

void MyCar::setMehir(int mehir)
{
	if (mehir > 0) {
		this->Mehir = mehir;
	}else {
		cout << "Invalid price value." << endl;
	}
}

void MyCar::setShana(int shana)
{
	this->Shana = shana;
}

void MyCar::setCheva(const char* cheva)
{
	if (Cheva) {
		delete[] Cheva;
	}
	Cheva = new char[strlen(cheva) + 1];
	strcpy(Cheva, cheva);
}

void MyCar::setNefahmanoa(int nefahm)
{
	if (nefahm > 0) {
		Nefah_Manoa = nefahm;
	}
}

void MyCar::setSogaGear(const char* gear)
{
	if (Sog_A_Gear) {
		delete[] Sog_A_Gear;
	}
	Sog_A_Gear = new char[strlen(gear) + 1];
	strcpy(Sog_A_Gear, gear);
}

void MyCar::setEreathYesor(const char* erath)
{
	if (Erath_Yesor) {
		delete[] Erath_Yesor;
	}
	Erath_Yesor = new char[strlen(erath) + 1];
	strcpy(Erath_Yesor, erath);
}

void MyCar::setYad(int yad)
{
	if (yad > 0) {
		this->Yad = yad;
	}
	else {
		cout << "Invalid hand value." << endl;
	}
}
