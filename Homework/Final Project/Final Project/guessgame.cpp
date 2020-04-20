#include <iostream>
#include <time.h>
using namespace std;

bool correct = false;

int numgen() {
	srand(time(0));
	return rand() % 100 + 1;
}

string guessinggame(int guess, int random) {
	string ret = "";
	if (guess == random) {
		ret = "\nYes! That is the number!\n";
		correct = true;
	}
	else if (guess <= 0 || guess > 100) {
		ret = "\nInvalid Range. The random number is between 1 and 100.\n";
	}
	else if (guess > random) {
		ret = "\nToo high.\n";
	}
	else if (guess < random) {
		ret = "\nToo low.\n";
	}
	return ret;
}


int main() {
	cout << "Welcome to the guessing game!\n (You can exit the game by entering 0.)\n";
	int enter = -99;
	int random = numgen();
	cout << "I am thinking of a number between 1 and 100...\n What's your guess?\n";
	while (enter != 0) {
		cin >> enter;
		cout << guessinggame(enter, random);
		if (correct) {
			cout << "Would you like to play again? (1 is yes, 0 is no)\n";
			cin >> enter;
			if (enter) {
				cout << "I am thinking of another number between 1 and 100...\n";
				correct = false;
				random = numgen();
			}
		}
	}
}