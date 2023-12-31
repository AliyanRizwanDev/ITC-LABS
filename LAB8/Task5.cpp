#include<iostream>
using namespace std;
int main(){
	const int Size = 30;
	int Count = 0;
	char Array[Size] = { 0 };
	cout << "Enter a character string." << endl;
	cin >> Array;
	for (int i = 0; i < Size; i++){
		if (Array[i] != 0){
			Count++;
		}
	}
	cout << Count;
	system("pause");
	return 0;
}