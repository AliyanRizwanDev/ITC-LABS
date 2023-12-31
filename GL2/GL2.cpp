#include<iostream>
using namespace std;

int main(){
	int Area_Type, Units, Unit_PRICE, TotalAmount;
	cout << "enter your type of area:" << endl;
	cin >> Area_Type;
	if (Area_Type == 1){
		cout << "You live in Domestic area " << endl;
		cin >> Units;
		if (Units <= 50)
		{
			Unit_PRICE = 0.50;
			TotalAmount = Units*Unit_PRICE;
			cout << TotalAmount;

		}
	}
}
