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
struct node *insert_before(struct node *);
struct node *insert_after(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_node(struct node *);
struct node *delete_after(struct node *);
struct node *delete_list(struct node *);
struct node *sort_list(struct node *);


int main (){
int num;
do{
    printf("\n****Main Menu****");
    printf("\nChoose 1 to create a linked list");
    printf("\nChoose 2 to display the linked list");
    printf("\nChoose 3 to add a node at the beginning");
    printf("\nChoose 4 to add a node at the end");
    printf("\nChoose 5 to insert node before a node");
    printf("\nChoose 6 to insert a node after a node");
    printf("\nChoose 7 to delete beginning node");
    printf("\nChoose 8 to delete last node");
    printf("\nChoose 9 to delete chosen node");
    printf("\nChoose 10 to delete after node");
    printf("\nChoose 11 to delete list");
    printf("\nChoose 12 to sort list");
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
	case 5: start = insert_before(start);
		break;
	case 6: start = insert_after(start);
		break;
	case 7: start = delete_beg(start);
		break;
	case 8: start = delete_end(start);
		break;
	case 9: start = delete_node(start);
		break;
	case 10: start = delete_after(start);
		break;
	case 11: start = delete_list(start);
		break;
	case 12: start = sort_list(start);
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

struct node *insert_before(struct node start){
    struct node 
};
