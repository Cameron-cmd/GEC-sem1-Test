#include <iostream>
using namespace std;

int main()
{
	char uinput = 'a';
	int numinput = 0;

	cout << "Pease tell me your status with 's' fpr student, 't' for teacher or 'o' for other." << endl;
	cin >> uinput;
	cout << "Input the game you would like, 1 or 2" << endl;
	cin >> numinput;

	if (uinput == 's' || uinput == 't')
		if (numinput == 1)
			cout << "You are eligible for a 20% discount" << endl;
		else if (numinput == 2)
			cout << "You are eligible for 10% discount" << endl;
		else
			cout << "You have input an invalid game number" << endl;
	else
		cout << "You are not eligible for a game discount" << endl;

	return 0;

}