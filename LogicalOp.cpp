// This program illustrates the use of logical operators

// Kameron Burden

#include <iostream>
using namespace std;

int main()
{
	char year;
	float gpa;

	cout << "What year student are you ?" << endl;
	cout << "Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)"
	<< endl << endl;
	cin >> year;

	cout << "Now enter your GPA" << endl;
	cin >> gpa;

	if (gpa >= 2.0 && year == '4')
		cout << "It is time to graduate soon" << endl;

	else if  (year != '4' || gpa <2.0)
		cout << "You need more schooling" << endl;

	return 0;
}
//Exercise 1: !(gpa >= 2.0 && year == '4')
//Excercise 2: NO because It would not cover the other 1 and 2 years
//Exercise 3: All the years can graduate if the GPA is above 2.0 but every year except 4 wont graduate with a GPA below 2.0
//Exercise 4: Only year 4 with a GPA above 2.0 can graduate when you change the else if