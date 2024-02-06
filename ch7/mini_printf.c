#include <stdarg.h>
#include <stdio.h>

void mini_printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    while (*format) {
    
        if (*format == '%')
	{
	    format++;

            if (*format == 'd') 
	    {
                int num = va_arg(args, int);
                printf("%d", num);

	    }
	    else if (*format == 's')
	    {
                char *str = va_arg(args, char *);
                printf("%s", str);
            }
        }
       
	else
	{
            putchar(*format);
        }

        format++;
    }

    va_end(args);
}

int main(void) {
    mini_printf("Hello %s, number is %d\n", "World", 42);
    return 0;
}

