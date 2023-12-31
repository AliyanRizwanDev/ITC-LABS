#include<iostream>
using namespace std;
int main(){
	const int Size = 20;
	char Array[Size] = "I AM BATMAN";
	cout << "The Array without loop:" << endl;
	cout << Array << endl;
	cout << endl << endl << endl << "Now the Array with Loop:" << endl;
	for (int i = 0; i < Size; i++){
		cout << Array[i];
	}
	cout << endl;
	system("pause");
	return 0;
}