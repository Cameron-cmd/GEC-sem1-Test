#include <iostream>
#include <string>
using namespace std;

int main()
{
	int totalSpace = 0;
	bool initializer = true;
	char arr[256];
	cout << "Please enter your full name" << endl;
	cin.getline(arr, 256);

	for (int i = 0; i < strlen(arr); i++)
	{
		if ((initializer == true) && (totalSpace != 2))
		{
			cout << arr[i];
			cout << ' ';
			initializer = false;
			continue;
		}
		else if (initializer == true && totalSpace == 2)
		{
			cout << arr[i];
		}

		if (arr[i] == ' ')
		{
			initializer = true;
			totalSpace++;
		}
	}
}