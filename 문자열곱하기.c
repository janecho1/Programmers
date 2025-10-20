#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int k) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(strlen(my_string) * k + 1);
    strcpy(answer, my_string);

    for (int i = 1; i < k; i++) {
        strcat(answer, my_string);
    }

    return answer;
}

int main() {
    char my_string[20];
    for (int i = 0; i < 20; i++) {
        scanf("%c", my_string[i]);
    }
    int k;
    scanf("%d", &k);

    solution(my_string, k);
    
    return 0;
}


//NULL 문자 공간 추가하기