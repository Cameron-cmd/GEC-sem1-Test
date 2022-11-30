#include <iostream>
using namespace std;

int main()
{
	int range = 0;
	char carryOn = 'Y';

	while (carryOn == 'Y')
	{
		cout << "Please input a number between 1 and 10" << endl;
		cin >> range;
		cout << endl;

		for (int i = 0; i < range; i++)
		{
			for (int j = 0; j <= i; j++)
			{
				cout << "* ";
			}
			cout << "\n";
		}
		cout << "\nPress Y to go again or N to stop" << endl;
		cin >> carryOn;
	}
	cout << "Goodbye" << endl;
	cin.get();
	return 0;
}