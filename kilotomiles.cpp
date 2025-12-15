//This program will convert the number of kilometers entered into miles
//Kameron Burden

#include <iostream>
using namespace std;
int main()
{
	float kiloNumber;
	float miles;

	//Ask for number of kilometers
	cout << "Enter the number of kilometers, any number will do." << endl;;
	cout << "Then hit enter" << endl;
	cin >> kiloNumber;
	miles = 0.621; //1 mile in kilometers
	//End result
	cout << kiloNumber << " kilometer(s) is " << kiloNumber * miles << " miles. " << "\n";

}