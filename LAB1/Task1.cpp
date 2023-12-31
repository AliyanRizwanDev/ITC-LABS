#include<iostream>
using namespace std;

int main(){
	//Task 1
	int Entered_Value, Absolute;
	cout << "Please Enter your desired value : ";
	cin >> Entered_Value;
	if (Entered_Value >= 0){
		Absolute = Entered_Value;
		cout << "The absolute value of " << Entered_Value << " is " << Absolute<< endl;
	}
	else
	{
		Absolute = Entered_Value*(-1);
		cout << "The absolute value of " << Entered_Value << " is " << Absolute << endl;
	}
	system("pause");
	return 0;
}