#include <iostream>
using namespace std;

int main() {
	int arr[5];
	int input, n;
	n = 0;
	cout << "Please enter a five digit integer: ";
	cin >> input;

	for (int i = 1; i < 100000; i = i * 10) {
		arr[n] = input % 10;
		input = input / 10;
		n++;
	}

	for (int j = 4; j >= 0; j--) {
		cout << arr[j] << "   ";
	}
}