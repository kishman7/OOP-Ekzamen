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
protected:
	string amunition;
	int num_amunition;
public:
	void AddAmunition(string amunition, int num_amunition) { // метод додавання амуниції

		this->amunition = amunition;
		this->num_amunition = num_amunition;
		cout << "Ammunition: " << this->amunition << "Amount ammunition: " << this->num_amunition << endl;

	}
	void Shot() { // метод постріл
		this->num_amunition--;
		cout << "Shot done!!! Amount of " << this->amunition << ": " << this->num_amunition << endl;
	}
};

class Archer : public Shooter {
public:
	int arrow;
	void Shot() { // метод постріл
		this->num_amunition--;
		cout << "Shot done!!! Amount of " << this->amunition << ": " << this->num_amunition << endl;
	}
};