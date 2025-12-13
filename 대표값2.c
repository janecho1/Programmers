#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a[5];
	int sum = 0, num = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &a[i]);
		sum += a[i];
	}

	int j;
	for (int i = 1; i < 5; i++) {
		int key = a[i];
		j = i - 1;
		while (a[j] > key) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
	}

		//int total = (sizeof(a)) / 2;

		printf("%d\n%d", (sum / 5), a[2]);

		return 0;
	}