#include "Fortress.h"

Fortress* Fortress::getObj(int *arrows, int* stones) // реалізація створення об’єкта класу Fortress через патерн Singlton
{
	if (obj == nullptr)
	{
		obj = new Fortress(arrows, stones);
	}
	return obj;
}
Fortress* Fortress::obj = nullptr;

int main() {
	int arrow = 4;
	int stone = 1;

	Fortress* fortress = Fortress::getObj(&arrow, &stone);
	//Fortress* fortress1 = Fortress::getObj(&arrow, &stone);
	//Fortress fortress(&arrow, &stone);
	//Fortress fortress1(&arrow, &stone);

	//((Archer)(*fortress1)).Shot();
	//((Archer)(*fortress1)).Shot();

	((Archer)(*fortress)).Shot(); 
	((Archer)(*fortress)).Shot();
	((Archer)(*fortress)).Shot();
	
	((Ranger)(*fortress)).Shot();
	((Ranger)(*fortress)).Shot();
	((Catapult)(*fortress)).Shot();

	//((Archer*)((ArcherTower*)&fortress))->Shot();два косяка
	//((Archer*)((ArcherTower*)&fortress))->Shot();
	//((Archer*)((ArcherTower*)&fortress))->Shot();

	//((Ranger*)((ArcherTower*)&fortress))->Shot();
	//((Ranger*)((ArcherTower*)&fortress))->Shot();
	//((Catapult*)(&fortress))->Shot();

	//((Archer*)((ArcherTower*)&fortress1))->Shot();


	return 0;
}


