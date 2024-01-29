#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 100

extern int top;
extern int stack[MAX_STACK_SIZE];

void push(int n) {
    if (top == MAX_STACK_SIZE - 1) {
        printf("Stack is full\n");
        exit(EXIT_FAILURE);
    } else {
        stack[++top] = n;
    }
}

int pop() {
    if (top == -1) {
        printf("Stack is empty\n");
        exit(EXIT_FAILURE);
    } else {
        return stack[top--];
    }
}
