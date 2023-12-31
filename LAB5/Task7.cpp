#include<iostream>
using namespace std;

int main(){
	for (int i = 1; i < 10; i++){
		for (int j = 1; j < 6; j++){
			if (i == 1 || i==9){
				if (j == 3){
					cout << "*";
				}
				else{
					cout << "  ";
				}

			}
			else if (i == 2 || i==8){
				if (j == 2 || j == 3){
					cout << " *";
				}
				else{
					cout << "  ";
				}
			}
			else if (i == 3 || i==7){
				if (j == 2 || j == 3 || j==4){
					cout << " *";
				}
				else{
					cout << " ";
				}
			}
			else if (i == 4 || i==6){
				if (j==1 || j == 2 || j == 3 || j == 4){
					cout << " *";
				}
				else{
					cout << " ";
				}
			}
            else{
				cout << "* ";
			}
		
		}
		cout << endl;
	}


	system("pause");
	return 0;
}