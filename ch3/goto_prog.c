#include<stdio.h>

void print() {

    printf("Statement 2 \n");

    goto printstatement;

    printf("statement 4 \n");

    printstatement : printf(" Statement 3\n" );
}

int main() {

    printf("Statement 1\n");

    print();

    printf("Statement 5\n");

}
