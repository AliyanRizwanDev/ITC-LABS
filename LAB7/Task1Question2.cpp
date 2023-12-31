#include<iostream>
using namespace std;
int main(){
	const int size = 10;
	int Array[size] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	cout << "The values in the array: ";
	for (int j = 0; j < size; j++){
		cout << Array[j] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}