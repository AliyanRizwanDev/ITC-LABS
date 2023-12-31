#include<iostream>
using namespace std;

int main(){
	float Courses, CGPA, Scholarship, Fee_Per_Course = {30000}, Total_Fee, Payable_Fee;
	do{
		cout << "Enter your current CGPA : ";
		cin >> CGPA;
		if (CGPA<0 || CGPA>4)
		{
			cout << "Invalid input" << endl;
		}
		if (CGPA >= 3){
			Scholarship = 0.25;
			cout << "You availed 25% of scholarship" << endl;
			cout << "Enter the number of courses you want to pick :";
			cin >> Courses;
			Total_Fee = Courses*Fee_Per_Course;
			cout << "Total fee is : " << Total_Fee << endl;
			Payable_Fee = Total_Fee*Scholarship;
			cout << "After scholarship, Total fee is : " << Payable_Fee << endl;
		}
		else if (CGPA >= 2.50 && CGPA <= 2.99){
			Scholarship = 0.12;
			cout << "You availed 12% of scholarship" << endl;
			cout << "Enter the number of courses you want to pick :";
			cin >> Courses;
			Total_Fee = Courses*Fee_Per_Course;
			cout << "Total fee is : " << Total_Fee << endl;
			Payable_Fee = Total_Fee*Scholarship;
			cout << "After scholarship, Total fee is : " << Payable_Fee << endl;
		}
		else if (CGPA < 2.50){
			Scholarship = 0;
			cout << "You availed 0% of scholarship" << endl;
			cout << "Enter the number of courses you want to pick :";
			cin >> Courses;
			Total_Fee = Courses*Fee_Per_Course;
			cout << "Total fee is : " << Total_Fee << endl;
			Payable_Fee = Total_Fee;
			cout << "After scholarship, Total fee is : " << Payable_Fee << endl;
		}
	} while (CGPA<0 || CGPA>4);

	system("pause");
	return 0;
}