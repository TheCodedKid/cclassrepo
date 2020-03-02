#include <iostream>
using namespace std;

int main() {
	int i = 1;
	cout << "N\t10*N\t100*N\t1000*N\n\n";
	while (i < 6) {
		cout << i << "\t" << 10 * i << "\t" << 100 * i << "\t" << 1000 * i << "\n";
		i++;
	}
}