#ifndef DOG_H
#define DOG_H

#include "Pet.h"

class Dog : public Pet
{
public:
	Dog(int hunger, int boredom) : Pet(hunger, boredom) {};
	~Dog();
	void Talk() override;
};

#endif
