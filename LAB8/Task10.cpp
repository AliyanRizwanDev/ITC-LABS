#include<iostream>
using namespace std;
int main(){
	const int Size = 30;
	char Array[Size] = { '6', '8', '9', 'a', 'a', 'a', '9', '1', '2', 'z', 's', 'p', '[', '9', 's', 'p', 'y', 't', '1', 'a', 'r', 'f', 'v', '0', '8', 'm', 'l', 'x', 'x', '1' }, Character = 0;
	int tHE_fREQUENCY = 0;
	cout << "Enter a Character: ";
	cin >> Character;

	for (int i = 0; i < Size; i++){
		if (Array[i] == Character){
			tHE_fREQUENCY++;
		}
	}
	cout << "The Character comes up in the Array " << tHE_fREQUENCY << " Time(s)" << endl << endl;
	system("pause");
	return 0;
}