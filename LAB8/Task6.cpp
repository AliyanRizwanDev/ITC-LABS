#include<iostream>
using namespace std;
int main(){
	const int Size = 30;
	char Array[Size] = { 0 };
	cout << "Enter a character string." << endl;
	cin >> Array;
	for (int i = Size - 1; i >= 0; i--){
		if (Array[i] != 0){
			cout << Array[i];
		}

	}

	system("pause");
	return 0;
}