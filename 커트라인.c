#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int a[1000];
int main() {
	int n, k;
	scanf("%d %d", &n, &k);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < k; i++) {
		int max = i; 
		for (int j = i+1; j < n; j++) {
			if (a[max] < a[j]) max = j;
		}
		int tmp = a[i];
		a[i] = a[max];
		a[max] = tmp;
	}
	printf("%d", a[k-1]);

	return 0;
}