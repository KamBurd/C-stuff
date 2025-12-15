#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

// Kameron Burden

int main()
{
	fstream inFile("proverb.txt", ios::in);
	long offset;
	char ch;
	char more;

	do
	{
		// Fill in the code to write to the screen
		// the current read position (with label)
		cout << "The read position is currently in byte " << inFile.tellg() << endl;

		cout << "Enter an offset from the end of file position: ";
		cin >> offset;

		//	Fill in the code to move the read position “offset” bytes
		//	from the CURRENT read position.
		inFile.seekg(offset, ios::end);//beg = beginning end = end, cur= current

		//	Fill in the code to get one byte of information from the file
		//	and place it in the variable "ch".
		inFile.get(ch);

		cout << "The character read is " << ch << endl;
		cout << "If you would like to input another offset enter a Y"
			 << endl;
		cin >> more;

		// Fill in the code to clear the eof flag.
		inFile.clear();

	} while (toupper(more) == 'Y');

	inFile.close();

	return 0;
}
//exercise 2: