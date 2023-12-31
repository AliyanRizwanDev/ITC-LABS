#include<iostream>
using namespace std;
int main(){
	//Variable initialization of materials
	int Clay = 20, Rock = 15, Sand = 40, Wood = 250,
		Cement = 5000, Steel = 500, Bricks = 1000,
		Glass = 300, PVCPipes = 500 , Paint = 50, ElectricWires = 50;
	//Variable initialization of Material Rates
	int Clay1Ton = 5000, Rock1TON = 4000, Sand1ton = 3000,
		Wood1Log = 2500, Cement1Bag = 650, Steel1Ton = 8000,
		Brick1Pc = 10, Glass1ft = 33, PVCPipe1LengthPc = 1200, Paint1Tin = 850, ElectricWires1Coil = 3250;
	//Variable Initialization of Total Costs
	int TotalBricksCost=0, TotalCementsCost=0, TotalSandCost=0, TotalMirrorCost=0, TotalCostforTask1=0;
	//Variable Initialization of Floor NO.
	int floor;
	//Task 1 Solution
	TotalBricksCost = Bricks * Brick1Pc;
	cout << "Total Cost for Bricks:" << TotalBricksCost << endl;
	TotalCementsCost = Cement*Cement1Bag;
	cout << "Total Cost for Cements:" << TotalCementsCost << endl;
	TotalSandCost = Sand* Sand1ton;
	cout << "Total Cost for Sand:" << TotalSandCost << endl;
	TotalMirrorCost = Glass* Glass1ft;
	cout << "Total Cost for Mirrors:" << TotalMirrorCost << endl;
	TotalCostforTask1 = TotalBricksCost + TotalCementsCost + TotalSandCost + TotalMirrorCost;
	cout << "Total For these 4 Materials:" << TotalCostforTask1 << endl;
	//Task2 Solution
	cout << "Please select the floor number which you want to makem \n 0 means Basement \n 1 means Ground Floor \n Enter yout Preferred Input:";
	cin >> floor;
	if(floor==0){
		cout << "you chose the Basement" << endl;
		int BricksforBasement = 500, CementforBasement = 260,
			ClayforBasement = 30, RocksforBasement = 50,
			PaintforBasement = 23, SandforBasement = 30,
			SteelforBasment = 30, TotalCostForBasement=0;
		cout << BricksforBasement << " Bricks*" << Brick1Pc << ":" << BricksforBasement*Brick1Pc<<endl;
		cout << CementforBasement << " Bags of Cement*" << Cement1Bag << ":" << CementforBasement*Cement1Bag << endl;
		cout << ClayforBasement << " Tons of Clay*" << Clay1Ton << ":" << ClayforBasement*Clay1Ton << endl;
		cout << RocksforBasement << " Tons of Rocks*" << Rock1TON << ":" << RocksforBasement*Rock1TON << endl;
		cout << PaintforBasement << " Tins of Paint*" << Paint1Tin << ":" << PaintforBasement*Paint1Tin << endl;
		cout << SandforBasement << " Tons ofSand*" << Sand1ton << ":" << SandforBasement*Sand1ton << endl;
		cout << SteelforBasment << " Tons ofSteel*" << Steel1Ton << ":" << SteelforBasment*Steel1Ton << endl;
		TotalCostForBasement = (BricksforBasement*Brick1Pc) + (CementforBasement*Cement1Bag) + (ClayforBasement + Clay1Ton) + (RocksforBasement + Rock1TON) + (PaintforBasement + Paint1Tin) + (SandforBasement*Sand1ton) + (SteelforBasment*Steel1Ton);
		cout << "The Total Cost for Materials used in Basement : " << TotalCostForBasement << endl;
	}//Task3 Solution
	else if(floor == 1){
		cout << "You Chose GROUND FLOOR" << endl;
		int BricksforGround = 300, CementforGround = 220,
			ClayforGround = 40, RockforGround = 30,
			PaintforGround = 33, SandforGround = 35,
			SteelforGround = 35, TotalCostForGroundFloor = 0;
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
	else{ cout << "you have entered wrong value" << endl; }
	//Task4 Solution
	cout << "Please select the floor number which you want to makem \n 0 means Basement \n 1 means Ground Floor \n Enter yout Preferred Input:";
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
	else{ cout << "you have entered wrong value" << endl; }
	system("pause");
	return 0;
}