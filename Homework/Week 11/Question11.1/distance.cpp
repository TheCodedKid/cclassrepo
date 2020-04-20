#include <iostream>
#include <cmath>

using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    return pow(pow(x2 - x1, 2) + pow(y2 - y1, 2), 1.0 / 2.0);
}

int main() {
    double x1, x2, y1, y2;
    cout << "Please enter numbers for the following\nx1:";
    cin >> x1;
    cout << "y1:";
    cin >> y1;
    cout << "x2:";
    cin >> x2;
    cout << "y2:";
    cin >> y2;
    cout << "the distance between the points is: " << distance(x1, y1, x2, y2);
    return 0;
}