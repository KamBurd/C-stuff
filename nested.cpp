// This program finds the average time spent programming by a student
// each day over a three day period.

// Kameron Burden

#include <iostream>
using namespace std;

int main()
{
	int numStudents;
	int numDays;
	float numHoursprog, numHoursbio, totalprog, totalbio, averagebio, averageprog;
	int student, day = 0;	// these are the counters for the loops

	cout << "This program will find the average number of hours a day"
		 << " that a student spent programming over a long weekend\n\n";
	cout << "How many students are there ?" << endl << endl;
	cin >> numStudents;

	cout << "enter the amount of days in the weekend?" << endl;
	cin >> numDays;
	for (student = 1; student <= numStudents; student++)
	{
		totalbio = 0;
		totalprog = 0;
		for (day = 1; day <= numDays; day++)
		{
			cout << "Please enter the number of hours worked by student " << student << " on programming"
				 " on day " << day << "." << endl;
			cin >> numHoursprog;

			totalprog = totalprog + numHoursprog;

			cout << "Please enter the number of hours worked by student" << student << " on biology"
				" on day " << day << "." << endl;
			cin >> numHoursbio;

			totalbio = totalbio + numHoursbio;
		}
		averagebio = totalbio / numDays;
		averageprog = totalprog / numDays;
		if (averageprog > averagebio) {
			cout << endl;
			cout << "The time spent on programming by "
				<< "student " << student << " is more than biology, with the average being: " << averageprog
				<< endl << endl << endl;
		}
		if (averagebio > averageprog) {
			cout << endl;
			cout << "The time spent on biology by "
				<< "student " << student << " is more than programming, with the average being: " << averagebio
				<< endl << endl << endl;
		}
		if (averagebio == averageprog) {
			cout << endl;
			cout << "The time spent on bioloy by "
				<< "student " << student << " is equal to that of programming, with the average being: " << averagebio << " and " << averageprog 
				<< endl << endl << endl;
		}
	}

	return 0;
}