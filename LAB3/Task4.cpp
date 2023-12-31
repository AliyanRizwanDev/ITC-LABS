#include<iostream>
using namespace std;

int main(){
	int i = { 1 }, num = { 0 }, sum = {0};
	cout << "Enter a positive integer: ";
	cin >> num;
	while (i <= num){
		sum = sum + i;
		i++;
	}
	cout << "The sum of first " << num << " is : " << sum << endl;
	system("pause");
	return 0;

}