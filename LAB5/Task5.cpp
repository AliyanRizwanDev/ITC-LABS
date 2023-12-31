#include<iostream>
using namespace std;

int main(){
	for (int i = 1; i < 6; i++){
		for (int j = 1; j <= i; j++){
			if (i == 3 || i == 4){
				if (i == 3){
					if (j == 2){
						cout << " ";
					}
					else{
						cout << "*";
					}
				}
				if (i == 4){
					if (j == 2 || j==3){
						cout << " ";
					}
					else{
						cout << "*";
					}
				}
			}
            else{
				cout << "*";
			}
		}
		cout << endl;
	}


	system("pause");
	return 0;
}