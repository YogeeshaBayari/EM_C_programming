#include <stdio.h>
#include <stdbool.h>

#define MAX_STACK_SIZE 100

typedef struct {
    char data[MAX_STACK_SIZE];
    int top;
} Stack;

void initializeStack(Stack *stack);
bool isEmpty(Stack *stack);
bool isFull(Stack *stack);
void push(Stack *stack, char value);
char pop(Stack *stack);

bool isBalanced(char expression[]);

int main() {
    char expression[MAX_STACK_SIZE];

    printf("Enter an expression: ");
    fgets(expression, MAX_STACK_SIZE, stdin);

    if (isBalanced(expression)) {
        printf("Balanced parentheses.\n");
    } else {
        printf("Unbalanced parentheses.\n");
    }

    return 0;
}

void initializeStack(Stack *stack) {
    stack->top = -1;
}

bool isEmpty(Stack *stack) {
    return stack->top == -1;
}

bool isFull(Stack *stack) {
    return stack->top == MAX_STACK_SIZE - 1;
}

void push(Stack *stack, char value) {
    if (!isFull(stack)) {
        stack->data[++stack->top] = value;
    } else {
        printf("Stack overflow\n");
    }
}

char pop(Stack *stack) {
    if (!isEmpty(stack)) {
        return stack->data[stack->top--];
    } else {
        printf("Stack underflow\n");
        return '\0';
    }
}

bool isBalanced(char expression[]) {
    Stack stack;
    initializeStack(&stack);

    for (int i = 0; expression[i] != '\0'; ++i) {
        if (expression[i] == '(' || expression[i] == '[' || expression[i] == '{') {
            push(&stack, expression[i]);
        } else if (expression[i] == ')' || expression[i] == ']' || expression[i] == '}') {
            if (isEmpty(&stack)) {
                return false; // Unmatched closing parenthesis
            }

            char open = pop(&stack);
            if ((open == '(' && expression[i] != ')') ||
                (open == '[' && expression[i] != ']') ||
                (open == '{' && expression[i] != '}')) {
                return false; // Mismatched opening and closing parenthesis
            }
        }
    }

    return isEmpty(&stack); // Stack should be empty for balanced parentheses
}
