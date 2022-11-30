#include <iostream>

using namespace std;

int main() {

	bool loopVar = true;
	int numOfVals = 2;
	float valueOne = 0;
	float valueTwo = 0;
	float meanVal = 0;
	float sum = 0;

	cout << "Input the first number" << endl;
	cin >> valueOne;
	cout << "Input the second number" << endl;
	cin >> valueTwo;
	sum = valueOne + valueTwo;
	meanVal = (sum) / numOfVals;
	cout << endl << sum << " is the sum value" << endl;
	cout << meanVal << " is the mean value\n" << endl;

	while (loopVar == true)
	{
		cout << "input new value to add to mean calculation, input 0 to exit" << endl;
		cin >> valueOne;
		
		if (valueOne == 0)
			break;
		else
		{
			sum += valueOne; 
			numOfVals++;
		}

		meanVal = sum / numOfVals;

		cout << endl << sum << " is the new sum value" << endl;
		cout << meanVal << " is the new mean value\n" << endl;
	}

	cin.get();

	return 0;
}