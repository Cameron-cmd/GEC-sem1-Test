#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	const int MAX_ITEMS = 4;
	int numItems = 0;
	string inventory[MAX_ITEMS];
	inventory[numItems++] = "sword";
	inventory[numItems++] = "battle axe";
	inventory[numItems++] = "healing potion";
	inventory[numItems++] = "dagger";

	char choice;

	cout << "You pick up a staff do you want to swap it for your dagger (y/n)" << endl << endl;
	cin >> choice;
	if (choice == 'y')
	{
		inventory[3] = "staff";
		for (int i = 0; i < 4; i++)
			cout << inventory[i] << endl << endl;
	}
	else
	{
		cout << "you have left the staff behind" << endl << endl;
		for (int i = 0; i < 4; i++)
			cout << inventory[i] << endl << endl;
	}
}