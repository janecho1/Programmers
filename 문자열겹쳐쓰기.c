#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* my_string, const char* overwrite_string, int s) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    char* my_string_s = malloc(strlen(my_string) + 1);
    my_string_s = strcpy(my_string_s, my_string);

    char* overwrite_string_s = malloc(strlen(overwrite_string) + 1);
    overwrite_string_s = strcpy(overwrite_string_s, overwrite_string);

    strncpy(my_string_s + s, overwrite_string_s, strlen(overwrite_string_s));

    free(overwrite_string_s);

    return my_string_s;
}

int main() {
    char* my_string;
    char*overwrite_string;
    int s;
    char buffer[100];
    scanf("%99s", buffer);
    int len = strlen(buffer);
    my_string = malloc(len);
    strcpy(my_string, buffer);
    scanf("%99s", buffer);
    len = strlen(buffer);
    overwrite_string = malloc(len);//���� �����Ҵ� �ؾ��ϴ���, �׳� �ٷ� �����ϸ� �ȵǳ�?
	strcpy(overwrite_string, buffer);   
    
	scanf("%d", &s);    
	char* answer = solution(my_string, overwrite_string, s);

	printf("%s\n", answer); 

    free(answer);
    free(my_string);
    free(overwrite_string);

    return 0;
}
