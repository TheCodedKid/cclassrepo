#include <iostream>
#include <math.h>
using namespace std;

int main() {
	//declare vars
	double height, weight;
	//set vars to respective values
	cout << "Please enter your weight (kilogram):";
	cin >> weight;
	cout << "Please enter your height (meters): ";
	cin >> height;

	//Final Calculation
	cout << "Your BMI is: " << (pow(height, 2) * weight);
}