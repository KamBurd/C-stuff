// This program performs a linear search on a character array

// Kameron Burden

#include <iostream>
using namespace std;

int searchList(int[], int, int); // function prototype 

const int SIZE = 8;

int main()
{
	int word[SIZE] = { 3, 6, -19, 5, 5, 0, -2, 99 };
	int found;
	int ch;

	cout << "Enter a integer to search for:" << endl;
	cin >> ch;

	found = searchList(word, SIZE, ch);

	if (found == -1)
		cout << "The integer " << ch
		     << " was not found in the list" << endl;
	else
		cout << "The integr " << ch << " is in the " << found + 1
		     << " position of the list" << endl;

	return 0;
}

//*******************************************************************
//	searchList
//
//  task:	       This searches an array for a particular value
//  data in:	   List of values in an array, the number of
//	               elements in the array, and the value searched for
//	               in the array
//  data returned: Position in the array of the value or -1 if value
//	               not found
//
//*******************************************************************

int searchList(int List[], int numElems, int value)
{
	for (int count = 0; count <= numElems; count++)
	{
		if (List[count] == value)
			// each array entry is checked to see if it contains
			// the desired value. 
			return count;
			// if the desired value is found, the array subscript
			// count is returned to indicate the location in the array
	}

	return -1;	// if the value is not found, -1 is returned
}
int linearSearch(int arr[], int size, int value) {
	int index = 0;      // Used as a subscript to search the array  
	int position = -1;  // To record the position of search value  
	bool found = false; // Flag to indicate if value was found
	while (index < size && !found) {
		if(arr[index] == value) // If the value is found       
		{
			found = true; // Set the flag 
			position = index; // Record the value's subscript   
		}
		index++; // Go to the next element  
	}
	return position; // Return the position, or -1
}