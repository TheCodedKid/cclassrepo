#include <iostream>
using namespace std;

int main(){
	int num;
	cout << "Enter an integer, please: ";
	cin >> num;

	if (num > 0 && num % 2 == 0) {
		cout << num << " is positive, even\n";
	}
	else if (num > 0 && num % 2 != 0) {
		cout << num << " is positive, odd\n";
	}
	else if (num < 0 && num % 2 == 0) {
		cout << num << " is negative, even\n";
	}
	else if (num < 0 && num % 2 != 0) {
		cout << num << " is negative, odd\n";
	}
	else if (num == 0) {
		cout << num << " is zero, even\n";
	}
	return 0;
}