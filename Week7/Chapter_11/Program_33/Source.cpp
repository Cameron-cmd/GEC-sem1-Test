#include <iostream>
#include <string>
using namespace std;

int main()
{
	struct personDetails
	{
		string name;
		int age;
		string telNum;

		personDetails(string name1, int age1, string telNum1)
		{
			name = name1;
			age = age1;
			telNum = telNum1;
		}

		void printDetails()
		{
			cout << endl << name << endl;
			cout << age << endl;
			cout << telNum << endl;
		}
	};

	string name;
	int age;
	string telNum;

	cout << "Please Enter your name, age and telephone number one after eachother" << endl;
	getline(cin, name);
	cin >> age;
	cin >> telNum;

	personDetails pData = personDetails(name, age, telNum);
	pData.printDetails();

	return 0;

}