//Kameron Burden
#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{
	char string1[20] = "Total Eclipse ";
	char string2[11] = "of the Sun";
	cout << string1 << endl;
	cout << string2 << endl;
	strcat(string1, string2);
	cout << string1 << endl;
}
//Exercise 2: After changing the array size from 25 to 20, the same result is printed