#include <iostream>
using namespace std;

int main(){
	int input = 0, type, quantity = 0;
	double total = 0.0;
	cout << "Enter -1 to both prompts to exit program. Otherwise follow instructions.\n";
	while (input != -1) {
		cout << "Of which product was sold (Product Number): ";
		cin >> input;
		type = input;
		cout << "How many were sold: ";
		cin >> input;
		quantity = input;


		if (type == 1)
			total += 2.98 * quantity;
		else if (type == 2)
			total += 4.50 * quantity;
		else if (type == 3)
			total += 9.98 * quantity;
		else if (type == 4)
			total += 4.49 * quantity;
		else if (type == 5)
			total += 6.87 * quantity;
		else if (type > 5 | type < -1)
			cout << "Invalid input\n";

		cout << "The total so far is: $" << total << "\n";
	}
}