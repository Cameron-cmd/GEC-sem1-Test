#ifndef PET_H
#define PET_H

#include <iostream>
using namespace std;

class Pet
{
public:
	Pet(int hunger, int boredom);
	~Pet();

	virtual void Talk() const { cout << "Speak" << endl; }

	void Feed(int food = 4);
	void Play(int fun = 4);

private:
	int m_hunger = 0;
	int m_bored = 0;

protected:
	int const GetMood()
	{
		return m_hunger + m_bored;
	};
	void PassingTime(int time = 1);
};

#endif