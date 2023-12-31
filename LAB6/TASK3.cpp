#include<iostream>
using namespace std;
int main(){
	int numoflines = { 3 };
	for (int row = 1; row <= numoflines; row++){
		for (int space = 1; space <= (numoflines-row+1); space++){
			cout << "    ";
		}
		int stars = row * 2 - 1;
		for (int col = 1; col <= stars; col++){
			cout << " 10 ";
		}
		cout << endl;
	}
	for (int row = numoflines -1; row >=1; row--){
		for (int space = 1; space <= (numoflines - row + 1); space++){
			cout << "    ";
		}
		int stars = row * 2 - 1;
		for (int col = 1; col <= stars; col++){
			cout << " 10 ";
		}
		cout << endl;
	}


	system("pause");
	return 0;
}