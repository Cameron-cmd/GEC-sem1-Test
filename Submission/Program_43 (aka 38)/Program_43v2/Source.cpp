#include <iostream>
#include <fstream>
#include <string>
#include <array>

using namespace std;

void fileCheck();
void enterScore();
void displayScore();
int check(string& choice);
int checkScore(string& score);

int main()
{
	fileCheck();
	bool t = true;
	string choice;
	int intChoice;
	while (t)
	{
		cout << "\nPlease enter: \n1 to Enter a score\n2 to display current scores\n3 to exit\n";
		cin >> choice;
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

void fileCheck()
{
	string a;
	int b;
	ifstream testFile;
	ofstream testFile2;
	try
	{
		
		int i = 0;
		testFile.open("scores.txt");
		testFile >> a >> b;
		if (b >= -1)
		{
			testFile.close();
			return;
		}
		throw(i);
	}
	catch (int b)
	{
		cout << "File is absent making a new one now";
		testFile2.open("scores.txt");
		for (int i = 0; i < 10; i++)
			testFile2 << "Blank " << -1 << endl;
	}
	testFile2.close();
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

int checkScore(string& score)
{
	bool i = true;
	while (i)
	{
		try
		{
			int test = stoi(score);
			if (test >= 1)
				return test;
			throw(score);
		}
		catch (string score2)
		{
			cout << "Invalid score must be greater than 0\nEnter user score: ";
			cin >> score;
		}
	}

}

void enterScore()
{
	fstream inoutfile;
	string line;
	string a;
	int b;
	int count = 0;

	struct generalScore {
		string name;
		int score;
	};

	struct generalScore list[10];

	inoutfile.open("scores.txt");
	while (inoutfile >> a >> b) {
		list[count].name = a;
		list[count].score = b;
		/*cout << list[count].name << " " << list[count].score << endl;*/
		count++;
		if (count == 10)
			break;
	}

	string nameVar;
	string scoreTemp;
	int scoreVar;
	string swap1;
	int swap2;
	cout << endl << "Enter username: ";
	cin >> nameVar;
	cout << endl << "Enter user score: ";
	cin >> scoreTemp;
	scoreVar = checkScore(scoreTemp);

	for (int i = 0; i < 10; i++)
	{
		if (list[i].score < scoreVar)
		{
			swap1 = list[i].name;
			swap2 = list[i].score;
			list[i].name = nameVar;
			list[i].score = scoreVar;
			nameVar = swap1;
			scoreVar = swap2;
		}
		if (list[i].score == -1)
			break;
	}
	inoutfile.close();
	
	ofstream outfile;
	outfile.open("scores.txt");

	for (int i = 0; i < 10; i++) {
		outfile << list[i].name << " " << list[i].score << endl;
	}

	outfile.close();
}

void displayScore()
{	
	ifstream infile;
	string line;
	string a;
	int b;
	int count = 0;

	infile.open("scores.txt");
	int temp = 1;
	cout << endl;
	while (infile >> a >> b) {
		if (b == -1 && temp == 1) {
			cout << "Scoreboard is empty" << endl;
			temp++;
			break;
		}
		temp++;
		if (b != -1)
		{
			cerr << count + 1 << ". " << a << " " << b << endl;
			count++;
		}
		else if (count == 9)
			break;
	}

	infile.close();
}