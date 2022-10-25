#include <iostream>
using namespace std;

void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal);

bool oddOrEven(int n);

int main() {
	int var;
	int numOfOdd = 0;
	int oddTotal = 0;
	int numOfEven = 0;
	int evenTotal = 0;
	int list[10];

	cout << "Please input 10 numbers to be checked" << endl << endl;
	for (int i = 0; i < 10; i++) {
		cin >> var;
		list[i] = var;
	}
	for (int i = 0; i < 10; i++) {
		if (oddOrEven(list[i])) {
			numOfEven++;
			evenTotal += list[i];
		}
		
		else if (!oddOrEven(list[i])) {
			oddTotal++;
			numOfOdd += list[i];
		}

	}
	outputResults(numOfOdd, oddTotal, numOfEven, evenTotal);
	return 0;
}

bool oddOrEven(int n) {
	if (n % 2 == 0)
		return true;
	else if (n % 2 != 0)
		return false;
}

void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal) {
	cout << "There were " << numOfOdd << " odd numbers" << endl;
	cout << "The total of the odd numbers is" << oddTotal << endl;
	cout << "There were " << numOfEven << " even numbers" << endl;
	cout << "The total of the even numbers is" << evenTotal << endl;
}