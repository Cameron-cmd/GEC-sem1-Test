#include <iostream>
using namespace std;
/*
int main()
{
	int num1 = 12;
	int num2 = 5;
	int num3 = 7;
	bool a = false;
	bool b = true;
	
	if (a)
	{
		num1 += 1;
		num2 += 15;
	}
	else if (b)
	{
		num1++;
		num3 += 20;
	}
	else
	{
		num1--;
		num2--;
		num3--;
	}
	cout << num1 << endl << num2 << endl << num3 << endl;

}
*/

int main()
{
	char playerInput = 'a';
	cout << "Do you want to play again? y or n." << endl;
	cin >> playerInput;
	switch (playerInput)
	{
	case 'y':
		cout << "you chose to play again";
		break;
	case 'n':
		cout << "goodbye";
		break;
	default:
		cout << "that's not y or n";
	break;
	}
}
