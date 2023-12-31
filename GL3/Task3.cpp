#include<iostream>
using namespace std;

int main(){

	int a = 0, SUM = 0, IN=1, PROD=1;
	float AVG;
	while (IN!=0){
		cout << "Enter a number : ";
		cin >> IN;
		SUM = SUM + IN;
		if (IN != 0){
			PROD = PROD*IN;
			a++;
			cout << "Enter 0 if you want to quit the input process " << endl;
		}
	}
	AVG = SUM / a;
	cout << "The SUM of entered numbers is : " << SUM << endl;
	cout << "The average of entered numbers is : " << AVG << endl;
	cout << "The product of entered numbers is : " << PROD << endl;
	system("pause");
	return 0;
}