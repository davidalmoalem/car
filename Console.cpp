
#include <iostream>
#include "MyCar.h"
#include "ManageCars.h"
#include <string>
using namespace std;

bool isAText(const string& str) {
    for (char c : str) {
        if (isdigit(c)) {
            return false;
        }
        else if (str.empty()) {
            return false;
        }
        else {
            return true;
        }
    }
}
bool isNum(const string& str) {
    for (char c : str) {
        if (isalpha(c)) {
            return false;
        }
        else if(str.empty()) {
            return false;
        }
        else {
            return true;
        }
    }
}
int main() {
	
    ManageCars carManager;
	int input;
	const int MAX_SIZE = 100;
    while (1) {
        cout << "" << endl;
        cout << "To add a car type: 1\nTo remove a car type: 2\nTo print cars between 2 years type: 3\nTo print cars between 2 prices type: 4\nTo print all cars type: 5\nTo delete all cars type: 6" << endl;
        cin >> input;
        cout << "" << endl;
        cout << "" << endl;
        cin.ignore(); 

        if (input == 1) {            
            
            string Lohit_Risoy; 
            while (1) {
                cout << "Enter Lohit Rishoy With only numbers:" << endl;
                cin >> Lohit_Risoy;
                cin.ignore();
                if (isNum(Lohit_Risoy)) {
                    break;
                }
                else {
                    cout << "Invalid input enter a number." << endl;
                }
            }
            int lohit = stoi(Lohit_Risoy);

            string Degems;
            while (1) {
                cout << "Enter Degem only numbers:" << endl;
                cin >> Degems;
                cin.ignore();
                if (isNum(Degems)) {
                    break;
                }
                else {
                    cout << "Invalid input enter a number." << endl;
                }
            }
            int Degem = stoi(Degems);

            string MehirS;
            while (1) {
                cout << "Enter Mehir only numbers:" << endl;
                cin >> MehirS;
                cin.ignore();
                if (isNum(MehirS)) {
                    break;
                }
                else {
                    cout << "Invalid input enter a number." << endl;
                }
            }
            int Mehir = stoi(MehirS);

            string ShanaS;
            while (1) {
                cout << "Enter Shana only number:" << endl;
                cin >> ShanaS;
                cin.ignore();
                if (isNum(ShanaS)) {
                    break;
                }
                else {
                    cout << "Invalid input enter a number." << endl;
                }
            }
            int Shana = stoi(ShanaS);

            char color[MAX_SIZE];
            while (1) {
                cout << "Enter Cheva only letters:" << endl;
                cin.getline(color, MAX_SIZE);
                if (isAText(color)) {
                    break;
                }
                else {
                    cout << "Invalid input enter a text." << endl;
                }
            }

            string Nefah_ManoaS;
            while (1) {
                cout << "Enter Nefah Manoa only number:" << endl;
                cin >> Nefah_ManoaS;
                cin.ignore();
                if (isNum(Nefah_ManoaS)) {
                    break;
                }
                else {
                    cout << "Invalid input enter a number." << endl;
                }
            }
            int Nefah_Manoa = stoi(Nefah_ManoaS);

            char Sog_Gear[MAX_SIZE];
            while (1) {
                cout << "Enter Sog gear only text:" << endl;
                cin.getline(Sog_Gear, MAX_SIZE);
                if (isAText(Sog_Gear)) {
                    break;
                }
                else {
                    cout << "Invalid input enter again a text." << endl;
                }
            }

            char Erath_Yesor[MAX_SIZE];
            while (1) {
                cout << "Enter a Erath Yesor only text:" << endl;
                cin.getline(Erath_Yesor, MAX_SIZE);
                if (isAText(Erath_Yesor)) {
                    break;
                }
                else {
                    cout << "Invalid input enter a text." << endl;
                }
            }

            string YadS;
            while (1) {
                cout << "Enter Yad only numbers:" << endl;
                cin >> YadS;
                cin.ignore();
                if (isNum(YadS)) {
                    break;
                }
                else {
                    cout << "Invalid input enter again a number." << endl;
                }
            }
            int Yad = stoi(YadS);

            MyCar car(lohit, Degem, Mehir, Shana, color, Nefah_Manoa, Sog_Gear, Erath_Yesor, Yad);
            carManager.Adding_Cars(car);
        }

       else if (input == 2) {
            string LohitS;
            while (1) {
                cout << "If you want to remove a car Enter the Lohit Risoy only in number:" << endl;
                cin >> LohitS;
                cin.ignore();
                if (isNum(LohitS)) {
                    break;
                }
                else {
                    cout << "Invalid input enter again a number." << endl;
                }
            }
            int Yad = stoi(LohitS);
            carManager.Removing_Cars(Yad);
        }

        else if (input == 3) {
            string First_year_of_looking;
            string Last_year_of_looking;
            while (1) {
                cout << "If you want to search car between some 2 years enter them." << endl;
                cout << "Enter the first year that you want to start looking from only in numbers:" << endl;
                cin >> First_year_of_looking;
                cout << "Enter the last year that you want to finish looking for only in numbers:" << endl;
                cin >> Last_year_of_looking;
                cin.ignore();
                if (isNum(First_year_of_looking) && isNum(Last_year_of_looking)) {
                    break;
                }
                else {
                    cout << "Invalid input enter again a number." << endl;
                }
            }
            int First_Year = stoi(First_year_of_looking);
            int Last_Year = stoi(First_year_of_looking);
            carManager.Cars_Between_Years(First_Year, Last_Year);

        }

        else if (input == 4) {
            string Lowest_Price;
            string Highest_Price;
            while (1) {
                cout << "Enter the Tvaah Mehirim that you want to look for (price)." << endl;
                cout << "Enter the lowest price only in numbers:" << endl;
                cin >> Lowest_Price;
                cout << "Enter highest price only in numbers:" << endl;
                cin >> Highest_Price;
                cin.ignore();
                if (isNum(Lowest_Price) && isNum(Highest_Price)) {
                    break;
                }
                else {
                    cout << "Invalid input enter again a number." << endl;
                }
            }
            int fromPrice = stoi(Lowest_Price);
            int toPrice = stoi(Lowest_Price);
            carManager.Car_Price(fromPrice, toPrice);

        }

        else if (input == 5) {
            carManager.Printing_All_Cars();
        }

        else if (input == 6) {
            carManager.Delete_car();
        }
        else {
            cout << "Invalid value.\nPlease enter again:" << endl;
        }

    }



	return 0;
	
}