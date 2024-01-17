#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

#define MAX_STACK_SIZE 100

typedef struct {
	int top;
	int items[MAX_STACK_SIZE];
}Stack ;

void ini(Stack *stack){
	stack->top=-1;
}

void push (Stack *stack,int n){
	if( stack->top == MAX_STACK_SIZE-1){
		printf("Satck is full");
		exit(EXIT_FAILURE);
	} else {
		//stack->top = stack->top + 1;
		//stack->items[stack->top]=n;
		stack->items[++stack->top]=n;
	}
}

int  pop (Stack *stack){
	if(stack->top == -1){
		printf("stack is empty");
	exit(EXIT_FAILURE);
	}
	else {
	return	stack->items[(stack->top)--];

	}
}

int eval(char *expression){
	Stack stack;
	ini(&stack);

	for(int i=0;expression[i]!= '\0' ;i++){
        
			if(isdigit(expression[i])){
					push(&stack,expression[i]-'0');
			}
			
			else	{
				
				int op2  = pop(&stack);
				int op1 = pop(&stack);

				switch (expression[i]){
				
					case '+' : push(&stack, op1+op2);
							break;
					case '-' : push(&stack, op1-op2);                                                           break;
					case '*' : push(&stack, op1*op2);                                                           break;
					case '/' : push(&stack, op1/op2);                                                           break;		
					default :printf("\nInvalid Expression");
				
						exit(EXIT_FAILURE);
					}
				
				}
   	
			}
			return pop(&stack);

}

int main(){

	char postfix[100];
	printf("enter the postfix expression");
	scanf("%s",postfix);
	int result;
	result = eval(postfix);
	printf("Result : %d",result);
	return 0;
}

