#ifndef HAMSTER_H
#define HAMSTER_H

#include "Pet.h"

class Hamster : Pet
{
public:
	Hamster(int hunger, int boredom) : Pet(hunger, boredom) {};
	~Hamster();
	virtual void Talk() const { cout << "Squeak!" << endl; }
};

#endif
