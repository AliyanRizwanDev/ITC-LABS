#include<iostream>
using namespace std;

int main(){
	int num = { 31 };
	while (num >= 5){
		if (num % 2 == 1){
			cout << num << " ";
		}
		num--;
	}
	system("pause");
	return 0;

}