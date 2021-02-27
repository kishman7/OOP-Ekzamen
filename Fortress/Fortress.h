#pragma once
#include <iostream>
#include <windows.h>
#include <list>
#include <vector>
#include <deque>
#include <string>
#include <algorithm> 
#include <functional>

using namespace std;

class Shooter {
//protected:
	//string amunition;
	//int* num_amunition;
public:
	string amunition;
	int* num_amunition;
	void AddAmunition(string shooter, string amunition, int* num_amunition) { // метод додавання амуниції
		this->amunition = amunition;
		this->num_amunition = num_amunition;
		cout<<"Ammunition "<< shooter << ". Name ammunition: " << this->amunition << ". Amount ammunition: " << *(this->num_amunition) << endl;
	}
	void Shot() { // метод постріл
		if (*num_amunition <= 0)
		{
			cout << "No ammunition" << endl;
		}
		else
		{
			*num_amunition = *(this->num_amunition) - 1; // значення віднмає 1, аналог num_amunition--
			cout << "Shot done!!! Amount of " << this->amunition << ": " << *(this->num_amunition) << endl;
		}
	}
		
};

class Archer : public Shooter {
	public:
	int arrow; // стріли
	void Shot() 	{ // метод постріл
		cout << "Archer makes a shot." << endl;
		((Shooter*)this)->Shot();}
};

class Ranger : public Shooter {
public:
	int arrow;
	void Shot() { // метод постріл
		cout << "Ranger makes a shot." << endl;
		((Shooter*)this)->Shot();
	}
};
class Catapult : public Shooter {
public:
	int stone;
	void Shot() { // метод постріл
		cout << "Catapult makes a shot." << endl;
		((Shooter*)this)->Shot();
	}
};
class ArcherTower : public Archer, public Ranger {
public:
	ArcherTower(int* a) : Archer(), Ranger() {
		((Shooter*)((Archer*)this))->AddAmunition("Archer", "arrows",a);
		((Shooter*)((Ranger*)this))->AddAmunition("Ranger", "arrows", a);
	}
};

class Fortress : public ArcherTower, public Catapult {
public:
	static Fortress* obj;
	static Fortress* getObj(int *arrows, int* stones);
	Fortress(int* arrows, int* stones) : ArcherTower(arrows), Catapult(){
		((Shooter*)((Catapult*)this))->AddAmunition("Catapult", "stones", stones);
	}
 };