#include<iostream>
using namespace std;

int main(){
	int Hours_Worked;
	float Per_Hour_Wage, Salary;
	
	cout << "Enter The per hour wage : ";
	cin >> Per_Hour_Wage;
	do{
		cout << "Enter the Hours worked : ";
		cin >> Hours_Worked;
		if (Hours_Worked>24)
		{
			cout << "Wrong Input" << endl;
		}
	} while (Hours_Worked > 24);
	if (Hours_Worked <= 8){
		Salary = Hours_Worked*Per_Hour_Wage;
		cout << "Your salary for the day is : " << Salary;
	}
	else{
		Per_Hour_Wage = Per_Hour_Wage * 2; 
		Salary = Hours_Worked*Per_Hour_Wage;
		cout << "Your salary for the day is : " << Salary;
	}
	system("pause");
	return 0;
}