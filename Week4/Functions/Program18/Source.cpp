#include <iostream>
using namespace std;

void smallestNumber(int a, int b);

float multiplication(int a);

void divide(float a);

int main() {
	int numOne = 0;
	int numTwo = 0;
	int multiNum = 0;
	float floatVar = 0.0f;

	for (int i = 0; i < 3; i++) {
		cout << "Enter your first number:" << endl;
		cin >> numOne;
		cout << "Enter your second number:" << endl;
		cin >> numTwo;
		smallestNumber(numOne, numTwo);
	}

	for (int i = 0; i < 3; i++) {
		cout << "Enter the number to be multiplied" << endl;
		cin >> multiNum;
		floatVar = multiplication(multiNum);
		divide(floatVar);
	}
}

void smallestNumber(int a, int b) {
	if (a < b)
		cout << a << " is the smallest number\n" << endl;
	else if (b < a)
		cout << b << " is the smallest number\n" << endl;
	else if (a == b)
		cout << "Both numbers are the same\n" << endl;
}

float multiplication(int a) {
	return (a * 10);
}

void divide(float  a) {
	float var = (a / 3);
	cout << a << " divided by 3 = " << var << endl << endl;
}