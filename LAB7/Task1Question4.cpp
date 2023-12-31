#include<iostream>
using namespace std;
int main(){
	const int size = 10;
	int Array[size];
	cout << "Please Enter The values in the array: ";
	for (int i = 0; i < size; i++){
		cin >> Array[i];
	}
	cout << "The values you entered are: ";
	for (int j = 0; j < size; j++){
		cout << Array[j] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}