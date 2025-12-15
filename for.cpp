// This program has the user input a number n and then finds the
// mean of the first n positive integers

//Kameron Burden

#include <iostream>
using namespace std;

int main()
{
	int start;
	int value;		// value is some positive number n
	int total = 0;	// total holds the sum of the first n positive numbers 
	int number;		// the amount of numbers
	float mean;		// the average of the first n positive numbers

	cout << "Please enter a starting integer" << endl;
	cin >> start;
	cout << "Please enter a ending integer" << endl;
	cin >> value;

	if (value > 0)
	{
		for (number = start; number <= value; number++)
		{
			total = total + number;
		}	// curly braces are optional since there is only one statement

		mean = static_cast<float>(total) / start - value + 1;	// note the use of the typecast
													// operator here 
		cout << "The mean average of the first " << value
			 << " positive integers is " << mean << endl;
	}

	else
		cout << "Invalid input - integer must be positive" << endl;

	return 0;
}