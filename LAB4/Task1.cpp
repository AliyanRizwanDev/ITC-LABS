#include<iostream>
using namespace std;
int main(){
	int n = { 120 };
	cout << "Multiple of 90 : ";
	while (n <= 1250){
		if (n % 90 == 0){
			cout << n << " ";
		}
		n++;
	}

	system("pause");
	return 0;
}