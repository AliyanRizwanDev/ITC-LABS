#include<iostream>
using namespace std;
int main(){
	const int size = 12, sized = 6;
	int Array[size], Array2[sized], MaxValue, MaxIndex;
	cout << "Please Enter The values in the array: ";
	for (int i = 0; i < size; i++)
	{
		cin >> Array[i];
	}
	int j = 0;
	for (int i = 0; j < sized; i += 2)
	{
		Array2[j] = Array[i + 1] + Array[i];
		j++;
	}
	int i = 0;
	for (int j = 0; j < size; j += 2){
		cout << "Difference between Element " << j + 1 << " and Element " << j + 2 << " is " << Array2[i] << endl;
		i++;
	}
	MaxValue = Array2[0];
	for (int i = 0; i < sized;i++){
		if (MaxValue < Array2[i]){
			MaxValue = Array2[i];
			MaxIndex = i;
		}
	}
	cout << "The Maximum sum is " << MaxValue << " which is placed in Index " << MaxIndex + 1<< endl;
	cout << endl;
	system("pause");
	return 0;
}