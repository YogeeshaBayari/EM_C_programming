#include<stdio.h>
#include<stdlib.h>

struct stack {
    int data;
    struct stack* next;
};

int top = -1;

void inserfirst(struct stack** head,int data){
    struct stack* newnode = (struct stack*)malloc(sizeof(struct stack));

    if (newnode == NULL)
    {   printf("Memory allocation failed");
        return;
    }
    
    newnode->data=data;

    if (*head == NULL)
    {
        newnode->next=NULL;
        *head = newnode;
        top=top+1;
        printf("\n top is %d \n",top);
        return ;
    }
    
    
    newnode->next= *head;
    *head = newnode;
    top=top+1;
}

void deletefirst(struct stack** head){
    if(*head == NULL){
        printf("\nEmpty stack not deleted");
        return ;
    }
    else 
    {
        struct stack* temp = *head; // Save the current head
        *head = (*head)->next;         // Update head to the next element
        free(temp);
        top = top-1;
        printf("\n top is %d \n",top);
    }

}

void print(struct stack* head){
    struct stack* temp = head;
    if(temp == NULL){
        printf("Empty\n");
        printf("\n top is %d \n",top);
        return;
    }

    while (temp != NULL) {
        printf(" %d -> ", temp->data);
        
        temp = temp->next;
    }
    printf("\n");
}


int main(){
    struct stack* head;
    head=NULL;
   
    print(head);
    inserfirst(&head,1);
  
    inserfirst(&head,2);
    inserfirst(&head,3);
    inserfirst(&head,4);
    print(head);
   
    deletefirst(&head);
      print(head);
    // print();
    return 0 ;
}

