#include<iostream>
using namespace std;

int main(){

	int a=1, SUM=0;
	while (a < 1001){
		SUM = SUM + a;
		a++;
	}
	cout << "The sum of first 1000 natural numbers is : " << SUM << endl;
	system("pause");
	return 0;
}