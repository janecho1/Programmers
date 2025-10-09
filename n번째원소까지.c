#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int* solution(int num_list[], size_t num_list_len, int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = malloc(sizeof(int) * num_list_len);

    if (answer == NULL) {
        printf("메모리 할당 실패!");
        return NULL;
    }

    for (int i = 0; i < n; i++) {
        answer[i] = num_list[i];
    }

    return answer;
}

int main() {
   
    int num_list_len, n;
    scanf("%d", &num_list_len);
    int* num_list = malloc(sizeof(int)*num_list_len);

    if (num_list == NULL) {
        printf("메모리 할당 실패!");
        return 1;
    }

    for (int i = 0; i < num_list_len; i++) {
        scanf("%d", &num_list[i]);
    }
    scanf("%d", &n);

    int* result = solution(num_list, num_list_len, n);
    
    for (int i = 0; i < n; i++) {
        printf("%d", result[i]);
    }

    free(result);
    free(num_list);

    return 0;
}