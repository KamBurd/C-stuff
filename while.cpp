#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
float old;
int i = 1;
float age;
cout << "how old are you?" << endl;
cin >> old;
while (i <= 5) 
{
	cout << "how old are you?" << i++ << endl;
	cin >> age;
}
return 0;
}