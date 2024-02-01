#include <stdio.h>
#include <string.h>

// declaring union
union union_example {
    int integer;
    float decimal;
    char name[20];
};

int main() {
    // creating variable for union
    // and initializing values
    union union_example u = {18, 38, "geeksforgeeks"};

    printf("\nunion data:\n integer: %d\ndecimal: %.1f\n name: %s\n",u.integer, u.decimal, u.name);

    // difference two and three
    printf("\nsizeof union : %lu\n", sizeof(u));

    // difference five
    printf("\nAccessing all members at a time:");

    u.integer = 183;
    u.decimal = 90;
    strcpy(u.name, "geeksforgeeks");

    printf("\nunion data:\n integer: %d\n decimal: %.2f\n name: %s\n",u.integer, u.decimal, u.name);

    printf("\nAccessing one member at a time:");

    printf("\n union data:");
    u.integer = 240;
    printf("\ninteger: %d", u.integer);

    u.decimal = 120;
    printf("\ndecimal: %f", u.decimal);

    strcpy(u.name, "C programming");
    printf("\nname: %s\n", u.name);

    // difference four
    printf("\nAltering a member value:\n");
    u.integer = 1218;
    printf("union data:\n integer: %d\n decimal: %.2f\n name: %s\n",u.integer,u.decimal, u.name);

    return 0;
}

