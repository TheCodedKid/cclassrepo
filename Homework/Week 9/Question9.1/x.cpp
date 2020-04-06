#include <iostream>
using namespace std;

int main() {
	int x;
	x = fabs(7.5);
	cout << x <<"\n";
	x = floor(7.5);
	cout << x << "\n";
	x = fabs(0.0);
	cout << x << "\n";
	x = ceil(0.0);
	cout << x << "\n";
	x = fabs(-6.4);
	cout << x << "\n";
	x = ceil(-6.4);
	cout << x << "\n";
	x = ceil(-fabs(-8 + floor(-5.5)));
	cout << x << "\n";
}