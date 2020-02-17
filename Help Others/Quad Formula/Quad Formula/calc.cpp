#include <iostream>
using namespace std;

int main() {
	int a;
	string res = "";
	cout << "Please enter a integer to check for being even or odd.";
	cin >> a;

	if (a < 0) {
		res = "negative";
	}
	else {
		res = "positive";
	}
	
	if (a % 2 == 0) {
		cout << "The entered integer Sis " + res + " even.";
	}
	else {
		cout << "The entered integer is " + res + " odd.";
	}
}