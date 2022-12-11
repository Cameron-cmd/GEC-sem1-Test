#include "Pet.h"
#include <iostream>

using namespace std;

Pet::Pet(int hunger, int boredom)
{
	cout << "A new pet has arrived" << endl;
	m_hunger = hunger;
	m_bored = boredom;
}
void Pet::Feed(int food = 4)
{
	cout << "Burp!" << endl;
	m_hunger -= food;
	if (m_hunger < 0)
		m_hunger = 0;
	PassingTime();
}
void Pet::Play(int fun = 4)
{
	cout << "Fun!" << endl;
	m_bored -= fun;
	if (m_bored < 0)
		m_bored = 0;
	PassingTime();
}
void Pet::Talk() const
{
	cout << "I am your pet and I feel ";
	int mood = GetMood();
	if (mood > 15)
		cout << "mad";
	else if (mood > 10)
		cout << "frustrated";
	else if (mood > 5)
		cout << "okay";
	else
		cout << "happy";
	PassingTime();
}
void Pet::PassingTime(int time = 1)
{
	m_hunger += time;
	m_bored += time;
}