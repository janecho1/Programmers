#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len�� �迭 num_list�� �����Դϴ�.
int* solution(int num_list[], size_t num_list_len, int n) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    int* answer = malloc(sizeof(int) * num_list_len);

    if (answer == NULL) {
        printf("�޸� �Ҵ� ����!");
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
        printf("�޸� �Ҵ� ����!");
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