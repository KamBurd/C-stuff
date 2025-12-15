
//Kameron Burden
#include <iostream>
#include <cctype>
#include <cstring>
#include <iomanip>
using namespace std;
int findHighest(struct p, int);
struct plane {
	float tplanel, tplaned, gplane, lplane, land, depart;
};
int main()
{
	int g = 0;
	int l;
	int k = 0;
	int month = 12;
	plane fly[12];
		for (int month = 1; month <= 12; month++) {
			cout << "How many planes landed in month " << month << "?" << endl;
			cin >> fly[month].land;
		}
		for (int mont = 1; mont <= 12; mont++) {
			cout << "How many planes departed in month " << mont << "?" << endl;
			cin >> fly[mont].depart;
		}
		cout << "ok" << endl;
		//for the total amount of landing and departing planes
		fly[12].tplanel = fly[1].land + fly[2].land + fly[3].land + fly[4].land + fly[5].land + fly[6].land + fly[7].land + fly[8].land + fly[9].land + fly[10].land + fly[11].land + fly[12].land;
		fly[12].tplaned = fly[1].depart + fly[2].depart + fly[3].depart + fly[4].depart + fly[5].depart + fly[6].depart + fly[7].depart + fly[8].depart + fly[9].depart + fly[10].depart + fly[11].depart + fly[12].depart;
		cout << "Total planes Landed: " << fly[12].tplanel << endl;
		cout << "Total planes Departed: " << fly[12].tplaned << endl;
		//to find the greatest amount of planes landed 
		for (int great = 1; great <= 12; great++) {
		
			if (fly[great].land > g) {
				g = fly[great].land;

			}
		}
		cout << "Greatest amount of planes landed: " << g << endl;
		//to find the smallest amount of planes landed 
		for (int least = 1; least <= 12; least++) {
			
		
			if (fly[least].land <= l) {
				l = fly[least].land;
			}
		}
	
		cout << "Smallest amount of planes landed: " << l << endl;
		cout << "Average # of planes landed each month " << fly[12].tplanel / 12 << endl;
		cout << "Average # of planes departed each month " << fly[12].tplaned / 12 << endl;
		return 0;
			//Could not find out how to include month with smallest and greatest plane amounts
}

