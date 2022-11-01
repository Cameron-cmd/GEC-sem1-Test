#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int myArray[10];
	int smallestNumber;
	int smallestPos;
	cout << "Please input 10 integers" << endl;
	for (int i = 0; i < 10; i++) 
	{
		cin >> myArray[i];
	}
	smallestNumber = myArray[0];
	smallestPos = 0;
	for (int i = 1; i < 10; i++)
	{
		if (myArray[i] < smallestNumber)
		{
			smallestNumber = myArray[i];
			smallestPos = i;
		}
		
			
	}
	cout << "The smallest number is " << smallestNumber << ", which is in position " << smallestPos + 1;
	return 0;
}