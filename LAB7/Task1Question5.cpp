#include<iostream>
using namespace std;
int main(){
	const int size = 10;
	int Array[size];
	cout << " Please enter The values in the array: ";
	for (int i = 0; i < size; i++){
		do{
			cin >> Array[i];
			if (Array[i] != 0)
				cout << "Wrong Value. Enter zero.";
		} while (Array[i] != 0);
	}
	cout << "The values in the array: ";
	for (int j = 0; j < size; j++){
		cout << Array[j] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}