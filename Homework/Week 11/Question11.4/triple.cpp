#include <iostream>
using namespace std;

void tripleByValue(int value){
	value *= 3;
}

int tripleByReference(int value) {
	return (value * 3);
}

int main() {
    int count = 3;
    cout << "count = 3\n";

    tripleByValue(count);
    cout << "count now equals " << count << endl;
    cout << "the value returned by the reference is " << tripleByReference(count);
    return 0;
}