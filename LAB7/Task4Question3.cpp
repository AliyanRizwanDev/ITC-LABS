#include<iostream>
using namespace std;
int main(){
	const int Size = 10;
	int Array[Size], NoOfzeros = 0, NoOfOnes = 0;
	int a = 0, j=0;
	cout << "Enter the Values for Array : ";
	for (int z = 0; z < Size; z++){
		do{
			cin >> a;
			if (a != 0 && a != 1)
				cout << "Invalid Input." << endl;
		} while (a != 0 && a != 1);
		Array[z] = a;
		if (a  == 0){
			NoOfzeros++;
		}
		if (a == 1){
			NoOfOnes++;
		}
	}
	int Array2[Size];
	if (NoOfOnes > NoOfzeros)
		j = NoOfOnes;
	else
		j = NoOfzeros;

	for (int i = 0, z = 0; z < Size; z++){
		if (Array[z] % 2 == 0){
			Array2[i] = Array[z];
			i++;
		}
		if (Array[z] % 2 != 0){
			Array2[j] = Array[z];
			j++;
		}
	}
	cout << "The Elements in Array are : " << endl;
	for (int z = 0; z < Size; z++){
		cout << Array2[z] << " ";
	}
	cout << endl << "The Number of ones entered is " << NoOfOnes << " and zeroes is " << NoOfzeros << endl;
	system("pause");
	return 0;
}