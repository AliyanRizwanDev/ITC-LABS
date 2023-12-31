#include<iostream>
using namespace std;

int main(){
	for (int i = 1; i < 6; i++){
		for (int j = 1; j < 8; j++){
			if (i == 1 ){
				if (j == 4){
					cout << "*";
				}
				else{
					cout << "  ";
				}

			}
			else if (i == 2){
				if (j == 4 || j == 3){
					cout << " *";
				}
				else{
					cout << "  ";
				}
			}
			else if (i == 3){
				if ( j == 3 || j ==6){
					cout << " *";
				}
				if (j == 4){
					cout << "  ";
				}
				else{
					cout << " ";
				}
			}
			else if (i==4){
				if ( j == 2 || j==6){
					cout << "*";
				}
				else if (j == 4){
					cout << "       ";
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