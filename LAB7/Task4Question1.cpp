#include<iostream>
using namespace std;
int main(){
	const int size = 10;
	int Array[size];
	int a=0, z = 0;
	int store = size / 2;
	int elimit = 0, oddlimit = 0;
	cout << "Enter the Values for Index : ";
	for (int i = 0, j = 0; z < size; z++)
	{  
	back:
		
		cin >> a;
		if (a % 2 == 0 && elimit = store){
			cout << "The spaces for even numbers is filled. Enter odd." << endl;
			goto back;
		}
		if (a % 2 != 0 && oddlimit = store){
			cout << "The spaces for odd numbers is filled. Enter even." << endl;
			goto back;
		}
		if (a % 2 == 0 && elimit < store)
		{
			Array[i] = a;
			i = i + 2;
			elimit++;

		}
		else
		{
			if (a % 2 == 1 && oddlimit < store)
			{
				Array[j + 1] = a;
				j = j + 2;
				oddlimit++;
			}
		}

	}
	for (int i = 0; i < size; i++)
	{
		cout << Array[i];
	}

	system("pause");
	return 0;

}