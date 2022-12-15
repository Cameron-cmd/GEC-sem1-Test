#include "Cat.h"

Cat::~Cat()
{
}

void Cat::Talk()
{
	cout << "I am your cat and I feel ";
	int mood = GetMood();
	if (mood > 15)
		cout << "mad\n";
	else if (mood > 10)
		cout << "frustrated\n";
	else if (mood > 5)
		cout << "okay\n";
	else
		cout << "happy\n";
	PassingTime(1);
}