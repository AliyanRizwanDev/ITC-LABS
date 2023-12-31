#include<iostream>
using namespace std;

int main(){

	int a = 0, SUM = 0, IN;
	float AVG;
	while (a < 10){
		cout << "Enter the number : ";
		cin >> IN;
		SUM = SUM + IN;
		a++;
	}
	AVG = SUM / a;
	cout << "The average of entered numbers is : " << AVG << endl;
	system("pause");
	return 0;
}