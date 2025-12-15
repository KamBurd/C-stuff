
//Kameron Burden
#include <iostream>
#include <iomanip>
using namespace std;
//Chair prices
//American: 85.00
//Modern: 57.50
//French: 127.75
//Chair numbers
//American: 20
//Modern: 15
//French: 5
int main()
{
	float achairs;
	float mchairs;
	float fchairs;
	float final1;
	float final2;
	float final3;
	float last;
	cout << setprecision(2) << fixed << showpoint;
	//Fill in the prompt for the first chair
	cout << "Please input the number of American Colonial chairs sold" << endl;
	cin >> achairs;
    // Fill in the prompt for the second chair.
	cout << "Please input the number of Modern chairs sold" << endl;
	cin >> mchairs;
	// Fill in the prompt for the third chair.
	cout << "Please input the number of French Classical chairs sold" << endl;
	cin >> fchairs;
	final1 = achairs * 85.00;
	final2 = mchairs * 57.50;
	final3 = fchairs * 127.75;
	cout << "The total sales of American Colonial chairs is " << final1 << endl;
	cout << "The total sales of Modern chairs is " << final2 << endl;
	cout << "The total sales of French Classical chairs is " << final3 << endl;
	last = final1 + final2 + final3;
	cout << "The total sales of all chairs is " << last << endl;
	return 0;
}