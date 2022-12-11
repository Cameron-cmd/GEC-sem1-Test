#ifndef DOG_H
#define DOG_H

#include "Pet.h"

class Dog : Pet
{
public:
	virtual void Talk() const { cout << "Woof!" << endl; }
};

#endif
