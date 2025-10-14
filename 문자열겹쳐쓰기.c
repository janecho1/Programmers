//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//#include <string.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
//char* solution(const char* my_string, const char* overwrite_string, int s) {
//    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
//    char* my_string_s = malloc(strlen(my_string) + 1);
//    my_string_s = strcpy(my_string_s, my_string);
//
//    char* overwrite_string_s = malloc(strlen(overwrite_string) + 1);
//    overwrite_string_s = strcpy(overwrite_string_s, overwrite_string);
//
//    strncpy(my_string_s + s, overwrite_string_s, strlen(overwrite_string_s));
//
//    free(overwrite_string_s);
//
//    return my_string_s;
//}
//
//int main() {
//    char* my_string;
//    char*overwrite_string;
//    int s;
//    char buffer[100];
//    scanf("%99s", buffer);
//    int len = strlen(buffer);
//    my_string = malloc(len);
//    strcpy(my_string, buffer);
//    scanf("%99s", buffer);
//    len = strlen(buffer);
//    overwrite_string = malloc(len);//굳이 동적할당 해야하는지, 그냥 바로 대입하면 안되나?
//	strcpy(overwrite_string, buffer);   
//    
//	scanf("%d", &s);    
//	char* answer = solution(my_string, overwrite_string, s);
//
//	printf("%s\n", answer); 
//
//    free(answer);
//    free(my_string);
//    free(overwrite_string);
//
//    return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, const char* overwrite_string, int s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = malloc(strlen(my_string)+1);
    strcpy(answer, my_string);
    int len = strlen(overwrite_string) < strlen(answer) - (s + 1) ? strlen(overwrite_string) : strlen(answer) - (s+1);
    memcpy(answer + s, overwrite_string, len);
    //, strlen(answer) - s 복사 길이는 overwrite_string의 길이와 answer에서 남은 공간 크기 중 더 작은 값
    //안전하게 하려면 삼항연산자 ㄱㄱ
    return answer;
}

int main() {
    char* my_string;
    char* overwrite_string;
    int s;
    char buffer[100];
    scanf("%99s", buffer);
    int len = strlen(buffer);
    my_string = malloc(len+1);
    strcpy(my_string, buffer);
    scanf("%99s", buffer);
    len = strlen(buffer);
    overwrite_string = malloc(len+1);//굳이 동적할당 해야하는지, 그냥 바로 대입하면 안되나?
    strcpy(overwrite_string, buffer);

    scanf("%d", &s);
    char* answer = solution(my_string, overwrite_string, s);

    printf("%s\n", answer);

    free(answer);
    free(my_string);
    free(overwrite_string);

    return 0;
}
