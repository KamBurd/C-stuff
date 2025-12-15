// This program demonstrates the use of dynamic variables

// Kameron Burden
#include <iostream>
#include <iomanip>
using namespace std;

const int MAXNAME = 10;

int main()
{
	int pos;
	char *name = nullptr;
	int *one = nullptr;
	int *two = nullptr;
	int *three = nullptr;
	int result;

	one = new int;//	Fill in code to allocate the integer variable one here

	two = new int;//	Fill in code to allocate the integer variable two here

	three = new int;//	Fill in code to allocate the integer variable three here

	name = new char[MAXNAME];//	Fill in code to allocate the character array pointed to by name

	cout << "Enter your last name with exactly 10 characters." << endl;
	cout << "If your name has < 10 characters, repeat last letter. " << endl
		 << "Blanks at the end do not count." << endl;

	for (pos = 0; pos < MAXNAME; pos++)
		cin >> *(name + pos);// Fill in code to read a character into the name array
				// WITHOUT USING a bracketed subscript

	cout << "Hi " << endl;

	for (pos = 0; pos < MAXNAME; pos++)
		cout << setw(0) << *(name + pos);// Fill in code to a print a character from the name array
				// WITHOUT USING a bracketed subscript

	// Fill in code to input three numbers and store them in the
	// dynamic variables pointed to by pointers one, two, and three.
	// You are working only with pointer variables
	cout << endl << "Enter three integer numbers separated by blanks" << endl;
	cout << "Input the 1st number" << endl;
	cin >> *one;
	cout << "Input the 2nd number" << endl;
	cin >> *two;
	cout << "Input the 3rd number" << endl;
	cin >> *three;

	// echo print
	cout << "The three numbers are " << *one << " " << *two << " " << *three << endl;

	// Fill in code to output those numbers

	result = *one + *two + *three;// Fill in code to calculate the sum of the three numbers

	cout << "The sum of the three values is " << result << endl;

	// Fill in code to deallocate one, two, three and name
	delete one;
	delete two;
	delete three;
	delete[] name;
	return 0;
}