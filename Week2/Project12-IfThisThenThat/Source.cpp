#include <iostream>
using namespace std;

int main()
{
	int rain = 1;
	int snow = 2;
	int inputWeather = 0;
	int inputTemp = 0;

	cout << "Please tell me if it is raining with '1' or snowing with '2'" << endl;
	cin >> inputWeather;
	cout << "What temperature is it?" << endl;
	cin >> inputTemp;

	if (inputWeather == 1)
		if (inputTemp > 15)
			cout << "wear a light raincoat" << endl;
		else
			cout << "wear a thick coat" << endl;
	else if (inputWeather == 2)
		if (inputTemp > 5)
			cout << "wear something warm" << endl;
		else if (inputTemp > 0)
			cout << "wrap up well" << endl;
		else
			cout << "stay home" << endl;
	
	return 0;
}