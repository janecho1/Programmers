#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include <stdlib.h>
#include <string.h>	

int arr[100];
int main() {
	int n, m, card=0;
	int sum = 0;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			for (int z=j+1; z < n; z++) {
				card = arr[i] + arr[j] + arr[z];
				if (sum < card && card<=m) sum = card;
			}
		}
	}

	printf("%d", sum);

	return 0;
}
// 인덱스가 중복되지 않게 하기 !!