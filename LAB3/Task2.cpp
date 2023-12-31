#include<iostream>
using namespace std;

int main(){
	int num = { 1 };
	while (num <= 40){
		if (num % 2 == 0){
			cout << num << " ";
		}
		num++;
	}
	system("pause");
	return 0;

}