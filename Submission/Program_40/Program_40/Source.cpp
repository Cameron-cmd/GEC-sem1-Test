#include "Pet.h"
#include "Cat.h"
#include "Dog.h"
#include "Hamster.h"

#include <iostream>

using namespace std;

int main()
{
	int choice;

	cout << "1.Dog 2.Cat 3.Hamster" << endl << "Enter choice : ";
	cin >> choice;

	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	switch (choice)
	{
	case 1:
		Cat* catPtr = new Cat(0,0);
		break;

	case 2:
		Dog* dogPtr = new Dog(0,0);
		break;

	case 3:
		Hamster* hamsterPtr = new Hamster(0,0);
		break;

	default:
		Pet petPtr;
		petPtr = Pet();
		break;

	int decision = 0;
	while (decision == 0)
	{
		cout << "Input 0 to Quit\n1 to listen to your pet\n2 to feed your pet\n3 to play with your pet" << endl;
		cin >> decision;

		//switch (decision)
		//{
		//	case 0:
		//		break;
		//
		//	case 1:
		//		l
		//}
		catPtr->Talk();
		catPtr->Feed();
	}
	};

	cin.get();
	return 0;
}