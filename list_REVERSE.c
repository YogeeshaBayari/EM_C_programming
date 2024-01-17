#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* head;
struct node* current;

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
    struct node* temp = current;

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void reverse( struct node** head){
     struct node* prev = NULL; 
     struct node* current = *head; 
     struct node* next = NULL;

     while (current!=NULL)
     {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
     }
     *head = prev;
      
}


// void reverseprint( struct node** head,struct node* current,struct node* prev){
struct node* reverseprint( struct node* current,struct node* prev){   
    // if (current->next == NULL)
    // {
    //    *head = current;
    //    current->next=prev;
    //    return;
    // }
    if (current == NULL) {
        // If the current node is NULL, the list is reversed
        return prev;
    }
    struct node* next = current->next;
    current->next =prev;

    reverseprint(next,current);
    // reverseprint(head,next,current);
    
}


int main()
{
    head = NULL;
    // Inserting elements at the end
    insertEnd(1);
    insertEnd(2);
    insertEnd(3);
    insertEnd(4);
    insertEnd(5);

    printf("before Linked List: ");
    printList();
    
    struct node* prev  = NULL;
    // reverseprint(&head,current,prev);
    current=reverseprint(head,prev);
    printf("\nafterLinked List: ");
    printList();

    // reverse(&head);
    // printf("\nafterLinked List: ");
    // printList();
    return 0;
}