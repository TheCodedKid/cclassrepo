#include <iostream>
using namespace std;

int main(){
	double x, y;

	cout << "Please input two integers.\n";
	cout << "First Int: ";
	cin >> x;
	cout << "Second Int: ";
	cin >> y;

	cout << "The sum of the two integers is: " << (x + y) << ("\n");
	cout << "The difference of the two integers is: " << (x - y) << " or " << (y - x) << ("\n");
	cout << "The product of the two integers is: " << (x * y) << ("\n");
	cout << "The quotient of the two integers is: " << (x / y) << ("\n");
}