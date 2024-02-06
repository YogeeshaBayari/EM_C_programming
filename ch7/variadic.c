#include<stdio.h>
#include<stdarg.h>

int min_print(int num, ... ) {

	va_list args;
	va_start(args, num);

	for ( int i = 0 ; i<num ;i++ )

	{
	    int data = va_arg(args,int);
	    printf( " %d --> %d ",i,data);
	}
	printf("\n");
	va_end(args);

}

void min_print_strings(int num, ...) {
    va_list args;
    va_start(args, num);

    for (int i = 0; i < num; i++) {
        const char *str = va_arg(args, const char *);
        printf("%d --> %s\n", i, str);
    }

    va_end(args);
}


int main() {

	min_print(5,12,'a',3,4,5);
	min_print_strings(3, "Hello", "World", "!");

}
