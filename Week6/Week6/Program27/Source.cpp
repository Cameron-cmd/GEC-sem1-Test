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


}