#include <iostream>
using namespace std;

int main() {
	int playerLife = 100;
	int damage = 0;
	
	for (int i = 1; i <= 10; i++) {
		cout << "HP: " << playerLife << endl;
		cout << "Question " << i << ": How much damage shall I deal?\n";
		cin >> damage;
		playerLife -= damage;
		if (playerLife <= 0) {
			cout << "Early end. Player Died!" << endl;
			exit(0);
		}
	}
	cout << "All questions asked. Player survived!" << endl;
	return 0;
}