#ifndef CAT_H
#define CAT_H

#include "Pet.h"

class Cat : Pet
{
public:
	Cat(int hunger, int boredom) : Pet(hunger, boredom) {};
	~Cat();
	virtual void Talk() const { cout << "Meow!" << endl; }
};

#endif
