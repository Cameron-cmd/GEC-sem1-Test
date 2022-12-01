#include <iostream>
using namespace std;

void plus25(int& rNUum);

void minus25(int& rNum);


int main()
{
	int num;
	cout << "Input integer = ";
	cin >> num;
	cout << "Number = " << num;
	plus25(num);

	cout << "\nNumber + 25 = " << num << endl;

	cout << "\nInput integer = ";
	cin >> num;
	cout << "Number = " << num;
	minus25(num);

	cout << "\nNumber - 25 = " << num << endl;

	cin.get();

	return 0;
}

void plus25(int& rNum)
{
	rNum += 25;
}

void minus25(int& rNum)
{
	rNum -= 25;
}