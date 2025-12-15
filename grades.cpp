// This program prints "You Pass" if a student's average is
// 60 or higher and prints "You Fail" otherwise

// Kameron Burden

#include <iostream>
using namespace std;

int main()
{
	float average;	// holds the grade average

	cout << "Input your average:" << endl;
	cin >> average;
	if (average >= 90)
		cout << "Your grade is A" << endl;
	else if (average >= 80)
		cout << "Your grade is B" << endl;
	else if (average >= 60)
		cout << "You Pass " << endl;
	else if (average >= 0)
		cout << "You Fail" << endl;
	return 0;
}