#include <iostream>
using namespace std;

int main() {
	int num, small, large;
	cout << "Please input 5 integers.";
	small = INT_MAX;
	large = 0; 
	for (int i = 0; i < 5; i++) {
		cin >> num;
		if (num < small) {
			small = num;
		}
		else if (num > large) {
			large = num;
		}
	}
	cout << "The largest number in the set is " << large << " while the smallest number is " << small;
}