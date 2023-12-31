#include<iostream>
using namespace std;
int main(){
	int A, N, I;
	A = 1, N = 2, I = 0;
	do
	{
		cout << A << "/" << N <<" ";
		N = N+N;
		I++;
	} while (I<12);

	system("pause");
	return 0;
}