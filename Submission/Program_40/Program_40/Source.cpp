#include "Pet.h"
#include "Cat.h"
#include "Dog.h"
#include "Hamster.h"

#include <iostream>

using namespace std;

int main()
{
	Mammal* mammalPtr;
	int choice;

	cout << "1.Dog 2.Cat 3.Hamster" << endl << "Enter choice : ";
	cin >> choice;

	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	switch (choice)
	{
	case 1:
		Pet* catPtr;
		catPtr = Cat();
		break;

	case 2:
		mammalPtr = new Cat();
		break;

	case 3:
		mammalPtr = new Horse();
		break;

	default:
		mammalPtr = new Mammal();
		break;
	}

	mammalPtr->Speak();

	cin.get();
	return 0;
}