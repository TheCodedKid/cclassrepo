#include <iostream>
using namespace std;

int main() {
	double score;
	cout << "Please enter a score to be calculated: \n";
	cin >> score;


	if (score < 60)
		cout << "F";
	else if (score >= 60 && score < 70)
		cout << "D";
	else if (score >= 70 && score < 80)
		cout << "C";
	else if (score >= 80 && score < 90)
		cout << "B";
	else if (score >= 90)
		cout << "A";
}