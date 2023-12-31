#include<iostream>
using namespace std;
int main(){
	const int size = 10;
	int Array[size] = { 0 };
	cout << "The values in the array: ";
	for (int i = 0; i < size; i++){
		cout << Array[i]<<" ";
	}
	cout << endl;
	system("pause");
	return 0;
}