#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int a[1000000];
int main() {
	int n, k;
	int tmp, j, sum=0;
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	for (int i = 1; i < n; i++) {
		tmp = a[i];
		j = i-1;
		while (a[j] > tmp && j >= 0) {
			a[j + 1] = a[j];
			sum+=1;
			if (sum == k) {
				printf("%d", a[j+1]);
			}
			j -= 1;
		}
		a[j + 1] = tmp;
		if (j + 1 != i) sum+=1;
		if (sum == k) {
			printf("%d", tmp);
		}
	}

	if (sum < k) {
		printf("-1");
	}


	return 0; 
}