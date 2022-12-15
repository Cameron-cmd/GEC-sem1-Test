#include "Pet.h"
#include "Cat.h"
#include "Dog.h"
#include "Hamster.h"

#include <iostream>

using namespace std;

int main()
{
	int choice;

	cout << "1.Cat 2.Dog 3.Hamster" << endl << "Enter choice : ";
	cin >> choice;

	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	Pet* petPtr;
	if (choice == 1) {
		cerr << "cat" << endl;
		petPtr = new Cat(0, 0);
	}
	else if (choice == 2) {
		petPtr = new Dog(0, 0);
		cerr << "dog" << endl;
	}
	else if (choice == 3) {
		petPtr = new Hamster(0, 0);
		cerr << "hamster" << endl;
	}
	else {
		petPtr = new Pet(0, 0);
		cerr << "pet" << endl;
	}

	int decision;
	int loop = -1;
	while (loop == -1)
	{
		cout << "Input:\n0 to Quit\n1 to listen to your pet\n2 to feed your pet\n3 to play with your pet" << endl;
		cin >> decision;

		switch (decision) 
		{
			case 1:
				petPtr->Talk();
				break;
			case 2:
				petPtr->Feed(4);
				break;
			case 3:
				petPtr->Play(4);
				break;
			case 0:
				return 0;
		}
	}

	cin.get();
	return 0;
}