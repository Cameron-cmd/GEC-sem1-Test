#include <iostream>
using namespace std;

int main(){

	bool loopVar = true;
	float numOfVals = 2.0f;
	float valueOne = 0;
	float valueTwo = 0;
	float meanVal = 0;

	cout << "Input the first number" << endl;
	cin >> valueOne;
	cout << "Input the second number" << endl;
	cin >> valueTwo;
	meanVal = (valueOne + valueTwo) / numOfVals;
	cout << meanVal << " is the average value" << endl;

	while (loopVar == true)
	{
		cout << "input new value to add to mean calculation" << endl;
		cin >> valueOne;
		meanVal = ((meanVal * numOfVals) + valueOne) / (numOfVals + 1);
		numOfVals++;
		cout << meanVal << " is the new mean value" << endl;
	}
}