#include <iostream>
using namespace std;

void inputDetails(int* n1, int* n2);

void outputDetails(int& integer1, int& integer2, int* pointer);

int main()
{
	int num1, num2;
	int* pNum = &num1;
	
	inputDetails(&num1, &num2);

	outputDetails(num1, num2, pNum);

	pNum = &num2;
	outputDetails(num1, num2, pNum);
	pNum = nullptr;
}

void inputDetails(int* n1, int* n2)
{
	cout << "Enter number 1" << endl;
	cin >> *n1;
	cout << "\nEnter number 2" << endl;
	cin >> *n2;
	cout << endl;
}

void outputDetails(int& integer1, int& integer2, int* pointer)
{
	cout << integer1 << endl << &integer1 << endl;
	cout << integer2 << endl << &integer2 << endl;
	cout << pointer << endl << *pointer << endl << &pointer << endl << endl;
}