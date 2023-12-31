#include<iostream>
using namespace std;

int main(){
	int CHOICE, a, Choice2;
	do{
		cout << "Choose between Part a,b and c of the program by pressig 1,2 and 3 respectively : ";
		cin >> CHOICE;
		if (CHOICE == 1)
		{
			cout << "You have chosen the a part of the program now you will see an output of first 15 even numbers. Enjoy : ";
			for (a = 0; a < 32; a+=2)
			{
				cout << a << ",";
			}
		}
		else if (CHOICE == 2)
		{
			cout << "You have chosen the b part of the program now you will see an output of first 15 odd numbers. Enjoy : ";
			for (a = 1; a < 32; a+=2)
			{
				cout << a << ",";
			}
		}
		else if (CHOICE == 3){
			cout << "You have chosen the c part of the program now you get a choice to choose if you want to see the first 15 even or odd numbers ";
			do{
				cout << " for Even press 1 and for odd press 2 : ";
				cin >> Choice2;
				if (Choice2 == 1){
					cout << "You have typed in 1 now you will see an output of first 15 even numbers. Enjoy : ";
					for (a = 0; a < 32; a+=2)
					{
						cout << a << ",";
					}
				}
				else if (Choice2 == 2){
					cout << "You have typed 2 now you will see an output of first 15 odd numbers. Enjoy : ";
					for (a = 1; a < 32; a+=2)
					{
						cout << a << ",";
					}
				}
				else
				{
					cout << "Invalid input" << endl;
				}
			} while (Choice2 != 1 && Choice2 != 2);
		}
		else
		{
			cout << "Invalid input"<<endl;
		}
	} while (CHOICE != 1 && CHOICE != 2 && CHOICE != 3);
	system("pause");
	return 0;
}