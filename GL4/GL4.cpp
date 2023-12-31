#include<iostream>
using namespace std;

int main(){
	int n;
	cout << "the numbers between 3 and 333 that are divisible by 4 and 5 : ";
	for (n = 3; n <= 333; n++){
		if (n % 4 == 0 && n % 5 == 0){
			cout << n<<" , ";
		}

	}
	system("pause");
	return 0;

}