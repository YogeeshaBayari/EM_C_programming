#include <stdio.h>
#include <string.h>

// Declaration of the structure
struct Person;

int main() {
    // Definition of the structure
    struct Person {
        char name[50];
        int age;
    };

    // Initialization of a structure variable
    struct Person john;

    // Initializing structure members
    // Note: strcpy is used for copying strings; don't forget to include <string.h>
    strcpy(john.name, "John Doe");
    john.age = 25;

    // Accessing and displaying structure members
    printf("Person Information:\n");
    printf("Name: %s\n", john.name);
    printf("Age: %d\n", john.age);

    return 0;
}

