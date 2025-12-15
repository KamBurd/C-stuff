#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
int main(){
	//increment basics.
	/*increments are used to gradually build a number up for a set amount of times, it can be used for things like
	increasing the amount of days in a code project*/
	// increments are used in different ways
	// (variable)++ shows the current value first, and then adds one to it for the next time it shows up, and so on for the set amount of times
	// ++(variable) immediatley adds one to the current value before showing it, and continues to do so for the set amount of times
	// (variable)-- is similar to (variable)++, but instead of adding, it subtracts after showing the current value
	// --(variable) is similar to ++(variable) but it immediatley subtracts the current value before showing it

	//increment for loop variant
	for (int y = 0; y < 10; y++) {// As long as y is lower then 10, it will continue to increase until its no longer less then 6, which prints out the letter 'k' 6 times
		cout << "k" << endl;
		y++;
	}
	//increment while loop variant
	int i = 0;
	int p = 10;
	while (i < p) {// As long as i is lower then p, which is 6, it will continue to increase until its no longer less then 6, which prints out the letter 'b' 6 times
		cout << "b" << endl;
		i++;
		i++;
	}
	return 0;






}