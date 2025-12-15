// Kameron Burden

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
double inputValidate(double);
double inputValidate(double, double);
double inputValidate(double); // 6.30 = 6:30am, 21 = 9pm
double inputValidate(double, int); // $6.00
char inputValidate(char); // 'Y' or 'n'
//ERROR FUNCTIONS
double inputValidate(double time) // 24 hr; 630am = 6.30; 930pm = 21.30;
{
    //00:00 - 23:59 != -1, != 25.00
    // != 23:61
    // 4.50
    while (!(cin >> time) ||
        ((time < 0 || time > 23.59) || (time - static_cast<int>(time)) > .59))



        return time;
}

double inputValidate(double number, int range)
{
    while (!(cin >> number) || number < range)



        return number;
}

char inputValidate(char letter)
{
    cin >> letter;

    while (!(letter == 'Y' || letter == 'y' || letter == 'N' || letter == 'n'))



        return letter;
}

//TOTAL DAYS ON THE TRIP
void getTotalDaysOnTrip(int total_days_on_trip)
{
    cout << "How many days were spent on the trip?" << endl;
    total_days_on_trip = inputValidate(total_days_on_trip, 0);
}
//DEPARTURE AND ARRIVAL TIMES
void getDepartureAndArrivalTimes(double departure_time, double arrival_time)
{
    cout << "What is the time of departure on the first day of the trip? " << endl << endl
        << "(Use 24 hour clock to enter departure and arrial times. Also, instead of using a colon, use a decimal point." << endl
        << "Example: 6:30am = 6.30 and 9:30pm = 21.30): ";
    departure_time = inputValidate(departure_time);

    cout << "What is the time of arrival back" << endl
        << "home on the last day of trip? ";
    arrival_time = inputValidate(arrival_time);
}
//HOTEL FEES FUNCTION
void getHotelFees(int total_days_on_trip,
    double& total_expense,
    double& total_allowable_expenses,
    double& total_reimbursement,
    double& total_amount_saved)
{
    const double ALLOWABLE_EXPENSES = 90.00;
    double hotel_fee;

    cout << "\nNow, enter hotel expenses. " << endl
        << "(The company allows up to $90 per night for lodging.): " << endl;

    for (int i = 0; i < (total_days_on_trip - 1); i++) // 5 = 4 nights
    {
        total_allowable_expenses += ALLOWABLE_EXPENSES;

        cout << "How much for night #" << (i + 1) << ": ";
        hotel_fee = inputValidate(hotel_fee, 0);

        total_expense += hotel_fee;

        if (hotel_fee > ALLOWABLE_EXPENSES) // 100 > 90 == 10
            total_reimbursement += (hotel_fee - ALLOWABLE_EXPENSES);

        else if (hotel_fee <= ALLOWABLE_EXPENSES) // 80 < 90 = 80
            total_amount_saved += hotel_fee;

    }

}

//MEAL FEES FUNCTION
void getMealFees(double& total_expenses,
    double departure_time,
    double& total_allowable_expenses,
    double& total_reimbursement,
    double& total_amount_saved,
    double arrival_time)
{
    const double ALLOWABLE_BREAKFAST = 9.00,
        ALLOWABLE_LUNCH = 12.00,
        ALLOWABLE_DINNER = 16.00;

    double meal_fee;

    cout << "Did you eat a meal upon depature flight? (Y/N): ";
    char user_choice = inputValidate(user_choice);

    if (user_choice == 'Y' || user_choice == 'y')
    {
        cout << "How much was your meal? ";
        meal_fee = inputValidate(meal_fee, 0);

        total_expenses += meal_fee;

        if (departure_time < 7)
        {
            total_allowable_expenses += ALLOWABLE_BREAKFAST;

            if (meal_fee > ALLOWABLE_BREAKFAST) // 11 > 9 = 2.00
                total_reimbursement += (meal_fee - ALLOWABLE_BREAKFAST);

            else if (meal_fee <= ALLOWABLE_BREAKFAST)
                total_amount_saved += meal_fee; // 8 < 9 

        }

        else if (departure_time >= 7 && departure_time < 12)
        {
            total_allowable_expenses += ALLOWABLE_LUNCH;

            if (meal_fee > ALLOWABLE_LUNCH) // 13 > 12 = $1.00
                total_reimbursement += (meal_fee - ALLOWABLE_LUNCH);

            else if (meal_fee <= ALLOWABLE_LUNCH) // 3.00 > 12 =
                total_amount_saved += meal_fee;

        }

        else if (departure_time >= 12 && departure_time < 18)
        {
            total_allowable_expenses += ALLOWABLE_DINNER;

            if (meal_fee > ALLOWABLE_DINNER)
                total_reimbursement += (meal_fee - ALLOWABLE_DINNER);

            else if (meal_fee <= ALLOWABLE_DINNER)
                total_amount_saved += meal_fee;
        }

        else if (departure_time >= 18)
            total_reimbursement += meal_fee;

    }

    cout << "\nDid you eat a meal when upon arrival flight? ";
    user_choice = inputValidate(user_choice);

    if (user_choice == 'Y' || user_choice == 'y')
    {
        cout << "How much was your meal? ";
        meal_fee = inputValidate(meal_fee, 0);

        total_expenses += meal_fee;

        if (arrival_time <= 8)
            total_reimbursement += meal_fee;

        else if (arrival_time > 8 && arrival_time <= 13)
        {
            total_allowable_expenses += ALLOWABLE_BREAKFAST;

            if (meal_fee > ALLOWABLE_BREAKFAST)
                total_reimbursement += (meal_fee - ALLOWABLE_BREAKFAST);

            else if (meal_fee <= ALLOWABLE_BREAKFAST)
                total_amount_saved += meal_fee;
        }

        else if (arrival_time > 13 && arrival_time <= 19)
        {
            total_allowable_expenses += ALLOWABLE_LUNCH;

            if (meal_fee > ALLOWABLE_LUNCH) // 13.00 > 12.00 == 1.00
                total_reimbursement += (meal_fee - ALLOWABLE_LUNCH);

            else if (meal_fee <= ALLOWABLE_LUNCH)
                total_amount_saved += meal_fee; // 12.00 < n;
        }

        else if (arrival_time > 19)
        {
            total_allowable_expenses += ALLOWABLE_DINNER;

            if (meal_fee > ALLOWABLE_DINNER)
                total_reimbursement += (meal_fee - ALLOWABLE_DINNER);

            else if (meal_fee <= ALLOWABLE_DINNER)
                total_amount_saved += meal_fee;
        }
    }

}
//TAXI FUNCTION
void taxiFees(int car, int charge) {
    //car = taxi charge = tprice
    if (charge >= 10) {
        cout << "This price will be paid for by the employee" << endl;
        charge = 0;
    }
}

