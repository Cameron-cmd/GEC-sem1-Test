#include <iostream>
#include <algorithm>
using namespace std;

void print(int pos1, string char1, int pos2, string char2);

int main()
{
	array::pair
}

void print(int pos1, string char1, int pos2, string char2)
{
	for (int i = 0; i < 10; i++)
	{
		if (i + 1 == pos1)
			cout << '[' << char1 << ']';

		else if (i + 1 == pos2)
			cout << '[' << char2 << ']';

		else
			cout << '[' << i + 1 << ']';
	}
}