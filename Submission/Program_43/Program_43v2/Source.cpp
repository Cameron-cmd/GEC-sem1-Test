#include <iostream>
#include <fstream>
#include <string>
#include <array>

using namespace std;

void enterScore();
void displayScore();
int check(string& choice);
//array<int,10> readFile();

int main()
{
	array<int,10> arr;
	//arr = readFile();
	bool t = true;
	string choice;
	int intChoice;
	while (t)
	{
		cout << "Please enter: \n1 to Enter a score\n2 to display current scores\n3 to exit\n";
		cin >> choice;
		cout << endl;
		intChoice = check(choice);
		switch (intChoice)
		{
		case 1:
			enterScore();
			break;

		case 2:
			displayScore();
			break;

		case 3:
			return 0;
			break;
		}
	}
}

int check(string& choice)
{
	bool i = true;
	while (i)
	{
		try
		{
			int test = stoi(choice);
			if (test >= 1 && test <= 3)
				return test;
			throw(choice);
		}
		catch (string choice2)
		{
			cout << "Incorrect input\nPlease enter: \n1 to Enter a score\n2 to display current scores\n3 to exit\n";
			cin >> choice;
		}
	}

}
//array<int, 10> readFile()
//{
//	ifstream infile;
//	string line;
//	string a;
//	int b;
//	int count = 0;
//
//	struct generalScore {
//		string name;
//		int score;
//	};
//	struct generalScore list[10];
//
//	infile.open("scores.txt");
//	while (infile >> a >> b) {
//		cerr << a << endl << b << endl;
//		list[count].name = a;
//		list[count].name = b;
//		count++;
//		if (count++ == 10)
//			break;
//	}
//	return list;
//}
void enterScore()
{
	cerr << "enterScore\n" << endl;
}

void displayScore()
{	
	cerr << "displayScore\n" << endl;
}