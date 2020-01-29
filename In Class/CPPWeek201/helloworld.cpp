#include <iostream>
using namespace std;
//namespace creates a global scope, very similar to global call in python from my understanding
int main() {
	cout << "Hello, World";
	for (int i = 0; i < 4; i++) {
		cout << "\n";
	}

	int n = rand() % 4;
	printf(str(n));
	switch (n) {
	case 1: 
		printf ("uwu");
		break;
	case 2: 
		printf("hehe");
		break;
	case 3:
		printf("will is smelly");
		break;
	case 4:
		printf("printf is much better than namespace for what we are doing atm");
		break;
	}
}