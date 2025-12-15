// STU code;
//KAMERON BURDEN
//JORGE RIVERO
//JOSHUA SUFFRAT
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void departarrive(double, double);
void totaldays(int);
double totalexpense;
double tese;
double teth; 
double w;
double q;
double re;
double sw;
double  ze;
double qw;
double tasaved;
int totalmiles;
double reimburse;
float confer;
double dtime;
double atime;
float paid;
char y;
int u;
int b;
int o;
char x;
char t;
char d;
char par;
char ride;
double charge;
int k;
double c;
double hotelfee;
float pfees;
int n;
int days;
int bprice;
int lprice;
int dprice;
int a;
double aexpsense;
int night;
char meal;
//The total days spent on the trip
//What time you left on the trip, and what time you came back.
void departarrive(double depart, double arrive) {
	cout << "What time did you leave for the trip?" << endl << endl <<
    "Put a decimal instead of a colon, like 5:00 = 5.00, and use army time if you want" << endl;
	cin >> depart;
	depart = depart;
	while (depart < .59)
	{
		cout << "Invalid, enter a real time" << endl;
		cout << "What time did you leave for the trip?" << endl << endl <<
			"Put a decimal instead of a colon, like 5:00 = 5.00, and use army time if you want" << endl;
		cin >> depart;
	}
	cout << "What time did you come back from the trip?" << endl << endl <<
	"Put a decimal instead of a colon, like 5:00 = 5.00 and use army time if you want" << endl;
	cin >> arrive;
	arrive = arrive;
	while (arrive < .59)
	{
		cout << "Invalid, enter a real time" << endl;
		cout << "What time did you come back from the trip?" << endl << endl <<
			"Put a decimal instead of a colon, like 5:00 = 5.00 and use army time if you want" << endl;
		cin >> arrive;
	}
	cout << "You left at " << depart << endl;
	cout << "and came back at " << arrive << endl;
}

// Expenses of Airfare
void airfare(char y, double cost) {
	cout << "Did you travel in a plane?" << endl << endl <<
		"Enter (y or n)" << endl;
	cin >> y;
	y = y;
	if (y == 'y') {
		cout << "How much did the plane ticket cost?" << endl;
		cin >> cost;
		cost = cost;
		while (cost < 0.00)
		{
			cout << "Invalid, enter a real number" << endl << endl;
			cout << "How much did the plane ticket cost? " << endl;
			cin >> cost;
		}
		cout << "So you've spent " << cost << " dollars on a plane ticket." << endl;
		totalexpense = totalexpense + cost;
		cout << "Current total is " << totalexpense << "$" << endl;
	}

		if (y == 'n') {
			cout << "Ok" << endl;
			cost = 0;
			cout << "Current total is " << totalexpense << "$" << endl;
		}
	}

//Expense of Private Vehicle
	void carfare(char c, int l, double price) {
		cout << "Did you use a private vehicle on the trip?" << endl << endl <<
			"Enter (y or n)" << endl;
		cin >> c;
		c = c;
			if (c == 'y') {
				const double CENTS_PER_MILE = 0.27;
				cout << "How many miles were driven in said vehicle?" << endl;
				cin >> l;
				l = l;
				while (l < 0)
				{
					cout << "Invalid, enter a real number" << endl << endl;
					cout << "How many miles were driven in said vehicle? " << endl;
					cin >> l;
				}
				price = l * CENTS_PER_MILE;
				cout << "So you've traveled " << l << " miles by car." << endl;
				cout << "The total amount for driving that far is " << price << " dollar(s)." << endl;
				totalexpense = totalexpense + price;
				cout << "Current total is " << totalexpense << "$" << endl;
			}
			if (c == 'n') {
				cout << "Ok" << endl;
				l = 0;
				cout << "Current total is " << totalexpense << "$" << endl;
			}
		
	}

//Expense of Parking
void parkingfees(float park, char p) {
	cout << "Was there any parking?" << endl <<
		"Enter (y/n)" << endl;
	cin >> p;
		if(p == 'y')
		{
		 cout << "How much was spent on parking? 6$ is the limit before expenses " << endl;
		 cin >> park;
		 totalexpense = park + totalexpense;
		 cout << "Current Price is " << totalexpense << "$" << endl;
		}
		if (p == 'n') {
			cout << "Ok" << endl;
			cout << "Current total is " << totalexpense << "$" << endl;
		}
	while (park < 0.00)
	{
		cout << "Invalid, enter a real number" << endl << endl;
		cout << "How much was spent on parking? 6$ is the limit before expenses" << endl;
		cin >>park;
		cout << "Current Price is " << totalexpense << "$" << endl;
	}
	if (park > 6)
	{
		reimburse = reimburse + park - 6;
		cout << "You'll have to reimburse an extra " << reimburse << "$" << endl;
		cout << "Total Reimburse : " << reimburse << "$" << endl;
		cout << "Current total is " << totalexpense << "$" << endl;
	}
	if (park < 6) {
		tese = park - 6 * -1;
	}
	else if (park = 0) {
		tese = 0;
	}
}

