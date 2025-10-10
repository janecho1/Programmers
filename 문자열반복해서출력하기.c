#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    int a;
    scanf("%s %d", s1, &a);

    int cnt = 0;
    while (cnt < a) {
        printf("%s", s1);
        cnt++;
    }
    return 0;
}