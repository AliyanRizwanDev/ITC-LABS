#include<iostream>
using namespace std;

int main(){
	int num = { 0 }, sum = { 0 }, mod = { 0 };
	cout << "Enter a number : ";
	cin >> num;
	cout << "Sum ";
	while (num != 0){
		mod = num % 10;
		num = num / 10;
		sum = sum + mod;
		cout << mod <<" ";
	}
	cout <<": "<< sum << endl;
	if (sum > 15){
		cout << sum << " is the lucky number" << endl;
	}
	else
		cout << sum << " is the unlucky number" << endl;
	system("pause");
	return 0;

}