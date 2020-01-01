#include <iostream>
#include <string>

using namespace std;

int main() {
	string playerName;
	int age;
	cout << "What is yo name, Sir Knight??! \n";
    cin >> playerName;

	cout <<	"Welcome to the club, Sir : " << playerName << "\n";
	cout << "How old are you ? \n";
	cin >> age;
	//cout << "You are " << age << " years old! \n";
	if (age >= 90) {
		cout << "Rest in peace, old maan! \n";
	}
}