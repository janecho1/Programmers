#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* str1, const char* str2) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = strlen(str1) + strlen(str2) + 1;
    int a = 0;
    char* result = malloc(len + 1);
    for (int i = 0; i < len; i++) {
        result[i] = str1[a];
        i += 1;
        result[i] = str2[a];
        a++;
    }
    result[len - 1] = NULL;

    return result;
}

int main() {
    char buffer[100];
    scanf("%s", buffer);
    int len = strlen(buffer);
    char* str1 = malloc(len+1);
    strcpy(str1, buffer);
    scanf("%s", buffer);
    len = strlen(buffer);
    char* str2 = malloc(len+1);
    strcpy(str2, buffer);
    printf("%s", solution(str1, str2));

    free(str1);
    free(str2);

    return 0;
}