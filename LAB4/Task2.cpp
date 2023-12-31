#include<iostream>
using namespace std;
int main(){
	int Number, Sum = { 0 }, i = { 1 };
	cout << "Enter a positive Number : ";
	cin >> Number;
	while (i < Number) {
		if ( Number % i == 0){
			Sum = Sum + i;
		}
		i++;
	}
	if (Sum == Number){
		cout << Number << " belongs to the lucky number family. "<<endl;
	}
	else{
		cout << Number << " does not belong to the lucky number family. "<<endl;
	}
	system("pause");
	return 0;
}