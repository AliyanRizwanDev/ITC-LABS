#include<iostream>
using namespace std;

int main(){
	int num = { 0 }, expo = { 0 }, result = { 1 }, a;

	cout << "Input Number (Base) = ";
	cin >> num;
	cout << "Input Number (Exponent) = ";
	cin >> expo;
	a = 0;
	do{
		result = result*num;
		a++;
	} while(a < expo);
	cout << num << "^" << expo << " = " << result << endl;
	system("pause");
	return 0;

}