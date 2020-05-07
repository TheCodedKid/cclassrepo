#include <iostream>
using namespace std;

int main() {
    int counters[9] = {0,0,0,0,0,0,0,0,0}, income = 100;
    while (income != 0) {
        cout << "\nPlease enter the income for an employee (0 to quit):";
        cin >> income;
        if (income == 0) {}
        else if (income < 300) {
            counters[0]++;
        }
        else if (income < 400) {
            counters[1]++;
        }
        else if (income < 500) {
            counters[2]++;
        }
        else if (income < 600) {
            counters[3]++;
        }
        else if (income < 700) {
            counters[4]++;
        }
        else if (income < 800) {
            counters[5]++;
        }
        else if (income < 900) {
            counters[6]++;
        }
        else if (income < 1000) {
            counters[7]++;
        }
        else {
            counters[8]++;
        }
    }
    cout << endl;
    for (int i = 0; i < 9; ++i) {
        if (i < 8) {
            cout << "$" << i + 2 << "00-" << i + 2 << "99: " << counters[i] << endl;
        }
        else {
            cout << "over $1000: " << counters[i];
        }
    }
    return 0;
}