#include<iostream>
using namespace std;

int main(){
	int Age, Fare;
	float Discount, Discounted_Fare;
	cout << "Enter the fare of Railway : ";
	cin >> Fare;
do{	cout << "Enter the Age :";
	cin >> Age;
	if (Age < 0)
	{
		cout << "Invalid Input" << endl;
	}
} while (Age < 0);
	if (Age < 3){
		cout << "There is no fare for you" << endl;
		Discount = 0;
		Discounted_Fare = Fare*Discount;
		cout << "Your fare is : " << Discounted_Fare << endl;
	}
	else if (Age >=3 && Age<=10){
		cout << "You get 50 % discount" << endl;
		Discount = 0.5;
		Discounted_Fare = Fare*Discount;
		cout << "Your fare is : " << Discounted_Fare << endl;
	}
	else if (Age >=65){
		cout << "You get 50 % discount" << endl;
		Discount = 0.5;
		Discounted_Fare = Fare*Discount;
		cout << "Your fare is : " << Discounted_Fare << endl;
	}
	else
	{
		cout << "Your fare is : " << Fare << endl;
	}
	system("pause");
	return 0;
}