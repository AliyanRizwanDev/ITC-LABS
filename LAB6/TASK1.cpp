#include<iostream>
using namespace std;
int main(){
	int num = { 2 };
	for (int i = 1; i <= 5; i++){
		for (int j = 1; j <= 5; j++){
			if ((i == 1 && j == 5) || (i == 2 && j == 4) || (i == 2 && j == 5) || (i == 3 && j == 3) || (i == 3 && j == 4) || (i == 3 && j == 5) || (i == 4 && j == 2) || (i == 4 && j == 3) || (i == 4 && j == 4) || (i == 4 && j == 5) || i == 5){
				cout << num << "  ";
				num += 2;
			}
			else{
				cout << num << "   ";
				num += 2;
			}

		}
		cout << endl;
		num -= 8;
	}

	system("pause");
	return 0;
}
