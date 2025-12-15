// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from the keyboard and the output will go to
// the screen.

// Kameron Burden
//DONE
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int	quantity;		// contains the amount of items purchased 
	float itemPrice;	// contains the price of each item
	float totalBill;	// contains the total bill.

	cout << setprecision(2) << fixed << showpoint;	// formatted output 
	cout << "Please input the number of items bought" << endl;

	// Fill in the input statement to bring in the quantity.
	cin >> quantity;
	// Fill in the prompt to ask for the price.
	cout << "Enter the price" << endl;
	// Fill in the input statement to bring in the price of each item.
	cin >> itemPrice;
	// Fill in the assignment statement to determine the total bill.
	totalBill = quantity * itemPrice;
		// Fill in the output statement to print total bill,
		// with a label to the screen.
	cout << "The total bill is " << totalBill << endl;
	return 0;
}
//Items bought 22
//Price is 10:98
//Result of code: 241.56
//Exercise 2: Removing fixed and changing the setprecision to 2 changed the result to 2.4e+02, probably making the decimal too large
//Exercise 3: Changing the setprecision to 4 changed the result to 241.5600, adding two extra 0's