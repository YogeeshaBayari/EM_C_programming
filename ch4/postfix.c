#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100

int stack[MAX_STACK_SIZE];
int top = -1;

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

<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
2nd version

<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

    #include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100

double stack[MAX_STACK_SIZE];
int top = -1;

void push(double n) {
    if (top == MAX_STACK_SIZE - 1) {
        printf("Error: Stack is full\n");
        exit(EXIT_FAILURE);
    } else {
        stack[++top] = n;
    }
}

double pop() {
    if (top == -1) {
        printf("Error: Stack is empty\n");
        exit(EXIT_FAILURE);
    } else {
        return stack[top--];
    }
}

double eval(char *expression) {
    for (int i = 0; expression[i] != '\0'; i++) {
        if (isdigit(expression[i]) || (expression[i] == '.' && isdigit(expression[i + 1]))) {
            push(atof(&expression[i]));
            while (isdigit(expression[i]) || expression[i] == '.') {
                i++;
            }
            i--;  // Move back one position to handle the increment in the loop
        } else {
            double op2 = pop();
            double op1 = pop();

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
                default:
                    printf("Error: Invalid Expression\n");
                    exit(EXIT_FAILURE);
            }
        }
    }
    return pop();
}

int main() {
    char postfix[100];

    while (1) {
        printf("Enter a postfix expression (or 'q' to quit): ");
        scanf("%s", postfix);

        if (postfix[0] == 'q' && postfix[1] == '\0') {
            printf("Exiting the program. Goodbye!\n");
            break;
        }

        double result = eval(postfix);
        printf("Result: %.8lf\n", result);
    }

    return 0;
}
