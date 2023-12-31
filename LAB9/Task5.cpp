#include<iostream>
using namespace std;
int main(){
	//Variable Declaration
	int BuildProcessTime = 30, TotalWorkers = 0, MorningShift = 250,
		EveningShift = 250, TotalLabours = 150, TotalMasons = 50, TotalCarpenters = 20,
		TotalPainters = 10, TotalPlumbers = 5, TotalElectricians = 5,
		TotalSupervisors = 5, TotalGaurds = 5, LaborWage = 500, MasonWage = 700,
		CarpenterWage = 800, PainterWage = 1000, PlumberWage = 1200, ElectricianWage = 1500,
		GaurdsWage = 2000, SupervisorWage = 2500, LaborOvertime2hr = 150, MasonOvertime2hr = 250,
		ElectricianOvertime2hr = 350, PayofLabour = 0, PayofMasons = 0, PayofCarpenters = 0, PayofPainters=0,
		PayofPlumbers = 0, PayofElectricians = 0, PayofSupervisors = 0, PayofGaurds=0;
	float AveragePay;
	//Variable Initialization

	cout << " no. of people in morning shift:" <<MorningShift<< endl;
	cout << " no. of people in evening shift:" << EveningShift<<endl;
	TotalWorkers = MorningShift + EveningShift;
	cout << "Total no. of workers are :" << TotalWorkers << endl;
	cout << "the no. of Labours:" << TotalLabours << endl;
	cout << "the no. of Masons:" << TotalMasons << endl;
	cout << "the no. of Carpenters:" << TotalCarpenters << endl;
	cout << "the no. of Painters:" << TotalPainters << endl;
	cout << "the no. of Plumbers:" << TotalPlumbers << endl;
	cout << "the no. of Electricians:" << TotalElectricians << endl;
	cout << "the no. of Supervisors:" << TotalSupervisors << endl;
	cout << "the no. of Gaurds:" << TotalGaurds << endl;
	PayofLabour = TotalLabours*((LaborWage+LaborOvertime2hr)*BuildProcessTime);
	PayofMasons = TotalMasons*((MasonWage=MasonOvertime2hr)*BuildProcessTime);
	PayofCarpenters = TotalCarpenters*(CarpenterWage*BuildProcessTime);
	PayofPainters = TotalPainters*(PainterWage*BuildProcessTime);
	PayofPlumbers = TotalPlumbers*(PlumberWage*BuildProcessTime);
	PayofElectricians = TotalElectricians*((ElectricianWage=ElectricianOvertime2hr)*BuildProcessTime);
	PayofGaurds = TotalGaurds*(GaurdsWage*BuildProcessTime);
	PayofSupervisors = TotalSupervisors*(SupervisorWage*BuildProcessTime);
	AveragePay = (PayofLabour + PayofMasons + PayofCarpenters + PayofPainters + PayofPlumbers + PayofElectricians + PayofGaurds + PayofSupervisors) / 8;
	cout << "The Average of the total cost of workers is " << AveragePay<<endl;
	system("pause");
	return 0;
}