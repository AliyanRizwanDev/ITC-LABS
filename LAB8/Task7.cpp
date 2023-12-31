#include<iostream>
using namespace std;
int main(){
	const int Size = 30;
	char Array[Size] = { 0 };
	for (int i = 0; i < Size; i++){
		do{
			Array[i] = rand();
		} while (Array[i]<'A' || Array[i]>'Z' && Array[i]<'a' || Array[i]>'z');
	}
	for (int i = 0; i < Size; i++){
		cout << Array[i]<<"  ";
	}

	system("pause");
	return 0;
}