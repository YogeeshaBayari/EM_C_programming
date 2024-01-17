#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* head;

void insertEnd(int data)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode; // If the list is empty, make the new node the head
        return;
    }

    struct node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next; // Traverse the list to find the last node
    }
    temp->next = newnode; // Append the new node at the end
}

void printList()
{
    struct node* temp = head;

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}


void print_recursion(struct node* head){

    if (head == NULL)
    {
        
        return;
    }
    printf("%d ",head->data);
    print_recursion(head->next);
}

void reverse_print_recursion(struct node* head){

    if (head == NULL)
    {
        
        return;
    }
    reverse_print_recursion(head->next);
    printf("%d ",head->data);
}



int main()
{
    head = NULL;
    // Inserting elements at the end
    insertEnd(1);
    insertEnd(2);
    insertEnd(3);insertEnd(4);insertEnd(5);

    printf("Linked List: ");
    printList();

    // printf("Recursion Linked List: ");
    // print_recursion(head);
    printf("\n reverse Recursion Linked List: ");
    reverse_print_recursion(head);
    return 0;
}
