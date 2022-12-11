#ifndef CAT_H
#define CAT_H

#include "Pet.h"

class Cat : Pet
{
public:
	virtual void Talk() const { cout << "Meow!" << endl; }
};

#endif
