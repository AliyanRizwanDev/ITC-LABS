#include<iostream>
using namespace std;
int main(){
	const int Size=10;
	int Array[Size], NoOfEven=0, NoOfOdd=0;
	int a = 0;
	cout << "Enter the Values for Array : ";
	for (int z = 0; z < Size; z++){
		cin >> a;
		Array[z] = a;
		if (a % 2 == 0){
			NoOfEven++;
		}
		if (a % 2 != 0){
			NoOfOdd++;
		}
	}
	int Array2[Size];
	for (int i=0, j=NoOfEven, z = 0; z < Size; z++){
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
		cout << Array2[z]<<" ";
	}
	cout << endl << "The Number of Even numbers is " << NoOfEven << " and Odd numbers is " << NoOfOdd << endl;
	system("pause");
	return 0;
}