#include <iostream>
using namespace std;

int main() {
	cout << "* * * * * * * * \n";
	cout << " * * * * * * * * \n";
	cout << "* * * * * * * * \n";
	cout << " * * * * * * * * \n";
	cout << "* * * * * * * * \n";
	cout << " * * * * * * * * \n";
	cout << "* * * * * * * * \n";
	cout << " * * * * * * * * \n";

	for (int i = 0; i < 8; ++i) {
		for (int j = i; j < i+16; ++j) {
			if (j % 2 == 0) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}