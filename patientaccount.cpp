
#ifndef patientaccount_h
#define patientaccount_h



class PatientAccount
{
private:
		int days;
		float surg;
		float med;
		static float total;
	public:
		PatientAccount();
		~PatientAccount();
		float setSurg(float surgery);
		
		
		
		float setMed(float medicine);
		
			
		
		

		float printCost();
		
		


		


};
int main
{
	
	cout << "WHat type of sugery?" << endl;
   
	
}

float PatientAccount::setSurg(float k)
{
	surg = surgery;
	return surg;

}


float PatientAccount::setMed(float k)
{
	med = medicine;
	return med;

}


float PatientAccount::printCost()
{
	return (4500*days) + surg + med

}


