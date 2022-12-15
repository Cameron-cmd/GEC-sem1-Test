#include <iostream>
#include <string>
using namespace std;

int main()
{
	string testString = "do you know who loves C++ XX does!";
	string name1, name2;

	cout << "Enter your name" << endl;
	getline(cin, name1);
	
	testString.insert(27, name1);
	
	cout << testString << endl;

	testString.erase(27 + name1.length(), 1);
	testString.erase(26, 1);
	cout << testString << endl;
	
	cout << "\nSecond name: ";
	getline(cin, name2);
	while (name2.length() <= name1.length()) 
	{
		cout << "\nMust be longer then the first name\nSecond name: ";
		getline(cin, name2);
	}

	testString.replace(26, name1.length(), name2);
	cout << testString << endl;

	return 0;
}