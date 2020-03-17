#include <iostream>
using namespace std;

int main() {
    int space = 4;
    for (int k = 1; k <= 5; k++)
    {
        for (int c = 1; c <= space; c++)
            cout << " ";

        space--;

        for (int c = 1; c <= 2 * k - 1; c++)
            cout << "*";

        cout << "\n";
    }

    space = 1;

    for (int k = 1; k <= 5; k++)
    {
        for (int c = 1; c <= space; c++)
            cout << " ";

        space++;

        for (int c = 1; c <= 2 * (5 - k) - 1; c++)
            cout << "*";

        cout << "\n";
    }
    return 0;
}