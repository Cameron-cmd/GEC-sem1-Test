#ifndef DOG_H
#define DOG_H

#include "Pet.h"

class Dog : Pet
{
public:
	Dog(int hunger, int boredom) : Pet(hunger, boredom) {};
	~Dog();
	virtual void Talk() const { cout << "Woof!" << endl; }
};

#endif
