#include <iostream>
#include <string>
using namespace std;

int main()
{
	/* check algorithm function stuff */
	string strval;

	cout << "please input a sentence" << endl;
	getline(cin, strval);
	for (int i = 0; i < strval.size(); i++)
	{
		if (strval[i] == 'e')
			strval[i] = 'x';
	}
	cout << strval << endl;
	return 0;

}