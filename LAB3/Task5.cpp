#include<iostream>
using namespace std;

int main(){
	int num = { 0 }, sum = {0};
	while (num >= 0){
		cout << "Enter a number ";
		cin >> num;
		if (num >= 0){
			sum = sum + num;
		}
	}
	cout << "The sum is : " << sum<< endl;
	system("pause");
	return 0;

}