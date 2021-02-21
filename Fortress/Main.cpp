#include "Fortress.h"

Fortress* Fortress::getObj(int* arrows, int* stones)
{
	if (obj == nullptr)
	{
		obj = new Fortress(arrows, stones);
	}
	return obj;
}

int main() {
	int arrow = 4;
	int stone = 1;

	Fortress* fortress = Fortress::getObj(&arrow, &stone);
	//Fortress fortress(&arrow, &stone);
	//Fortress fortress1(&arrow, &stone);

	((Archer*)((ArcherTower*)&fortress))->Shot();
	((Archer*)((ArcherTower*)&fortress))->Shot();
	((Archer*)((ArcherTower*)&fortress))->Shot();

	((Ranger*)((ArcherTower*)&fortress))->Shot();
	((Ranger*)((ArcherTower*)&fortress))->Shot();
	((Catapult*)(&fortress))->Shot();

	//((Archer*)((ArcherTower*)&fortress1))->Shot();


	return 0;
}


