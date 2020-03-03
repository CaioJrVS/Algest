#include <stdio.h>
#include <malloc.h>

struct node {
int data;
struct node *next;
};

struct node *start = NULL;
struct node *create_ll(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);

int main (){
int num;
do{
    printf("\n****Main Menu****");
    printf("\nChoose 1 to create a linked list");
    printf("\nChoose 2 to display the linked list");
    printf("\nChoose 3 to add a node at the beginning");
    printf("\nChoose 4 to add a node at the end");
    printf("\n\nEnter your option\n");
    scanf("%d", &num);
    switch (num) {
	case 1: start = create_ll(start);
		printf("\nYOUR LIST HAS BEEN CREATED!");
		break;
	case 2: start = display(start);
		break;
	case 3: start = insert_beg(start);
		break;
	case 4: start = insert_end(start);
		break;
    }
}while(num !=13);
}


struct node *create_ll(struct node *start){
int data;
struct node *new_node, *ptr;
printf("\n Digite -1 para sair");
printf("\n Enter the data: ");
scanf("%d", &data);
while (data != -1){
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node -> data = data;
    if (start == NULL){
	new_node -> next = NULL;
	start = new_node;
    }else{
	ptr = start;
	while(ptr -> next != NULL)
	    ptr = ptr->next;
	ptr -> next = new_node;
	new_node -> next = NULL;
    }
    printf("\n Enter the data: ");
    scanf("%d", &data);
};
return start;
};

struct node *display(struct node *start){
struct node *ptr = start;
while (ptr != NULL){
    printf(" %d", ptr->data);
    ptr = ptr->next;
}
return start;
};

struct node *insert_beg(struct node *start){
    struct node *new_node;
    int data;
    new_node = (struct node *)malloc(sizeof(struct node));
    printf("\n The data to insert at the beginning: ");
    scanf("%d",&data);
    new_node -> data = data;
    new_node -> next = start;
    start = new_node;
    return start;
}; 

struct node *insert_end(struct node *start){
    struct node *new_node, *ptr;
    int data;
    printf("The data to be inserted at the end: ");
    scanf("%d", &data);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node -> data = data;
    new_node ->next = NULL;
    ptr = start;
    while (ptr -> next != NULL)
	ptr = ptr->next;
    ptr -> next = new_node;
    return start;
};
