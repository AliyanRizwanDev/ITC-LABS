#include<iostream>
using namespace std;
int main(){
	const int Size = 10;
	char Array[Size] = { 'e', '9', 235, '>', 99, '`', '[', 187, 87, '*' };
	for (int i = 0; i < Size; i++){
		cout << endl << Array[i] << endl;
	}
	system("pause");
	return 0;
}