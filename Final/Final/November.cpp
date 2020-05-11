#include <iostream>
#include <time.h>
using namespace std;

int GetRandom(int a, int b) {
	return (a + (rand() % (b - a + 1)));
}

int GetCount(int arr[], int length, int m) {
	int count = 0;
	for (int i = 0; i < length; i++) {
		if (arr[i] <= m) {
			count++;
		}
	}
	return count;
}

void HighLow(int arr[], int length, int* min, int* max, int* minDay, int* maxDay) {
	for (int i = 0; i < length; i++) {
		if (arr[i] < *min) {
			*min = arr[i];
			*minDay = i;
	}
		if (arr[i] > * max) {
			*max = arr[i];
			*maxDay = i;
		}
	}
}

int main() {
	int a, b;
	int min = INT_MAX;
	int max = 0;
	int minDay = 0;
	int maxDay = 0;
	int nov[30];

	srand(time(0));
	for (int i = 0; i < 30; i++) {
		nov[i] = GetRandom(21, 45);
	}

	int length = sizeof(nov) / sizeof(int);

	HighLow(nov, length, &min, &max, &minDay, &maxDay);

    cout << "Date:\t";
    for (int j = 1; j < 11; ++j) {
        if (j < 10) {
            cout << "Nov.0" << j << "\t";
        }
        else {
            cout << "Nov." << j << "\t";
        }
    }
    cout << "\nTemp:\t";
    for (int j = 0; j < 10; ++j) {
        cout << nov[j] << "\t";
    }

    cout << "\nDate:\t";
    for (int j = 11; j < 21; ++j) {
        if (j < 10) {
            cout << "Nov.0" << j << "\t";
        }
        else {
            cout << "Nov." << j << "\t";
        }
    }
    cout << "\nTemp:\t";
    for (int j = 10; j < 20; ++j) {
        cout << nov[j] << "\t";
    }

    cout << "\nDate:\t";
    for (int j = 21; j < 31; ++j) {
        if (j < 10) {
            cout << "Nov.0" << j << "\t";
        }
        else {
            cout << "Nov." << j << "\t";
        }
    }
    cout << "\nTemp:\t";
    for (int j = 20; j < 30; ++j) {
        cout << nov[j] << "\t";
    }

	cout << "\nThe warmest day is Nov." << (1 + maxDay) << " with a temp of " << max << " degrees.\n";
	cout << "The coldest day is Nov." << (1 + minDay) << " with a temp of " << min << " degrees.\n";
	cout << "There are " << GetCount(nov, length, 32) << " days in the month that have a temp at or lower than 32 degrees.";

}