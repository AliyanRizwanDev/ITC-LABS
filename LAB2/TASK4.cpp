#include<iostream>
using namespace std;

int main(){
	int a, i = { 0 }, Limit;
	do
	{
		cout << "Enter a number that is A MULTIPLE of 2 and 3 : ";
		cin >> a;
	} while (a % 2 != 0 || a % 3 != 0);
	Limit = a + 54;
	while (a <= Limit){
		cout << a << ",";
		a += 6;
	}
	system("pause");
	return 0;
}