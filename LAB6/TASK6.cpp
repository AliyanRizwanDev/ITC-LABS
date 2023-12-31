#include<iostream>
using namespace std;
int main(){
	int base, exponent, result = 1 ;
	cout << "Please Enter the Base: ";
	cin >> base;
	cout << "Please Enter the Exponent: ";
	cin >> exponent;
	for (int i = 1; i <= exponent; i++){
		result = result*base;
	}
	cout << "The result of " << base << " ^ " << exponent << " = " << result << endl;
	system("pause");
	return 0;
}