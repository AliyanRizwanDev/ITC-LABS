#include<iostream>
using namespace std;

int main(){
	int hours = { 0 }, choice = {0};
	float pay = {0}, rate = { 800 };

	for (; choice < 3; choice++){
		if (choice == 0){
			hours = 40;
		}
		else if (choice == 1){
			hours = 20;
		}
		else if (choice == 2){
			hours = 45;
		}
		pay = rate*hours;
		if (hours > 40){
			pay = pay + (hours - 40) * 0.5 *rate;
		}
		cout << "Your pay for " << hours << " hours is : " << pay << endl;
	}
	system("pause");
	return 0;
}