#include <iostream>

using namespace std;


void bubbleSort(int* a, int length) {
    bool changesMade = true;
    int pass = 1, place;
    while (changesMade) {
        changesMade = false;
        for (int i = 0; i < length - pass; ++i) {
            if (a[i] > a[i + 1]) {
                changesMade = true;
                place = a[i];
                a[i] = a[i + 1];
                a[i + 1] = place;
            }
        }
        pass++;
    }

}

int main() {

    int length;

    cout << "Enter the length of array to be sorted:";
    cin >> length;

    int a[length];

    cout << "\nPlease enter the list of integers to be sorted:";
    for (int i = 0; i < length; ++i) {
        cin >> a[i];
    }

    bubbleSort(a, length);

    cout << "\nSorted: ";

    for (int j = 0; j < sizeof(a) / sizeof(int); ++j) {
        cout << a[j] << " ";
    }

    return 0;
}
