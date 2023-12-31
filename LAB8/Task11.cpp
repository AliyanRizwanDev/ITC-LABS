#include<iostream>
using namespace std;
int main(){
	const int Size = 30;
	char Array[Size] = { '6', '8', '9', 'A', 'a', 'a', '9', '1', '2', 'Z', 's', 'p', '[', '9', 's', 'p', 'y', 'T', '1', 'a', 'r', 'f', 'v', '0', '>', 'm', 'l', 'x', 'x', '1' }, Character = 0, The_Replacement=0;
	

	cout << "Enter a Character: ";
	cin >> Character;
	cout << "Enter its Replacement: ";
	cin >> The_Replacement;
	cout << "The Array before Replacement: " << endl;
	for (int i = 0; i < Size; i++){
		cout << Array[i] << "  ";
	}
	for (int i = 0; i < Size; i++){
		if (Array[i] == Character){
			Array[i]=The_Replacement;
		}
	}
	cout << endl;
	cout << "The Array after Replacement: " << endl;
	for (int i = 0; i < Size; i++){
		cout << Array[i] << "  ";
	}
	system("pause");
	return 0;
}