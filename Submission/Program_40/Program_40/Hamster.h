#ifndef HAMSTER_H
#define HAMSTER_H

#include "Pet.h"

class Hamster : public Pet
{
public:
	Hamster(int hunger, int boredom) : Pet(hunger, boredom) {};
	~Hamster();
	void Talk() override;
};

#endif
