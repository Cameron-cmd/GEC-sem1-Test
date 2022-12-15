#include "Pet.h"
#include <iostream>

using namespace std;

Pet::Pet(int hunger = 0, int boredom = 0)
{
	cout << "A new pet has arrived" << endl;
	m_hunger = hunger;
	m_bored = boredom;
}
Pet::~Pet()
{
}
void Pet::Feed(int food)
{
	cout << "Burp!" << endl;
	m_hunger -= food;
	if (m_hunger < 0)
		m_hunger = 0;
	PassingTime(1);
}
void Pet::Play(int fun)
{
	cout << "Fun!" << endl;
	m_bored -= fun;
	if (m_bored < 0)
		m_bored = 0;
	PassingTime(1);
}
void Pet::Talk()
{
	cout << "I am your pet and I feel ";
	int mood = GetMood();
	if (mood > 15)
		cout << "mad\n";
	else if (mood > 10)
		cout << "frustrated\n";
	else if (mood > 5)
		cout << "okay";
	else
		cout << "happy\n";
	cerr << "why is this happening" << endl;
	PassingTime(1);
}
int const Pet::GetMood()
{
	return (m_hunger + m_bored);
}
void Pet::PassingTime(int time)
{
	m_hunger += time;
	m_bored += time;
}