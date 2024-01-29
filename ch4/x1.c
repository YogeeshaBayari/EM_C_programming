#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100

void push(int );
int pop();

int stack[MAX_STACK_SIZE];
int top = -1;



int eval(char *expression) {
    for (int i = 0; expression[i] != '\0'; i++) {
        if (isdigit(expression[i])) {
            push(expression[i] - '0');
        } else {
            int op2 = pop();
            int op1 = pop();

            switch (expression[i]) {
                case '+':
                    push(op1 + op2);
                    break;
                case '-':
                    push(op1 - op2);
                    break;
                case '*':
                    push(op1 * op2);
                    break;
                case '/':
                    if (op2 != 0) {
                        push(op1 / op2);
                    } else {
                        printf("Error: Division by zero\n");
                        exit(EXIT_FAILURE);
                    }
                    break;
                case '\n':
                    printf("Top of stack: %d\n", stack[top]);
                    break;
                default:
                    printf("Invalid Expression\n");
                    exit(EXIT_FAILURE);
            }
        }
    }
    return pop();
}

int main() {
    char postfix[100];
    printf("Enter the postfix expression: ");
    scanf("%s", postfix);
    int result = eval(postfix);
    printf("Result: %d\n", result);
    return 0;
}

