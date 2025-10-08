#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num, int n) {

    return !(num % n);
}

int main() {
    int num, n;
    scanf("%d %d", &num, &n);

    solution(num, n);
}