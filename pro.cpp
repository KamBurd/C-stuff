
//Kameron Burden
#include <iostream>
#include <cctype>
#include <cstring>
#include "patientaccount.h" //Patient account header file
#include "surgery.h"        //Surgery header file 
#include "pharmacy.h"       //P header file
using namespace std;
class pro {
public:
	
};

int main()
{
	
	
	float medicine;
	float surger;
	surgery surg;
	pharmacy pharm;
	patientAccount b;
	int choice;
	cout << "Welcome to the hospital! What is your first name?" << endl << endl;
	cin >> b.fname;
	cout << "Last Name?" << endl;
	cin >> b.lname;
	cout << endl << "Welcome, " << b.fname << " " << b.lname << "!" << endl << endl;
	cout << "What type of surgery would you like? Select the surgery with the number assigned. Enter 0 to not be charged for surgery. " << endl << "Example: 7. Thoracic surgery: $200 (Select 7) " << endl << endl << "1. Appendectomy: $8,471\n" << "2. Gastric Bypass: $11,900\n" << "3. Cataract Surgery: $4,550\n" << "4. Arthroscopy: $30,000\n" << "5. Laparoscopic adrenalectomy: $6,723" << endl;
		
	cin >> b.surg;
	
	cout << "What type of medication do you want? Select the medication with the number assigned. Enter 0 to not be charged for mediction " << endl << "Example: 5. Advil medicine: $200 (select 5) " << endl << endl << "1. Antibiotic: $50\n" << "2. Acetamenophen: $3\n" << "3. Motrin: $10\n" << "4. Anti-inflamitory: $13\n" << "5. Rifamin: $115" << endl;
	cin >> b.med;
	
	cout << "How many days did you spend in the hospital? The payment for one day is $4,500. " << endl;
	cin >> b.days;
	
	
	cout << "The total cost for the chosen surgery, medication, and amount of days is $" << b.Cost() << " dollars " << endl;
	cout << "Thanks for visiting, " << b.fname << " " << b.lname << "!" << endl;
	return 0;

}

