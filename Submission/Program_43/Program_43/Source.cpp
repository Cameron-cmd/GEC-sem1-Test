#include <iostream>
#include <fstream>
#include <string>
#include <array>

using namespace std;

void enterScore();
void displayScore();
void check(int& choice);

int main()
{
	bool t = true;
	int choice;
	while (t)
	{
		cout << "Please enter: \n1 to Enter a score\n2 to display current scores\n3 to exit\n";
		cin >> choice;
		check(choice);
		switch(choice)
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

void enterScore()
{
	struct generalScore 
	{
		string name;
		int score;
	};

	bool idk = true;
	int i = 0;
	struct generalScore list[10];
	fstream inoutfile;
	string line;
	inoutfile.open("scores.txt", ios::app);
	while (getline(inoutfile, line))
	{
		if (idk)
		{
			list[i].name = line;
			idk = false;
		}

		else if (!idk)
		{
			list[i].score = stoi(line);
			idk = true;
			i++;
		}
	}
	int score;
	string name;
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter score: ";
	cin >> score;
	generalScore runDown;
	generalScore temp;
	bool cycle = false;
	int f = 0;
	for (int c = 0; c < i; c++);
	{
		if (cycle == true && f != 10)
		{
			temp.name = list[f].name;
			temp.score = list[f].score;
			list[f].name = runDown.name;
			list[f].score = runDown.score;
			runDown.name = temp.name;
			runDown.score = temp.score;
		}
		else if (score > list[f].score)
		{
			cycle = true;
			runDown.name = list[f].name;
			runDown.score = list[f].score;
			list[f].name = name;
			list[f].score = score;
		}
		f++;
	}
	inoutfile.close();
	ofstream fileReset;
	fileReset.open("scores.txt");
	int e = 0;
	for (int d = 0; d < f; d++)
	{
		fileReset << list[e].name << endl;
		fileReset << list[e].score << endl;
		e++;
	}
	fileReset.close();

}

void displayScore()
{
	struct generalScore
	{
		string name;
		int score;
	};
	bool idk = true;
	int i = 0;
	struct generalScore list[10];
	ifstream infile;
	string line;
	infile.open("scores.txt");
	
	getline(infile, line);
	getline(infile, line);


	if (stoi(line) == -858993460)
	{
		cout << "There are currently no scores";
		infile.close();
		return;
	}
	infile.close();
	infile.open("scores.txt");

	while (getline(infile, line))
	{
		if (idk)
		{
			list[i].name = line;
			idk = false;
		}

		else if (!idk)
		{
			list[i].score = stoi(line);
			idk = true;
			i++;
		}

	}
	int f = 0;
	cout << endl;
	while (list[f].score != 0)
	{
		if (list[f].score == -858993460)
			break;
		cout << f + 1 << ". " << list[f].name << " " << list[f].score << endl;
		f++;
	}
	cout << endl;
	infile.close();
}

void check(int& choice)
{
	bool i = true;
	while(i)
	{
		try
		{
			int test = choice;
			if (choice >= 1 && choice <= 3)
				return;
			throw(i);
		}
		catch (bool f)
		{
			cout << "Incorrect input\nPlease enter: \n1 to Enter a score\n2 to display current scores\n3 to exit\n";
			cin >> choice;
		}
	}
}