void totalParkingFees(int choose)//price = tprice choose = choice
{
    if (choose > 6) {
        cout << "This payment is greater then 6$, the employee paid for it" << endl;
        choose = 0;
    }
    if (choose < 0) {
        cout << "Invalid number" << endl;
        cout << "How much was spent on parking?" << endl;
    }

}
//CONFERENCE AND SEMINAR FUNCTION
void confminar() {
    cout << "Did you participate in a Conference or Seminar?" << endl;
}
int main()
{
    string x;
    int miles;
    int milescost;
    int Cost;
    int triptotaldays;
    char taxi;
    int tprice;
    double total_expenses = 0;
    int choice;
    char confer;
    int cprice;
    double dtime;
    double atime;
    double taexpense = 0;
    double reimburse = 0;
    double tasaved = 0;
    getTotalDaysOnTrip(triptotaldays);
    getDepartureAndArrivalTimes(dtime, atime);
    // Expenses of Airfare
    cout << "How did you travel? Plane or Car? (p for Plane, c for Car" << endl;
    cin >> x;
    if (x == "P" || x == "p") {
        cout << "How much did the ticket cost?" << endl;
        cin >> Cost;
        cout << "So you've spent " << Cost << " dollars on a plane ticket." << endl;
        total_expenses = total_expenses + Cost;
    }
    if (x == "C" || x == "c") {
        const double CENTS_PER_MILE = .27;
        cout << "How many miles did you drive in said car?" << endl;
        cin >> miles;
        cout << "So you've traveled " << miles << " by car. No money spent on airfare. " << endl;
        milescost = miles * CENTS_PER_MILE;
        cout << "But the total amount for driving that far " << milescost << " dollars." << endl;
        total_expenses = total_expenses + milescost;
        cout << "Current total is " << total_expenses << endl;

    }
    cout << "How much was spent on parking?" << endl;
    cin >> choice;
    totalParkingFees(choice);
    if (choice <= 6 && choice > 0) {
        total_expenses = total_expenses + choice;
    }
    cout << "Current total is " << total_expenses << endl;
    cout << "Was a Taxi used on the trip?" << endl;
    cin >> taxi;
    if (taxi == 'Y' || taxi == 'y') {
        cout << "How much was spent on the Taxi?" << endl;
        cin >> tprice;
        if (taxi == 'N' || taxi == 'n') {
            cout << "OK" << endl;
            tprice = 0;
        }

        if (tprice < 10 && tprice > 0) {
            total_expenses = total_expenses + tprice;
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
            cprice = 0;
        }
        cout << "Current total is " << total_expenses << endl;
        getMealFees(total_expenses, dtime, taexpense, reimburse, tasaved, atime);





        //I CANT DO THIS ONE
        getHotelFees(triptotaldays, total_expenses, taexpense, reimburse, tasaved);

        cout << "The total is" << total_expenses << endl;
        cout << "The allowable expenses are" << taexpense << endl;
        cout << "The reimburse is" << reimburse << endl;
        cout << "The total saved is" << tasaved << endl;

    }

    return 0;
}
