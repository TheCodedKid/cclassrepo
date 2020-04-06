#include <iostream>
using namespace std;

bool isMultiple(int num1, int num2) {
	if (num2 % num1 == 0) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	cout << isMultiple(5, 10) << "\n";
	cout << isMultiple(5, 11) << "\n";
}