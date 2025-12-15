// STU code;

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
double k;
double c;
double hotelfee;
float pfees;
int n;
int date;
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
	void carfare(char c, double l, double price) {
		cout << "Did you use a private vehicle in the trip" << endl << endl <<
			"Enter (y or n)" << endl;
		cin >> c;
		c = c;
			if (c == 'y') {
				const double CENTS_PER_MILE = 0.27;
				cout << "How many miles did you drive in said car?" << endl;
				cin >> l;
				l = l;
				while (l < 0)
				{
					cout << "Invalid, enter a real number" << endl << endl;
					cout << "How many miles did you drive in said car ? " << endl;
					cin >> l;
				}
				price = l * CENTS_PER_MILE;
				cout << "So you've traveled " << l << " by car. No money spent on airfare. " << endl;
				cout << setprecision(2) << fixed << showpoint;
				cout << "But the total amount for driving that far is " << price << " dollar(s)." << endl;
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
	}
	if (park > 6)
	{
		reimburse = reimburse + park - 6;
		cout << "You'll have to reimburse an extra " << reimburse << "$" << endl;
		cout << "Current total is " << totalexpense << "$" << endl;
	}
	else if (park <= 6){
		totalexpense = park + totalexpense;
		tese = park - 6;
		cout << "Ok, your current total is " << totalexpense << "$" << endl;
	}
	else if (park = 0) {
		tese = 0;
	}
}
//Expsens of Taxi
void taxifees(char taxi, float fare) {
	cout << "Was a taxi used?" << endl <<
		"Enter (y/n)" << endl;
	cin >> taxi;
	if (taxi == 'y') {
		if (fare <= 10) {
			cout << "How much was spent on the taxi? 10$ is the limit before expenses " << endl;
			cin >> fare;
			while (fare < 0.00)
			{
				cout << "Invalid, enter a real number" << endl << endl;
				cout << "How much was spent on the taxi?" << endl;
				cin >> fare;
			}
			totalexpense = totalexpense + fare;
			teth = fare - 10;
				cout << "Current total is " << totalexpense << "$" << endl;
		}
		if (fare = 0) {
			teth = 0;
		}
	}
	else if (taxi == 'n') {
		cout << "Ok" << endl;
		fare = 0;
		cout << "Your current Price is " << totalexpense << "$" << endl;
	}
	if (fare > 10) {
		reimburse = reimburse + fare - 10;
		cout << "Total Reimburse : " << reimburse << "$" << endl;
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
void meals(char m, int b, int z, int d) {
	cout << "Did you have any meals on the trip ?" << endl;
	cin >> m;
		if (m == 'y') {
			if (dtime < 7.00) {
				cout << "How much was breakfast? 9$ is the limit before expenses" << endl;
				cin >> b;
				while (b < 0)
				{
					cout << "Invalid, enter a real number" << endl << endl;
					cout << "How much was breakfast? 9$ is the limit before expenses" << endl;
					cin >> b;
				}
				totalexpense = totalexpense + b;
				if (b <= 9) {
					w = b - 9;
				}
			}
			if (b > 9) {
				reimburse = reimburse + b - 9;
			}
			if (dtime < 12.00)
			{
				cout << "How much was lunch? 12$ is the limit before expenses" << endl;
				cin >> z;
				while (z < 0)
				{
					cout << "Invalid, enter a real number" << endl << endl;
					cout << "How much was lunch? 12$ is the limit before expenses"  << endl;
					cin >> z;
				}
				totalexpense = totalexpense + z;
				if (z <= 12) {
					q = z - 12;
				}
			}
			if (z > 12) {
				reimburse = reimburse + z - 12;
			}
			if (dtime < 18.00)
			{
				cout << "How much was dinner? 16$ is the limit before expenses" << endl;
				cin >> d;
				while (d < 0)
				{
					cout << "Invalid, enter a real number" << endl << endl;
					cout << "How much was dinner? 16$ is the limit before expenses" << endl;
					cin >> d;
				}
				totalexpense = totalexpense + d;
				if (d <= 16) {
					re = d - 16;
				}
			}
			if (d > 16) {
				reimburse = reimburse + d - 16;
			}
			if (atime > 8.00) {
				cout << "How much was breakfast? 9$ is the limit before expenses" << endl;
				cin >> b;
				while (b < 0)
				{
					cout << "Invalid, enter a real number" << endl << endl;
					cout << "How much was breakfast? 9$ is the limit before expenses" << endl;
					cin >> b;
				}
				totalexpense = totalexpense + b;
				if (b <= 9) {
					sw = b - 9;
				}
			}
			if (b > 9) {
				reimburse = reimburse + b - 9;
			}
			if (atime > 13.00) {
				cout << "How much was lunch? 12$ is the limit before expenses" << endl;
				cin >> z;
				while (z < 0)
				{
					cout << "Invalid, enter a real number" << endl << endl;
					cout << "How much was lunch? 12$ is the limit before expenses" << endl;
						cin >> z;
				}
				totalexpense = totalexpense + z;
				if (z <= 12) {
					ze = z - 12;
				}
			}
			if (z > 12) {
				reimburse = reimburse + z - 12;
			}
			if (atime > 19.00) {
				cout << "How much was dinner? 16$ is the limit before expenses" << endl;
				cin >> d;
				while (d < 0)
				{
					cout << "Invalid, enter a real number" << endl << endl;
					cout << "How much was dinner? 16$ is the limit before expenses" << endl;
					cin >> d;
				}
				totalexpense = totalexpense + d;
				if (d <= 16) {
					qw = d - 16;
				}
			}
			if (d > 16) {
				reimburse = reimburse + d - 16;
			}
		}
		if (m == 'n') {
			cout << "Ok" << endl;
		}
}
void meals2(char m, int b, int z, int d) {
	cout << "Did you have any meals?" << endl;
	cin >> m;
	if (m == 'y') {
		if (dtime < 7) {
			cout << "How much was breakfast?" << endl;
			cin >> b;
			totalexpense = b + totalexpense;
		}
		if (b > 9) {
			reimburse = reimburse + b - 9;
		}
		if (dtime < 12)
		{
			cout << "How much was lunch?" << endl;
			cin >> z;
			totalexpense = totalexpense + z;
		}
		if (z > 12) {
			reimburse = reimburse + z - 12;
		}
		if (dtime < 18)
		{
			cout << "How much was dinner?" << endl;
			cin >> d;
			totalexpense = totalexpense + d;

		}
		if (d > 16) {
			reimburse = reimburse + d - 16;
		}
		if (atime > 8) {
			cout << "How much was breakfast?" << endl;
			cin >> b;
			totalexpense = totalexpense + b;
		}
		if (b > 9) {
			reimburse = reimburse + b - 9;
		}
		if (atime > 13) {
			cout << "How much was lunch?" << endl;
			cin >> z;
			totalexpense = totalexpense + z;
		}
		if (z > 12) {
			reimburse = reimburse + z - 12;
		}
		if (atime > 19) {
			cout << "How much was dinner?" << endl;
			cin >> d;
			totalexpense = totalexpense + d;
		}
		if (d > 16) {
			reimburse = reimburse + d - 16;
		}
	}
	if (m == 'n') {
		cout << "Ok" << endl;
	}
}
int main()
{
	int i = 0;
	float sec;
	int ond;
	int one;
	cout << setprecision(2) << fixed << showpoint;
	cout << "How many days were spend on the trip?" << endl;
	cin >> date;
	date = date;
	while (date < 1)
	{
		cout << "Invalid, enter a real number" << endl << endl;
		cout << "How many days were spend on the trip?" << endl;
		cin >> date;
	}
	if (date = 1) {
		cout << "OK" << endl;
	}
	departarrive(dtime, atime);
	airfare(x, c);
	carfare(t, k, charge);
	parkingfees(pfees, par);
	taxifees(ride, paid);
	confminar(d, confer);
	meals(meal, bprice, lprice, dprice);
	cout << "You were gone for " << 4 << " days" << endl;
	while (i <= 3) {
		cout << "How much was spent in the hotel on night " << ++i << "?" << endl;
		cin >> ond;
		while (ond < 0)
		{
			cout << "Invalid, enter a real number" << endl << endl;
			cout << "How much was spent in the hotel on night " << i << "?" << endl;
			cin >> ond;
		}
		totalexpense = totalexpense + ond;
		cout << "How much was parking on day: " << i++ + 1 << endl;
		cin >> sec;
		totalexpense = totalexpense + sec;
		meals2(y, u, b, o);
		if (sec > 6) {
			reimburse = reimburse + sec - 6;
			cout << "You'll have to reimburse an extra " << reimburse << "$" << endl;
			cout << "Current total is " << totalexpense << "$" << endl << endl;
		}

	}
	if (ond < 90) {
		totalexpense = totalexpense + ond;
		one = ond - 90;
		cout << "Current total is " << totalexpense << "$" << endl;
	}
	if (ond > 90) {
		reimburse = reimburse + ond - 90;
		totalexpense = totalexpense + ond;
		cout << "You'll have to reimburse an extra " << reimburse << "$" << endl;
		cout << "Current total is " << totalexpense << "$" << endl;
	}
	totalexpense = totalexpense + ond;
	aexpsense = totalexpense - reimburse;
	tasaved = tese + teth + w + q + re + sw + ze + qw + one;
	tasaved = tasaved * -1;
	cout << "Total expense is " << totalexpense << endl;
	cout << "Total Reinburse: " << reimburse << "$" << endl;
	cout << "Allowable expenses are: " << aexpsense << endl;
	cout << "Amount saved is: " << tasaved << endl;
	return 0;
}

