
//Kameron Burden
#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
const int SIZE = 10;
int main()
{
	char last[SIZE];
		cout << "Enter your last name, don't use more than 9 characters" << endl;
		cin.getline(last, SIZE);
		cout << "Hello, " << last << "." << endl;

}
//Newmanouskous
//Exercise 2: It prints out "Newmanouskous"
//Exxcerise 3: After adding the get.line function, the name prints out as "Newmanous"