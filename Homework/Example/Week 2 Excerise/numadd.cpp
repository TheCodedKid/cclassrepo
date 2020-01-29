#include <iostream>
using namespace std;

int main() {
	int a, b, final;
	cout << "Please type in two integer values to be subtracted. \n" << "First Integer : ";
	cin >> a;
	cout << "Second Integer : ";
	cin >> b;
	final = a - b;
	cout << a << " - " << b << " = " << final << "\n";
}