//Expense of Taxi
void taxifees(char taxi, float fare) {
	cout << "Was a taxi used?" << endl <<
		"Enter (y/n)" << endl;
	cin >> taxi;
	if (taxi == 'y') {
			cout << "How much was spent on the taxi? 10$ is the limit before expenses " << endl;
			cin >> fare;
			if (fare > 10) {
				reimburse = reimburse + fare - 10;
				totalexpense = totalexpense + fare;
				cout << "You'll have to reimburse " << fare - 10 << " dollars " << endl;
				cout << "Total Reimburse : " << reimburse << "$" << endl;
			}
			while (fare < 0.00)
			{
				cout << "Invalid, enter a real number" << endl << endl;
				cout << "How much was spent on the taxi?" << endl;
				cin >> fare;
			}
			
			if (fare < 10) {
				totalexpense = totalexpense + fare;
				teth = fare - 10 * -1;
			}
				cout << "Current total is " << totalexpense << "$" << endl;
		if (fare = 0) {
			teth = 0;
		}
	}
	else if (taxi == 'n') {
		cout << "Ok" << endl;
		fare = 0;
		cout << "Your current Price is " << totalexpense << "$" << endl;
	}
}

//Expense of Conference/Seminar
void confminar(char minar, float cprice) {
	cout << "Did you participate in a Conference or Seminar?" << endl <<
		"Enter (y/n)" << endl;
	cin >> minar;
	if (minar == 'y')
	{
		cout << "How much did you spend in the Conference/Seminar?" << endl;
		cin >> cprice;
		totalexpense = totalexpense + cprice;
		cout << "Current Price is " << totalexpense << "$" << endl;
	}
	if (minar == 'n')
	{
		cout << "Ok" << endl;
		cprice = 0;
		cout << "Current Price is " << totalexpense << "$" << endl;
	}
	while (cprice < 0)
	{
		cout << "Invalid, enter a real number" << endl << endl;
		cout << "How much did you spend in the Conference/Seminar?" << endl;
		cin >> cprice;
	}
}

//Expense of meals
void meals(char m, int b, int z, int d) {
	cout << "Did you have any meals?" << endl <<
		"Enter (Y/N)" << endl;
	cin >> m;
	if (m == 'y') {
		if (dtime < 7.00) {
			cout << "How much was breakfast? 9$ is the limit before expenses" << endl;
			cin >> b;
		}
		if (b > 9) {
			totalexpense = b + totalexpense;
			reimburse = reimburse + b - 9;
			cout << "Total Reimburse : " << reimburse << "$" << endl;
		}
		if (b < 9) {
			w = b - 9 * -1;
			totalexpense = b + totalexpense;
		}
		if (dtime < 12.00)
		{
			cout << "How much was lunch? 12$ is the limit before expenses" << endl;
			cin >> z;
		}
		if (z > 12) {
			totalexpense = totalexpense + z;
			reimburse = reimburse + z - 12;
			cout << "Total Reimburse : " << reimburse << "$" << endl;
		}
		if (z < 12) {
			totalexpense = totalexpense + z;
			q = z - 12 * -1;

		}
		if (dtime < 18.00)
		{
			cout << "How much was dinner? 16$ is the limit before expenses" << endl;
			cin >> d;
			totalexpense = totalexpense + d;

		}
		if (d > 16) {
			reimburse = reimburse + d - 16;
			cout << "Total Reimburse : " << reimburse << "$" << endl;
			totalexpense = totalexpense + d;
		}
		if (d < 16) {
			re = d - 16 * -1;
			totalexpense = totalexpense + d;
		}
		cout << "Current Price is " << totalexpense << "$" << endl;

	}
	if (m == 'n') {
		cout << "Ok" << endl;
		cout << "Current Price is " << totalexpense << "$" << endl;
	}
}

int main()
{
	int i = 1;
	float sec;
	int ond;
	int one;
	int date;
	cout << setprecision(2) << fixed << showpoint;
	departarrive(dtime, atime);
	airfare(x, c);
	carfare(t, k, charge);
	parkingfees(pfees, par);
	taxifees(ride, paid);
	confminar(d, confer);
	meals(y, u, b, o);
	cout << "How many days were spent on the trip?" << endl;
	cin >> date;
		cout << "You were gone for " << date << " day(s)" << endl;
	while (date < 1)
	{
		cout << "Invalid, enter a real number" << endl << endl;
		cout << "How many days were spend on the trip?" << endl;
		cin >> date;
	}
	while (i < date ) {
		cout << "How much was spent in the hotel on night " << i++  << "? 90$ is the limit before expenses" << endl;
		cin >> ond;
		while (ond < 0)
		{
			cout << "Invalid, enter a real number" << endl << endl;
			cout << "How much was spent in the hotel on night " << i  << "? 90$ is the limit before expenses" << endl;
			cin >> ond;
		}
		if (ond < 90) {
		totalexpense = totalexpense + ond;

		cout << "Current total is " << totalexpense << "$" << endl;

	}
	if (ond > 90) {
		reimburse = reimburse + ond - 90;
		totalexpense = totalexpense + ond;
		cout << "You'll have to reimburse an extra " << reimburse << "$" << endl;
		cout << "Current total is " << totalexpense << "$" << endl;
	}
		cout << "How much was parking on day: " << i << endl;
		cin >> sec;
		while (sec < 0)
		{
			cout << "Invalid, enter a real number" << endl << endl;
			cout << "How much was parking on day: " << i << endl;
		}
		totalexpense = totalexpense + sec;
		if (sec > 6) {
			reimburse = reimburse + sec - 6;
			cout << "You'll have to reimburse an extra " << reimburse << "$" << endl;
			cout << "Current total is " << totalexpense << "$" << endl << endl;
		}
		meals(y, u, b, o);

	}

	totalexpense = totalexpense + 0;
	aexpsense = totalexpense - reimburse;
	tasaved = tese + teth + w + q + re;
	cout << "Total expense is " << totalexpense  << endl;
	cout << "Total Reinburse: " << reimburse << "$" << endl;
	cout << "Allowable expenses are: " << aexpsense << endl;
	cout << "Amount saved is: " << tasaved << endl;
	cout << "Done with the trip!" << endl;
	return 0;
}

