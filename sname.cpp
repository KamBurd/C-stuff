//Kameron Burden
#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
int main()
{
	char string1[25];
	char string2[25];
	cout << "Enter a name in this order: Last, First" << endl;
		cin.getline(string1,25);
	cout << "Enter another name in this order: Last, First" << endl;
		cin.getline(string2,25);
		
		if (strcmp(string1, string2)< 0)
			cout << "The names are" << endl << string1 << endl << string2;
		else if (strcmp(string1, string2) > 0)
			cout << "The names are" << endl << string2 << endl << string1;
		else if (strcmp(string1, string2) == 0)
			cout << "The names are the same, they are both "<< string1 << endl;
	return 0;
	}

