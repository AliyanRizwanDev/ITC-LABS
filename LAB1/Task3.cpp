#include<iostream>
using namespace std;

int main(){
	//Task 3
	int No_1, No_2;
	cout << "Enter The first Number : ";
	cin >> No_1;
	cout << "Enter the 2nd Number : ";
	cin >> No_2;
	if (No_1 > No_2)
	{
		cout << "The Largest Number is  " << No_1 << endl;
	}
	else
	{
		cout << "The Largest Number is  " << No_2  << endl;
	}
	system("pause");
	return 0;
}