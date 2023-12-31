#include<iostream>
using namespace std;
int main(){
	const int size = 10;
	int Array[size], SumofOddIndexes = { 0 }, SumofEvenIndexes = {0};
	float Avg;
	cout << "Please Enter The values in the array " << endl;
	for (int i = 0; i < size; i++){
		if (i % 2 != 0){
			do{
				cout << "Enter the value for index " << i << " : ";
				cin >> Array[i];
				if (Array[i] % 2 == 0)
					SumofOddIndexes = SumofOddIndexes + Array[i];
				if (Array[i] % 2 != 0)
					cout << "Enter an even value for odd index." << endl;
			} while (Array[i] % 2 != 0);
		}
		if (i % 2 == 0){
			do{
				cout << "Enter the value for index " << i << " : ";
				cin >> Array[i];
				if (Array[i] % 2 != 0)
					SumofEvenIndexes = SumofEvenIndexes + Array[i];
				if (Array[i] % 2 == 0)
					cout << "Enter an odd value for even index." << endl;
			} while (Array[i] % 2 == 0);
		}
	}
	cout << "The values you entered are: " << endl;
	for (int j = 0; j < size; j++){
		cout << "Entered  value for index " << j << " : ";
		cout << Array[j] << " " << endl;;
	}
	cout << "The sum of the entered values in odd indexes of array is : " << SumofOddIndexes << "\nThe sum of the entered values in even indexes of array is : " << SumofEvenIndexes<<endl;
	cout << endl;
	system("pause");
	return 0;
}