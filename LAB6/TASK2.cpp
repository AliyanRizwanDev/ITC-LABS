#include<iostream>
using namespace std;
int main(){
	int num = { 10 };
	for (int i = 1; i <= 5; i++){
		for (int j = 1; j <= 5; j++){
			if (i == 1 && j == 1){
				cout << num<<" ";
				num -= 2;
			}
			else{
				if (num >= 2){
					cout << " " << num << " ";
					num -= 2;
				}
				else{
					cout << " 0 ";
				}
			}
		}
		cout << endl;
		if (i == 1)
			num += 8;
		if (i == 2)
			num += 6;
		if (i == 3)
			num += 4;
		if (i == 4)
			num += 2;

	}

	system("pause");
	return 0;
}
