#include<iostream>
using namespace std;
int main(){
	int i=2, a;
	while (i < 8){
		if (i == 2){
			cout << i;
			a = 3;
			while (a < 7){
				cout <<"\t"<< a;
				a++;
			}
		}
		if (i == 3){
			cout <<"\n"<< i;
			a = 5;
			while (a < 12){
				cout << "\t" << a;
				a+=2;
			}
		}
		if (i == 4){
			cout << "\n" << i;
			a = 7;
			while (a < 17){
				cout << "\t" << a;
				a += 3;
			}
		}
		if (i == 5){
			cout << "\n" << i;
			a = 9;
			while (a < 22){
				cout << "\t" << a;
				a += 4;
			}
		}
		if (i == 6){
			cout << "\n" << i;
			a = 11;
			while (a < 27){
				cout << "\t" << a;
				a += 5;
			}
		}
		if (i == 7){
			cout << "\n" << i;
			a = 13;
			while (a < 32){
				cout << "\t" << a;
				a += 6;
			}
		}

		i++;
	}

	system("pause");
	return 0;
}