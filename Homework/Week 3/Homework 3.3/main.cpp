#include <iostream> 
using namespace std;

int main() {

    cout << "Integer   Square   Cube\n";

    for (int i = 0; i < 11; ++i) {

        for (int j = 1; j < 4; ++j) {

            int x = pow(i, j);

            cout << x << "         ";

        }

        cout << "\n";

    }

    return 0;

}

