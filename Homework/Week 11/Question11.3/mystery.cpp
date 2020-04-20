#include <iostream>
using namespace std;

int mystery(int, int);

int main() {
    int x, y;
    cout << "Enter two integers to determine the mystery number: ";
    cin >> x >> y;
    cout << "The result is " << mystery(x, y) << endl;
}

int mystery(int a, int b) {
    if (b < 0){
        a *= -1;
        b *= -1;
    }
    if (b == 0){
        return 0;
    }
    else {
        return a + mystery(a, b - 1);
    }
}