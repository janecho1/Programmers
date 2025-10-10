#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len�� �迭 num_list�� �����Դϴ�.
int* solution(int num_list[], size_t num_list_len, int n) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    int* answer = malloc(sizeof(int) * num_list_len+(n-1));
    int cnt = 0;
    if (answer == NULL)return NULL;
    for (int i = n - 1; i <= num_list_len; i++) {
        answer[cnt] = num_list[i];
        cnt++;
    }
    return answer;
}

int main() {
    int num_list_len, n;
    scanf("%d %d", &num_list_len, &n);
    int* num_list = malloc(sizeof(int)*num_list_len);
    if (num_list==NULL)return NULL;

    for (int i = 0; i < num_list_len; i++) {
        scanf("%d", &num_list[i]);
    }

	int* result = solution(num_list, num_list_len, n);

    for (int i = 0; i < num_list_len - (n-1); i++) {
        printf("%d", result[i]);
    }

    free(num_list);
    free(result);

    return 0;
}