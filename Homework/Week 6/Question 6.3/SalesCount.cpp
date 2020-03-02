#include <iostream>
using namespace std;

int main() {
	int large, i, check;
	large = INT_MIN;
	i = 0;
	cout << "Please enter a number, followed by Enter 10 times.";
	while (i < 9) {
		cin >> check;
		if (check > large) {
			large = check;
		}
		i++;
	}
	cout << "The largest number in the set is: " << large;
}