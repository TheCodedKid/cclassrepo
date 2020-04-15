#include <iostream>
#include <time.h>
using namespace std;
int flip(){
	int randnum;
	randnum = rand() % 2 + 1;
	return randnum;
}
int main() {
	int random = 0, tails = 0, heads = 0;
	srand((time(0)));

	for (int i = 1; i <= 100; i++) {
		random = flip();
		if (random == 1)
			heads++;
		else
			tails++;

	}
	cout << "Heads: " << heads << " Tails: " << tails;
}