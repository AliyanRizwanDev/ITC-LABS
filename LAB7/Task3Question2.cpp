#include<iostream>
using namespace std;
int main(){
	const int size = 12;
	int Array[size];
	Array[10] = 0, Array[11] = 0;
	cout << "Please Enter 10 values in the array: ";
	for (int i = 0; i < size-2; i++){
		cin >> Array[i];
		if (i % 2 != 0){
			Array[10] = Array[10] + Array[i];
		}
		else if (i % 2 == 0){
			Array[11] = Array[11] + Array[i];
		}
	}
	cout << "The elements in array are: ";
	for (int j = 0; j < size; j++){
		cout << Array[j] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}