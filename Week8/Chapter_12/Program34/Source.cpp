#include <iostream>
using namespace std;

void comma2blank(char* textToChange);

int main()
{
	char* text = new char;
	
	cout << "Please input text but make sure the spaces are commas\n";
	cin >> text;

	comma2blank(text);

	cout << text << endl;

	return 0;
}

void comma2blank(char* textToChange)
{

	int count = 0;
	while (textToChange[count])
	{
		count++;
	}
	
	for (int i = 0; i < count; i++)
	{
		if (textToChange[i] == ',')
		{
			textToChange[i] = ' ';
		}
	}
}