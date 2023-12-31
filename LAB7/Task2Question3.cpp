#include<iostream>
using namespace std;
int main(){
	const int size = 10;
	int Array[size];
	cout << "Please Enter The values in the array "<<endl;
	for (int i = 0; i < size; i++){
		if (i % 2 != 0){
			do{
				cout << "Enter the value for index " << i  << " : ";
				cin >> Array[i];
				if (Array[i] % 2 == 0)
					cout << "Enter an odd value for odd index."<<endl;
			} while (Array[i] % 2 == 0);
		}
		if (i % 2 == 0){
			cout << "Enter the value for index " << i  << " : ";
			cin >> Array[i];
		}
	}
	cout << "The values you entered are: "<<endl;
	for (int j = 0; j < size; j++){
		cout << "Entered  value for index " << j  << " : ";
		cout << Array[j] << " " << endl;;
	}
	cout << endl;
	system("pause");
	return 0;
}