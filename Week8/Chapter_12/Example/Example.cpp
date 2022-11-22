#include <iostream>
using namespace std;

void swap(int* pNum1, int* pNum2);

int main()
{
	int num1 = 5, num2 = 10;

	cout << "MAIN: Before swap." << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	swap(&num1, &num2);

	cout << "MAIN: After swap." << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	cin.get();

	return 0;
}

void swap(int* pNum1, int* pNum2)
{
	int temp;

	cout << "SWAP: Before swap." << endl;
	cout << "num1 = " << pNum1 << endl;
	cout << "num2 = " << pNum2 << endl;

	temp = *pNum1;
	*pNum1 = *pNum2;
	*pNum2 = temp;

	cout << "SWAP: After swap." << endl;
	cout << "num1 = " << pNum1 << endl;
	cout << "num2 = " << pNum2 << endl;
}