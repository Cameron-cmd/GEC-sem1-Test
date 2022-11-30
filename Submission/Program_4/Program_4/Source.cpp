#include <iostream>

using namespace std;

int main()
{
	typedef int health;
	typedef enum Weapons
	{
		SWORD = 1,
		DAGGER,
		MACE,
		TWIN_SWORDS,
		SAMURAI,
		WIZARD_STAFF,
		FIRE_POTION,
		ICE_BLOADE,
		SMALL_KNIFE
	};

	health currentHealth = 13000;
	Weapons currentWeapon = SAMURAI;

	cout << "My current health is: " << currentHealth << endl;
	cout << "And the ID of my weapon of choice is: " << currentWeapon << endl;

	cin.get();

	return 0;
}