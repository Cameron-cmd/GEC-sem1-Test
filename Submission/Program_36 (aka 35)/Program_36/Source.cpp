#include <iostream>
using namespace std;

void inputDetails(int* n1, int* n2);

void outputDetails(int& integer1, int& integer2, int* pointer);


int main()
{
	int num1, num2;
	inputDetails(&num1, &num2);

	int* pNum = &num1;

	outputDetails(num1, num2, pNum);

	pNum = &num2;

	outputDetails(num1, num2, pNum);

	cin.get();
	return 0;
}

void inputDetails(int* n1, int* n2)
{
	cout << "Enter integer 1: ";
	cin >> *n1;
	cout << "Enter integer2: ";
	cin >> *n2;
}

void outputDetails(int& integer1, int& integer2, int* pointer)
{
	cout << "\ninteger 1 = " << integer1;
	cout << "\ninteger 1 address = " << &integer1;
	cout << "\ninteger 2 = " << integer2;
	cout << "\ninteger 2 address = " << &integer2;
	cout << "\naddress pointer holds = " << pointer;
	cout << "\nvalue at address pointer points to = " << *pointer;
	cout << "\npointer address = " << &pointer << endl;
}