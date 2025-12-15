// This program tests whether or not an initialized value
// is equal to a value input by the user

// Kameron Burden

#include <iostream>
using namespace std;

int main()
{
	int INStuition;
	INStuition = 3000;
	int OOStuition;
	OOStuition = 4500;
	int ISRNB;
	ISRNB = 2500;
	int OSRNB;
	OSRNB = 3500;
	char firstc;
	char secondc;
	cout << "Please input I if you are in-state or O if you are out-of-state:" << endl;
	cin >> firstc;
	cout << "Please input Y if you require room and board and N if you do not:" << endl;
	cin >> secondc;
	if (firstc == 'I' && secondc == 'Y')
		cout << "The total bill is " << INStuition + ISRNB << endl;
	else if (firstc == 'O' && secondc == 'Y')
		cout << "The total bill is " << OOStuition + OSRNB << endl;
	else if (firstc == 'I' && secondc == 'N')
		cout << "The total bill is " << INStuition << endl;
	else if (firstc == 'O' && secondc == 'N')
		cout << "The total bill is " << OOStuition << endl;
	return 0;
}