#include<stdio.h>

void squeeze(char s[], char c)
{
    int i, j;
    for (i = j = 0; s[i] != '\0'; i++)
    {	
	if (s[i] != c)
	    s[j++] = s[i];
    }
    s[j] = '\0';
}

void main() 
{
    char s[] = "Yogeesh";
    char c[] = "e";

    printf( "Before Squeeze : %s \n ",s);
    squeeze(s,c[0]);
    printf( "After Squeeze : %s \n ",s);
}
