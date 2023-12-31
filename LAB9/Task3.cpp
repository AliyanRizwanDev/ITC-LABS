#include<iostream>
using namespace std;
int main(){
	//Variable initialization of Material Rates
	int Clay1Ton = 5000, Rock1TON = 4000, Sand1ton = 3000,
	    Cement1Bag = 650, Steel1Ton = 8000,
		Brick1Pc = 10, Paint1Tin = 850;
	//Variable Initialization of Floor NO.
	int floor; 
	do{
		cout << "Please select the floor number which you want to makem \n 0 means Basement \n 1 means Ground Floor \n 2 means First Floor \n PRESS -1 to exit this program \n Enter yout Preferred Input:";
		cin >> floor;
		if (floor == 0){
			cout << "you chose the Basement" << endl;
			int BricksforBasement = 0, CementforBasement = 0, ClayforBasement = 0, RocksforBasement = 0, PaintforBasement = 0, SandforBasement = 0, SteelforBasment = 0, TotalCostForBasement = 0;
			cout << "Enter the number of Bricks = ";
			cin >> BricksforBasement;
			cout << "Enter the number of Cement = ";
			cin >> CementforBasement;
			cout << "Enter the number of Clay = ";
			cin >> ClayforBasement;
			cout << "Enter the number of Rock = ";
			cin >> RocksforBasement;
			cout << "Enter the number of Paint = ";
			cin >> PaintforBasement;
			cout << "Enter the number of Sand = ";
			cin >> SandforBasement;
			cout << "Enter the number of Steel = ";
			cin >> SteelforBasment;
			cout << BricksforBasement << " Bricks*" << Brick1Pc << ":" << BricksforBasement*Brick1Pc << endl;
			cout << CementforBasement << " Bags of Cement*" << Cement1Bag << ":" << CementforBasement*Cement1Bag << endl;
			cout << ClayforBasement << " Tons of Clay*" << Clay1Ton << ":" << ClayforBasement*Clay1Ton << endl;
			cout << RocksforBasement << " Tons of Rocks*" << Rock1TON << ":" << RocksforBasement*Rock1TON << endl;
			cout << PaintforBasement << " Tins of Paint*" << Paint1Tin << ":" << PaintforBasement*Paint1Tin << endl;
			cout << SandforBasement << " Tons ofSand*" << Sand1ton << ":" << SandforBasement*Sand1ton << endl;
			cout << SteelforBasment << " Tons ofSteel*" << Steel1Ton << ":" << SteelforBasment*Steel1Ton << endl;
			TotalCostForBasement = (BricksforBasement*Brick1Pc) + (CementforBasement*Cement1Bag) + (ClayforBasement + Clay1Ton) + (RocksforBasement + Rock1TON) + (PaintforBasement + Paint1Tin) + (SandforBasement*Sand1ton) + (SteelforBasment*Steel1Ton);
			cout << "The Total Cost for Materials used in Basement : " << TotalCostForBasement << endl;
		}
		else if (floor == 1){
			cout << "You Chose GROUND FLOOR" << endl;
			int BricksforGround = 0, CementforGround = 0, ClayforGround = 0, RockforGround = 0, PaintforGround = 0, SandforGround = 0, SteelforGround = 0, TotalCostForGroundFloor = 0;
			cout << "Enter the number of Bricks = ";
			cin >> BricksforGround;
			cout << "Enter the number of Cement = ";
			cin >> CementforGround;
			cout << "Enter the number of Clay = ";
			cin >> ClayforGround;
			cout << "Enter the number of Rock = ";
			cin >> RockforGround;
			cout << "Enter the number of Paint = ";
			cin >> PaintforGround;
			cout << "Enter the number of Sand = ";
			cin >> SandforGround;
			cout << "Enter the number of Steel = ";
			cin >> SteelforGround;
			cout << BricksforGround << " Bricks*" << Brick1Pc << ":" << BricksforGround*Brick1Pc << endl;
			cout << CementforGround << " Bags of Cement*" << Cement1Bag << ":" << CementforGround*Cement1Bag << endl;
			cout << ClayforGround << " Tons of Clay*" << Clay1Ton << ":" << ClayforGround*Clay1Ton << endl;
			cout << RockforGround << " Tons of Rocks*" << Rock1TON << ":" << RockforGround*Rock1TON << endl;
			cout << PaintforGround << " Tins of Paint*" << Paint1Tin << ":" << PaintforGround*Paint1Tin << endl;
			cout << SandforGround << " Tons ofSand*" << Sand1ton << ":" << SandforGround*Sand1ton << endl;
			cout << SteelforGround << " Tons ofSteel*" << Steel1Ton << ":" << SteelforGround*Steel1Ton << endl;
			TotalCostForGroundFloor = (BricksforGround*Brick1Pc) + (CementforGround*Cement1Bag) + (ClayforGround*Clay1Ton) + (RockforGround*Rock1TON) + (PaintforGround*Paint1Tin) + (SandforGround*Sand1ton) + (SteelforGround*Steel1Ton);
			cout << "Total cost for materials used in Ground Floor : " << TotalCostForGroundFloor << endl;
		}
		else if (floor == 2){
			cout << "You Chose 1st FLOOR" << endl;
			int Bricksfor1st = 0, Cementfor1st = 0, Clayfor1st = 0, Rockfor1st = 0, Paintfor1st = 0, Sandfor1st = 0, Steelfor1st = 0, TotalCostFor1stFloor = 0;
			cout << "Enter the number of Bricks = ";
			cin >> Bricksfor1st;
			cout << "Enter the number of Cement = ";
			cin >> Cementfor1st;
			cout << "Enter the number of Clay = ";
			cin >> Clayfor1st;
			cout << "Enter the number of Rock = ";
			cin >> Rockfor1st;
			cout << "Enter the number of Paint = ";
			cin >> Paintfor1st;
			cout << "Enter the number of Sand = ";
			cin >> Sandfor1st;
			cout << "Enter the number of Steel = ";
			cin >> Steelfor1st;
			cout << Bricksfor1st << " Bricks*" << Brick1Pc << ":" << Bricksfor1st*Brick1Pc << endl;
			cout << Cementfor1st << " Bags of Cement*" << Cement1Bag << ":" << Cementfor1st*Cement1Bag << endl;
			cout << Clayfor1st << " Tons of Clay*" << Clay1Ton << ":" << Clayfor1st*Clay1Ton << endl;
			cout << Rockfor1st << " Tons of Rocks*" << Rock1TON << ":" << Rockfor1st*Rock1TON << endl;
			cout << Paintfor1st << " Tins of Paint*" << Paint1Tin << ":" << Paintfor1st*Paint1Tin << endl;
			cout << Sandfor1st << " Tons ofSand*" << Sand1ton << ":" << Sandfor1st*Sand1ton << endl;
			cout << Steelfor1st << " Tons ofSteel*" << Steel1Ton << ":" << Steelfor1st*Steel1Ton << endl;
			TotalCostFor1stFloor = (Bricksfor1st*Brick1Pc) + (Cementfor1st*Cement1Bag) + (Clayfor1st*Clay1Ton) + (Rockfor1st*Rock1TON) + (Paintfor1st*Paint1Tin) + (Sandfor1st*Sand1ton) + (Steelfor1st*Steel1Ton);
			cout << "Total cost for materials used in 1st Floor : " << TotalCostFor1stFloor << endl;
		}
		else if (floor<-1 || floor>2){ cout << "you have entered wrong value" << endl; }
	} while (floor != -1);
	system("pause");
	return 0;
}