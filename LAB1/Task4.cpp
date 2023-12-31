#include<iostream>
using namespace std;

int main(){
	//Task 4
int No1, No2;
cout << "Enter The first Number : ";
cin >> No1;
cout << "Enter the 2nd Number : ";
cin >> No2;
if (No1>No2)
{
	cout << No1 << " Is Greater than " << No2 << endl;
}
else
{
	cout << No2 << " is Greater than " << No1 << endl;
}

system("pause");
return 0;
}