#include<iostream>
using namespace std;
int main(){
	const int size = 12;
	int Array[size];
	cout << "Please Enter The values in the array: ";
	for (int i = 0; i < size; i++){
		cin >> Array[i];
	}
	for (int j = 0; j < size; j+=2){
		cout << "Difference between Element " << j + 1 << " and Element " << j + 2 << " is " << endl;
		cout << Array[j + 1] - Array[j] << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}