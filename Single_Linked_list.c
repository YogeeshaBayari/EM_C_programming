#include<stdio.h>
#include<stdlib.h>

typedef struct li  {
	int data;
	struct li* next;
}List;

void insert_At_HEAD(List **head,int data){
	List *newnode =(List*)malloc(sizeof(List));
	
	if( *head == NULL){	
		newnode->data = data;
		newnode->next=NULL;
		*head = newnode;
		}
	else {
		newnode->data = data;
		newnode->next = *head;
		*head= newnode;
		}

}

void insert_LAST(List **head,int data){

	List *newnode =(List*)malloc(sizeof(List));
	
	if( *head == NULL){	
		newnode->data = data;
		newnode->next=NULL;
		*head = newnode;
		}
	else {
	
	 List *temp = *head;
	 
		while(temp->next != NULL){
			temp = temp->next;
			}
		newnode->data = data;
		newnode->next = NULL;
		temp->next = newnode;
		
		}
	}
	
void insert_middle(List **head,int data,int pos){
	List *newnode =(List*)malloc(sizeof(List));
	
	if( *head == NULL){	
		newnode->data = data;
		newnode->next=NULL;
		*head = newnode;
		}
	else {
		List *temp = *head;
		
		for (int i=1;i<pos-1;i++)
			temp= temp->next;
		
		newnode->data = data;
		newnode->next = temp->next;
		temp->next=newnode;
		
		}
		}
	
void deleteLASt(List **head){
        List *last = *head;
        List *Selast = NULL;

        if (last == NULL ){
                printf(" \n LIst is empty\n");
               }
        else {
        while(last->next != NULL){
                Selast = last;
                last = last->next;
                }


        free(last);
        Selast->next=NULL;
        }

        }

void deleteFirst(List **head){
	List *temp = *head;

	if (temp == NULL)
		{	printf("List is Empty");
		}
	else
		{
		*head = temp->next;
		free(temp);
		}

}
	

void deletePos(List **head, int pos){
	List *temp = *head;
	if (temp == NULL)
                {       printf("List is Empty");
                }
	else{
		for(int i=0 ; i< pos-2; i++){
			temp = temp->next;
		}
		List *del = temp->next;
		temp->next = temp->next->next;
		free(del);
	}
}


void print(List **head){
	
	List *temp = *head;

	if(temp == NULL ){
		printf("LIst is empty\n");
		}
	else {
	while(temp != NULL){
		printf(" %d ",temp->data);
		temp = temp->next;
		}
		printf("\n");
	}
	}

void printReverse1(List *head){

	//List *temp = *head;
	
	if (head == NULL){
		printf("\n List is Empty \n");
		return ;
	}
	else {
	//temp = temp->next;
	printReverse1(head->next);
	printf(" %d ",head->data);
	}
}

void printReverse(List **head){

        //List *temp = *head;

        if (*head == NULL){
                //printf("\n List is Empty \n");
                return ;
        }
        else {
        //temp = temp->next;
        printReverse(&((*head)->next));
        printf(" %d ",(*head)->data);
        }
}


void Listreverse(List **head,List *current, List *prev){
	
	if(!current->next){
		*head =current;
		current->next = prev;
		return;
	}

	List *next = current->next;
	current->next = prev ;

	Listreverse(head,next,current);
}


int main(){
	List *head= NULL;
	print(&head);
	printf("\nInsert Head : \n");
	insert_At_HEAD(&head,1);
	print(&head);
	insert_At_HEAD(&head,2);
	print(&head);	
	 printf("\nInsert Last : \n");
	insert_LAST(&head,3);
	print(&head);
	insert_LAST(&head,4);
	print(&head);	
       	printf("\nInsert at given position : (3)\n");
	insert_middle(&head,50,3);
	print(&head);

	printf("\n Print Reverse \n ");
	printReverse(&head);

	printf("\n \n Delete Last : \n");
	deleteLASt(&head);
	print(&head);
	 printf("\n Delete First : \n");
	deleteFirst(&head);
	print(&head);
	 printf("\nDelete at given Position : (2) \n");
	deletePos(&head,2);
	print(&head);

	
	insert_At_HEAD(&head,5);
	insert_At_HEAD(&head,4);
	insert_At_HEAD(&head,3);
	insert_At_HEAD(&head,2);
	
	//print(&head);

	List *current = head;
	List *prev = NULL;
	//Listreverse(List *head,List *current, *List prev){
	
	printf("\n List Reverse \n");
	Listreverse(&head,current,prev);
	print(&head);

	return 0;

}

