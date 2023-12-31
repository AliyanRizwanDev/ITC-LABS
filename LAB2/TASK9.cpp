#include<iostream>
using namespace std;

int main(){
	int a, f=1;
	cout << "Enter the Number : ";
	cin >> a;
	while (a > 1){
		f = f*a;
		a--;
	}
	cout << "Factorial is : " << f << endl;
	system("pause");
	return 0;
}