#include<iostream>
using namespace std;
int main(){
	int beginning, Max, sum=0, Copy;
	cout << "Please Enter the Number to begin  with: ";
	cin >> beginning;
	cout << "Please Enter the Number you wanna end at: ";
	cin >> Max;
	Copy = beginning;
	beginning++;
	while (beginning < Max){
		if (beginning % 2 == 0){
			cout << beginning << ", ";
			sum++;
		}
		
		beginning++;
	}
	cout << "\nThe Total Number of Even numbers between " << Copy << " and " << Max<< " is "<<sum<<endl;


	system("pause");
	return 0;

}