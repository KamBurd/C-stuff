// Kameron Burden

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
double inputValidate(double); // 6.30 = 6:30am, 21 = 9pm
double inputValidate(double, int); // $6.00
char inputValidate(char); // 'Y' or 'n'
void getTotalDaysOnTrip(int);
void getDepartureAndArrivalTimes(double, double&);

void getTotalDaysOnTrip(int total_days_on_trip)
{
    cout << "How many days spent on the trip?";
    total_days_on_trip = inputValidate(total_days_on_trip, 0);
}


void getDepartureAndArrivalTimes(double departure_time, double arrival_time)
{
    cout << "What is the time of departure" << endl
        << "on the first day of the trip?" << endl << endl
        << "(Use 24 hour clock to enter departure and arrial times." << endl
        << "Also, instead of using a colon, use a decimal point." << endl
        << "For example, 6:30 am = 6.30 and 9:30 pm = 21.30):";
    departure_time = inputValidate(departure_time);

    cout << "What is the time of arrival back" << endl
        << "home on the last day of trip?";
    arrival_time = input(arrival_time);

    const double ALLOWABLE_EXPENSES = 90.00;
    double hotel_fee;

    cout << "Now, enter hotel expenses." << endl
        << "(The company allows up to $ 90 per night for lodging.):" << endl;

    for (int i = 0; i < (total_days_on_trip - 1); i++) // 5 = 4 nights
    {
        total_allowable_expenses + = ALLOWABLE_EXPENSES;

        cout << "How much for night #" << (i + 1) << ":";
        hotel_fee = inputValidate(hotel_fee, 0);

        total_expenses + = hotel_fee;

        if (hotel_fee > ALLOWABLE_EXPENSES) // 100> 90 == 10
            total_reimbursement + = (hotel_fee - ALLOWABLE_EXPENSES);

        else if (hotel_fee <= ALLOWABLE_EXPENSES) // 80 <90 = 80
            total_amount_saved + = hotel_fee;

    }
}
void totalParkingFees(int choose)
{

    //price = tprice choose = choice
    if (choose > 6) {
        cout << "This payment is greater then 6$, the employee paid for it" << endl;
        choose = 0;
    }
    if (choose < 0) {
        cout << "Invalid number" << endl;
        cout << "How much was spent on parking?" << endl;
    }

}
void taxiFees(int car, int charge) {
    //car = taxi charge = tprice
    if (charge >= 10) {
        cout << "This price will be paid for by the employee" << endl;
        charge = 0;
    }
    else if (charge < 0) {
        cout << "Invald" << endl;
        cout << "How much was spent on the Taxi?" << endl;
    }

}
void confminar() {
    cout << "Did you participate in a Conference or Seminar?" << endl;
}

int main()
{
    char taxi;
    int tprice;
    int total_expenses = 0;
    int choice;
    char confer;
    int cprice;
    int dprice
    {
    string x;
    string y;
    int miles;
    int Cost;
    // Expenses of Airfare
cout << "How did you travel? Plane or Car?" << endl;
    cin >> x;

    if (x == 'Plane',x == 'plane') {
        cout << "How much did the ticket cost?" << endl;
        cin >> Cost;
        cout << "So you've spent " << Cost << " dollars on a plane ticket." << endl;
    }
    if (x == "Car", x == "car") {
        const double CENTS_PER_MILE = .27;

        cout << "How many miles did you drive in said car?" << endl;
        cin >> miles;
        cout << "So you've traveled " << miles << " by car. No money spent on airfare. " << endl;
        cout << "But the total amount for driving that far " << miles * .27 << " dollars." << endl;

    }
    //Asks for parking fee price
    cout << "How much was spent on parking?" << endl;
    cin >> choice;
    totalParkingFees(choice);
    if (choice <= 6 && choice > 0) {
        total_expenses = total_expenses + choice;
    }
    cout << "Current total is " << total_expenses << endl;
    //Asks whether a taxi was used and the price of the Taxi if the answer is yes
    cout << "Was a Taxi used on the trip?" << endl;
    cin >> taxi;
    if (taxi == 'Y' || taxi == 'y') {
        cout << "How much was spent on the Taxi?" << endl;
        cin >> tprice;
        if (tprice < 10 && tprice > 0) {
            total_expenses = total_expenses + tprice;
        }
        if (taxi == 'N' || taxi == 'n') {
            tprice = 0;
        }
        taxiFees(taxi, tprice);

        cout << "Current total is " << total_expenses << endl;
        confminar();
        cin >> confer;
        if (confer == 'Y' || confer == 'y') {
            cout << "How much was spent?" << endl;
            cin >> cprice;
            total_expenses = total_expenses + cprice;
        }
        else if (confer == 'N' || confer == 'n') {
            cout << "OK" << endl;
        }
        cout << "The total is " << total_expenses << endl;
        return 0;
    }
}

