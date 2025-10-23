#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	unsigned long long n;
	unsigned long long cnt;
	scanf("%d", &n);
	cnt = n * n;
	printf("%lld\n%lld", cnt, 2);

	return 0;
}