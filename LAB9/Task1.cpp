#include <iostream>
using namespace std;
int main()
{ // Variable Declaration
	int Cost = 0, BuildPrice = 0, BuildTime = 0, NOofWorkers = 0, MorningShift = 0, EveningShift = 0, LaborWage = 0, MasonWage = 0, ElectricianWage = 0, SupervisorWage = 0, OvertimeLabour = 0, OvertimeMason = 0, OvertimeElectrician = 0, OvertimeSupervisor = 0, MoneyOn1Labour = 0, MoneyOn1Electrician = 0, MoneyOn1Supervisor = 0;
	// Variable Initialization
	cout << "Enter it's price and build time" << endl;
	cin >> BuildPrice >> BuildTime;
	cout << "Enter no. of people in morning shift and in evening shift" << endl;
	cin >> MorningShift >> EveningShift;
	NOofWorkers = MorningShift + EveningShift;
	cout << "Total no. of workers are :" << NOofWorkers << endl;
	cout << "Enter the Wages of Labours, Masons, Electricians, Supervisors,:" << endl;
	cin >> LaborWage >> MasonWage >> ElectricianWage >> SupervisorWage;
	cout << "Enter overtime pay for Labors, Masons and Electricians:" << endl;
	cin >> OvertimeLabour >> OvertimeMason >> OvertimeElectrician;
	// CALCULATIONS
	MoneyOn1Labour = (LaborWage * BuildTime) + (OvertimeLabour * BuildTime);
	cout << "Total money spent on 1 labor with overtime after building:" << MoneyOn1Labour << endl;
	MoneyOn1Electrician = (ElectricianWage * BuildTime) + (OvertimeElectrician * BuildTime);
	cout << "Total money spent on 1 electrician with overtime after building :" << MoneyOn1Electrician << endl;
	MoneyOn1Supervisor = (SupervisorWage * BuildTime) + (OvertimeSupervisor * BuildTime);
	cout << "Total money spent on 1 supervisor with overtime after building:" << MoneyOn1Supervisor << endl;
	Cost = MoneyOn1Electrician + MoneyOn1Labour + MoneyOn1Supervisor + BuildPrice;
	cout << "Total money spent on project:" << Cost << endl;
	system("pause");
	return 0;
}