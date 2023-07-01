#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
class MyCar {
private:
	int Lohit_Rishoy; // ���� �����
	int Degem;        // ���
	int Mehir;        // ����
	int Shana;         // ��� 
	char* Cheva;       // ���
	int Nefah_Manoa;// ��� ���� 
	char* Sog_A_Gear;   // ��� ���
	char* Erath_Yesor;// ��� ����
	int Yad;         // ��
public:
	MyCar();
	MyCar(int lohitrishoy, int degem, int mehir,
		int shana, const char* cheva, int nefahmanoa,
		const char* sogagear, const char* ereahyesor, int yad);
	bool compare(MyCar& other);
	void Printing();
	int getlohitrisoy();
	int getdegm();
	int getmehir();
	int getshana();
	char* getcheva();
	int getnefahmanoa();
	char* getgear();
	char* geterathyesor();
	int getYad();

	void setLohitrishoy(int lohit);
	void setDegem(int degem);
	void setMehir(int mehir);
	void setShana(int shana);
	void setCheva(const char* cheva);
	void setNefahmanoa(int nefahm);
	void setSogaGear(const char* gear);
	void setEreathYesor(const char* Eraths);
	void setYad(int yad);

};