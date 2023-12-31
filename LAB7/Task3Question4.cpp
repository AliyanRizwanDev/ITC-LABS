#include<iostream>
using namespace std;
int main(){
	const int size = 12, sized = 6;
	int Array[size], Array2[sized];
	cout << "Please Enter The values in the array: ";
	for (int i = 0; i < size; i++)
	{
		cin >> Array[i];
	}
	int j = 0;
	for (int i = 0; j < sized; i+=2)
	{
		Array2[j] = Array[i + 1] - Array[i];
		j++;
	}
	for (int i = 0; i < sized; i++)
	{
		cout << "Pair " << i + 1 << " : " << Array2[i] << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}