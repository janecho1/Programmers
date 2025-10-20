#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* my_string, int k) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
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


//NULL ���� ���� �߰��ϱ