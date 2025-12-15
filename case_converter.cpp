// This program shows how the toupper and tolower functions can be
// applied in a C++ program

// Kameron Burden

#include <iostream>
#include <cctype>
#include <iomanip>
using namespace std;

int main()
{
	int week, total, dollars;
	float average;
	char choice;

	cout << showpoint << fixed << setprecision(2);

	do
	{
		total = 0;

		for (week = 1; week <= 4; week++)
		{
			cout << "How much (to the nearest dollar) did you"
				 << " spend on food during week " << week
				 << " ?:" << endl;
			cin >> dollars;

			total = total + dollars;
		}

		average = total / 4.0;

		cout << "Your weekly food bill over the chosen month is $"
			 << average << endl << endl;

			do
			{
				cout << "Would you like to find the average for "
					 << "another month?";
				cout << endl << "Enter y or n" << endl;
				cin >> choice;

			} while (tolower(choice) != 'y' && tolower(choice) != 'n'); //Keep asking for average if choice is any letter besides y or n

	} while (tolower(choice) == 'y'); //Ask for money spent every month if choice is y or end the whiole function if choice is n.

	return 0;
}
//exercise 2: When removing the Do/WHile loop, the function will continue to repeat if the choice is y and stop when the choice is n but it will not repeat asking for another month if you enter a letter besides y or n and exit the program