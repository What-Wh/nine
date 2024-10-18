#include <iostream>
#define SIZE 10

using namespace std;

int main()
{
	//1 task
	/*int a[SIZE] = { 1, 5, 13, 6, 7, 12, 8, 19, 20, -3 };
	int b[SIZE] = { 1, 6, 40, -5, -7, 13, 21, 69, 3, 15 };
	int c[SIZE];
	int* pa = &a[0];
	int* pb = &b[0];
	bool g;
	int k = 0;
	for (int i = 0; i < SIZE; i++) {
		g = false;
		for (int j = 0; j < SIZE; j++) {
			if (a[i] == b[j]) {
				g = true;
				break;
			}
		}
		if (g == false) {
			c[k] = a[i];
			k += 1;
		}
	}
	for (int i = 0; i < k; i++) {
		cout << c[i] << " ";
	}*/


	//2 task
	/*int a[SIZE] = { 1, 5, 13, 6, 7, 12, 8, 19, 20, -3 };
	int b[SIZE] = { 1, 6, 40, -5, -7, 13, 21, 69, 3, 15 };
	int c[100];
	int* pa = &a[0];
	int* pb = &b[0];
	bool g;
	int k = 0;
	for (int i = 0; i < SIZE; i++) {
		g = false;
		for (int j = 0; j < SIZE; j++) {
			if (a[i] == b[j]) {
				g = true;
				break;
			}
		}
		if (g == false) {
			c[k] = a[i];
			k += 1;
		}
	}
	for (int i = 0; i < SIZE; i++) {
		g = false;
		for (int j = 0; j < k; j++) {
			if (c[j] == b[i]) {
				g = true;
				break;
			}
		}
		if (g == false) {
			c[k] = b[i];
			k += 1;
		}
	}
	for (int i = 0; i < k; i++) {
		cout << c[i] << " ";
	}*/
}