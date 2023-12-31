#include<iostream>
using namespace std;

int main(){
	int a, i = { 0 }, Limit;
	do{
		cout << "Enter an EVEN number : ";
		cin >> a;
	} while (a % 2 != 0);
	Limit = a + 20;
	while (a < Limit){
		cout << a << ",";
		a += 2;
	}
	system("pause");
	return 0;
}