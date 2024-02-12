#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the beginning of the list
void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

// Function to insert a node at the end of the list
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to insert a node at a specific position in the list
void insertAtPosition(struct Node** head, int data, int position) {
    if (position < 0) {
        printf("Invalid position\n");
        return;
    }
    if (position == 0) {
        insertAtBeginning(head, data);
        return;
    }
    struct Node* newNode = createNode(data);
    struct Node* temp = *head;
    for (int i = 0; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Invalid position\n");
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

// Function to delete a node from the beginning of the list
void deleteFromBeginning(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

// Function to delete a node from the end of the list
void deleteFromEnd(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }
    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        return;
    }
    struct Node* secondLast = *head;
    while (secondLast->next->next != NULL) {
        secondLast = secondLast->next;
    }
    free(secondLast->next);
    secondLast->next = NULL;
}

// Function to delete a node from a specific position in the list
void deleteFromPosition(struct Node** head, int position) {
    if (*head == NULL || position < 0) {
        printf("Invalid operation\n");
        return;
    }
    if (position == 0) {
        deleteFromBeginning(head);
        return;
    }
    struct Node* temp = *head;
    struct Node* prev = NULL;
    for (int i = 0; i < position && temp != NULL; i++) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Invalid position\n");
        return;
    }
    prev->next = temp->next;
    free(temp);
}

// Function to search for an element in the list
int search(struct Node* head, int key) {
    int position = 0;
    while (head != NULL) {
        if (head->data == key) {
            return position;
        }
        head = head->next;
        position++;
    }
    return -1; // Element not found
}

// Function to print the elements of the linked list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Function to free the memory allocated for the linked list
void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    struct Node* head = NULL;

    // Inserting some elements at the beginning of the list
    insertAtBeginning(&head, 5);
    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 15);
    insertAtBeginning(&head, 20);

    // Printing the elements of the list
    printf("Linked List: ");
    printList(head);

    // Inserting elements at the end and at a specific position
    insertAtEnd(&head, 25);
    insertAtPosition(&head, 30, 2);

    printf("Linked List after insertion: ");
    printList(head);

    // Deleting elements from the beginning, end, and at a specific position
    deleteFromBeginning(&head);
    deleteFromEnd(&head);
    deleteFromPosition(&head, 2);

    printf("Linked List after deletion: ");
    printList(head);

    // Searching for an element
    int key = 15;
    int position = search(head, key);
    if (position != -1) {
        printf("%d found at position %d\n", key, position);
    } else {
        printf("%d not found in the list\n", key);
    }

    // Freeing the memory allocated for the linked list
    freeList(head);

    return 0;
}
