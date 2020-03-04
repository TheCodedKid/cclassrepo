#include <iostream>
using namespace std;

int main() {
	cout << "Type and input between 100 and 0 recieve a letter grade. Otherwise, enter -1 to exit the program." << endl;
	int input = 0;
	string grade = "";
	while (input != -1) {
		cin >> input;
		if (input < -1 | input > 100)
			cout << "Please print a valid integer between 100 and 0." << endl;

		if (input <= 100 & input >= 95)
			grade = "A";
		else if (input < 95 & input >= 90)
			grade = "A-";
		else if (input < 90 & input >= 85)
			grade = "B";
		else if (input < 85 & input >= 80)
			grade = "B-";
		else if (input < 80 & input >= 75)
			grade = "C";
		else if (input < 75 & input >= 70)
			grade = "C-";
		else if (input < 70 & input >= 60)
			grade = "D";
		else if (input < 60 & input >= 0)
			grade = "F";

		cout << "Letter grade is: " << grade << endl;
		cout << "Enter in another number for a letter grade output. Enter -1 to exit the program." << endl;
	}
}