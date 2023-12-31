#include<iostream>
using namespace std;

int main(){
	float Number;
	int n;
	cout << "Enter your desired Number : ";
	cin >> Number;
	n = Number;
	if (Number > n){
		cout << "The number is float." << endl;
	}
	else{
		cout << "The number is an integer" << endl;
	}
	system("pause");
	return 0;
}