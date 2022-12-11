#ifndef HAMSTER_H
#define HAMSTER_H

#include "Pet.h"

class Hamster : Pet
{
public:
	virtual void Talk() const { cout << "Squeak!" << endl; }
};

#endif
