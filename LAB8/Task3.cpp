#include<iostream>
using namespace std;
int main(){
	const int Size = 10;
	char Array[Size];
	cout << "Enter char values for array:";
	for (int i = 0; i < Size; i++){
		cin >> Array[i];
	}
	cout << endl << "You Array turns out to be:";
	for (int i = 0; i < Size; i++)
	{
		cout << Array[i] << " ";
	}
	system("pause");
	return 0;
}