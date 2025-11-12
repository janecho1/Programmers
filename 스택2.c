#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Stack {
	int arr[1000000];
	int top;
} stack;

int result[1000000];
int j = 0;

void push(stack* s, int x) {
	s->top++;
	s->arr[s->top] = x;
}

void pop(stack* s) {
	if (s->top != -1) {
		result[j++] = s->arr[s->top];
		s->top--;
	}
	else result[j++] = -1;
}

void size(stack* s) {
	result[j++] = s->top + 1;
}

void isEmpty(stack* s) {
	if (s->top == -1) result[j++] = 1;
	else result[j++] = 0;
}

void top(stack* s) {
	if (s->top != -1)result[j++] = s->arr[s->top];
	else result[j++] = -1;
}

void init(stack* s) {
	s->top = -1;
}

int main() {
	stack s;
	init(&s);

	int x, num;
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		int n;
		scanf("%d", &n);

		if (n == 1) {
			scanf("%d", &x);
			push(&s, x);
		}
		else if (n == 2) pop(&s);
		else if (n == 3) size(&s);
		else if (n == 4) isEmpty(&s);
		else if (n == 5)   top(&s);
	}

	for (int i = 0; i < j; i++) {
		printf("%d\n", result[i]);
	}

	return 0;
}