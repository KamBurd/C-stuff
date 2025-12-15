//Expense of Parking
void parkingfees(float park, char p) {
	int i = 0;
	cout << "Was there any parking?" << endl;
	cin >> p;


	cout << "How much was spent on parking? " << endl;
	cin >> park;
	park = park;
	totalexpense = park + totalexpense;
}
if (p == 'n') {
	cout << "Ok" << endl;
	cout << "Current total is " << totalexpense << "$" << endl;
}
while (park < 0)
{
	cout << "Invalid, enter a real number" << endl << endl;
	cout << "How many days were spend on parking?" << endl;
	cin >> park;
}
if (park > 6)
{
	reimburse = reimburse + park - 6;
	cout << "You'll have to reimburse an extra " << reimburse << "$" << endl;
	cout << "Current total is " << totalexpense << "$" << endl;
}
else if (park < 6) {
	totalexpense = park + totalexpense;
	cout << "Ok, your current total is " << totalexpense << "$" << endl;
}
}