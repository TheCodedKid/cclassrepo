#include <iostream>
using namespace std;

int main() {
	//Answer to A
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (i <= j) {
				printf(" ");
			}
			else {
				printf("*");
			}
		}
		printf("\n");
	}
	//Answer to B
	for (int i = 0; i < 10; i++) {
		for (int j = 10; j > 0; j--) {
			if (i <= j) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}

	//Answer to C
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (i <= j) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	//Answer to D
	for (int i = 0; i < 10; i++) {
		for (int j = 10; j > 0; j--) {
			if (i + 2 <= j) {
				printf(" ");
			}
			else {
				printf("*");
			}
		}
		printf("\n");
	}



	//Extra Credit
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (i <= j) {
				printf(" ");
			}
			else {
				printf("*");
			}
		}
		printf("\t");

		for (int j = 10; j > 0; j--) {
			if (i <= j) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\t");

		for (int j = 0; j < 10; j++) {
			if (i <= j) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\t");

		for (int j = 10; j > 0; j--) {
			if (i + 2 <= j) {
				printf(" ");
			}
			else {
				printf("*");
			}
		}
		printf("\n");
	}
		
}