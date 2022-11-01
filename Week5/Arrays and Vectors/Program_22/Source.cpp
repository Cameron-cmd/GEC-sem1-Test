#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int myArray[5];
	cout << "Please input 5 numbers" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> myArray[i];
	}
	cout << endl;
	
	sort(myArray, myArray + 5);
	for (int i = 0; i < 5; i++)
		cout << myArray[i] << endl;
	cout << endl;

	sort(myArray, myArray + 5, greater<int>());
	for (int i = 0; i < 5; i++)
		cout << myArray[i] << endl;
	cout << endl;

	int largestNumber = myArray[0];
	int largestPos = 0;
	for (int i = 1; i < 5; i++)
	{
		if (myArray[i] > largestNumber)
		{
			largestNumber = myArray[i];
			largestPos = i;
		}


	}
	cout << "The largest number is " << largestNumber << ", which is in position " << largestPos + 1;
	return 0;
}