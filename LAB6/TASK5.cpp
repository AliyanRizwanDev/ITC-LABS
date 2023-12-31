#include<iostream>
using namespace std;
int main(){
	int fact = { 1 }, Number = { 0 }, Copy;
	cout << "Enter the number of which ou want a factorial  : ";
	cin >> Number;
	Copy = Number;
	for (; Copy > 0; Copy--){
		fact = fact*Copy;
	}
	cout << "The Factorial of the number " << Number << " is : \n" << Number << "! = " << fact<<endl;
	system("pause");
	return 0;
}