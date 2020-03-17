#include <iostream>
using namespace std;

int main() {
	int value = 8;
	switch (value % 2) {
		case 0:
			cout << "Even Integer" << endl;
			break;
		case 1:
			cout << "Odd Integer" << endl;
			break;
	}
}