#include <iostream>

using namespace std;

bool isPerfect(int testNum) {
    int i = 1, total = 0;
    while (i < testNum && total <= testNum) {
        if (testNum % i == 0) {
            total += i;
        }
        i++;
    }
    return total == testNum;
}

int main() {
    for (int i = 1; i <= 10000; ++i) {
        if (isPerfect(i)) {
            cout << i << " is a perfect number" << endl;
        }
    }
    return 0;
}