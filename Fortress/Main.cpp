#include "Fortress.h"

int main() {
	Shooter shooter;
	string amunition;
	int num_amunition;
	cout << "Enter name ammunition: ";
	cin >> amunition;
	cout << "Enter amount  ammunition: ";
	cin >> num_amunition;
	shooter.AddAmunition(amunition, num_amunition);
	system("pause");
	shooter.Shot();

	

	return 0;
}


