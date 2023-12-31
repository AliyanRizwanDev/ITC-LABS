#include<iostream>
using namespace std;
int main(){
	const int Size = 30;
	char Array[Size] = { 0 };
	int CAlpha = 0, SAlpha = 0, SpecialChar = 0, NumCount = 0, TChar=0;
	cout << "Enter A String Of Characters: ";
	cin >> Array;
	for (int i = 0; i <Size; i++){
		if (Array[i] != 0){
			TChar++;
		}
		if (Array[i] >= 65 &&Array[i] <= 90){
			CAlpha++;
		}
		else if (Array[i] >= 97 && Array[i] <= 122){
			SAlpha++;
		}
		else if (Array[i] >= 48 && Array[i] <= 57){
			NumCount++;
		}
		else{
			SpecialChar++;
		}

	}
	cout << "The Amount of Capital Aphabets " << CAlpha << ", The Amount of Small Alphabets " << SAlpha << ", The Amount of Numbers " << NumCount << ", The Amount of Special Charachters " << SpecialChar << " of the Total Charachters " << TChar << " in your String." << endl << endl;

	system("pause");
	return 0;
}