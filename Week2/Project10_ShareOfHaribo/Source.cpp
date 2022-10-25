#include <iostream>
using namespace std;

int main()
{
	int totGummy = 40;
	int numStudents = 14;
	int gummyPerStudent = 40 / 14;
	int numberLeft = 40 % 14;

	cout << "Students have " << gummyPerStudent << " haribos" << endl;
	cout << "You have " << numberLeft << " haribos" << endl;

	return 0;
}