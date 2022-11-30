#include <iostream>
using namespace std;

int main()
{
	char choice = 'a';

	cout << "Please choose your difficulty:" << endl << endl;
	cout << "1. I'm too young to die!" << endl << endl;
	cout << "2. Hey, not to rought!" << endl << endl;
	cout << "3. Hurt me plenty." << endl << endl;
	cout << "4. Ultra-Violence." << endl << endl;
	cout << "5. Nightmare..." << endl << endl;

	cin >> choice;

	switch (choice)
	{
	case '1':
		cout << "taking the easy way out arnt you" << endl;
		break;
	case '2':
		cout << "you can do better" << endl;
		break;
	case '3':
		cout << "just average" << endl;
		break;
	case '4':
		cout << "You are a bit masochistic" << endl;
		break;
	case '5':
		cout << "Please get some help" << endl;
		break;
	default:
		cout << "thatst not a valid input" << endl;
		break;

	}

	cin.get();

	return 0;
}