#include <iostream>

using namespace std;

int main()
{
	const float pi = 3.14159;
	float area;
	float radius;

	radius = 25.0f;
	area = pi * radius * radius;
	
	cout << "The area of a circle with a radius of " << radius << " is " << area << endl;

	cin.get();

	return 0;
}