#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
	struct node *prev;
};

struct node *start = NULL;
struct node *create_ll(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *insert_before(struct node *);
struct node *insert_after(struct node*);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_before(struct node *);
struct node *delete_after(struct node *);
struct node *delete_list(struct node *);

int main(){
    int option;
    do{
	printf("\n ****Main Menu**** ");
	printf("\n Enter 12 to end ");
	printf("\n 1: Create the list");
	printf("\n 2: Display the list");
	printf("\n 3: Insert beggining");
	printf("\n 4: Insert end");
	printf("\n 5: Insert before");
	printf("\n 6: Insert after");
	printf("\n 7: Delete begginig");
	printf("\n 8: Delete end");
	printf("\n 9: Delete before");
	printf("\n 10: Delete after");
	printf("\n 11: Delete list\n");
	
	scanf("%d",&option);

	switch(option){
	    case 1: start = create_ll(start);
		    printf("\n List was created!");
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
	}
    }while( option != 12);
    return 0;
};

struct node *create_ll(struct node *start){
    struct node *new_node, *ptr;
    int data;
    printf("\n Enter -1 to finish");
    printf("\n Enter the data: ");
    scanf("%d", &data);
    while (data != -1){
	new_node = (struct node *)malloc(sizeof(struct node));
	new_node ->data = data;
	if( start == NULL){
	    new_node -> prev = NULL;
	    new_node -> next = new_node;
	    start = new_node;
	}else{
	    ptr = start;
	    while (ptr -> next != start)
		ptr = ptr->next;
	    ptr->next = new_node;
	    new_node -> prev = ptr;
	    new_node -> next = start;
	    start -> prev = new_node;
	};
	printf("\n Enter the data: ");
	scanf("%d",&data);
    }
    return start;
};

struct node *display(struct node *start){
    struct node *ptr;
    ptr = start;
    while (ptr -> next != start){
	printf("%d ",ptr->data);
	ptr = ptr->next;
    }
    printf("%d \n\n", ptr->data);
    return start;
};

struct node *insert_beg(struct node *start){
    struct node *new_node, *ptr;
    int data;
    printf(" Enter the data: ");
    scanf ("%d", &data);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node -> data = data;
    ptr = start;
    while (ptr -> next != start)
	ptr = ptr->next;
    ptr-> next = new_node;
    new_node -> next = start;
    start -> prev = new_node;
    new_node ->prev = ptr;
    start = new_node;
    return start;
};


struct node *insert_end(struct node *start){
    struct node *new_node, *ptr;
    int data;
    printf(" Enter the data: ");
    scanf ("%d", &data);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node -> data = data;
    ptr = start;
    while (ptr -> next != start)
	ptr = ptr->next;
    ptr-> next = new_node;
    new_node -> next = start;
    new_node ->prev = ptr;
    start ->prev = new_node;
    return start;
};

struct node *insert_before(struct node *start){
    struct node *new_node, *ptr, *preptr;
    int data, pos;
    printf(" Enter the node: ");
    scanf("%d",&pos);
    printf(" Enter the data: ");
    scanf ("%d", &data);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node -> data = data;
    ptr = start;
    preptr = ptr ->prev;
    while (ptr -> data != pos){
	ptr = ptr->next;
	preptr=ptr->prev;
    };
    new_node -> prev = preptr;
    new_node -> next = ptr;
    ptr -> prev = new_node;
    preptr -> next = new_node;
    return start;
};	

struct node *insert_after(struct node *start){
    struct node *new_node, *ptr, *posptr;
    int data, pos;
    printf(" Enter the node: ");
    scanf("%d",&pos);
    printf(" Enter the data: ");
    scanf ("%d", &data);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node -> data = data;
    ptr = start;
    posptr = ptr ->next;
    while (ptr -> data != pos){
	ptr = ptr->next;
	posptr=ptr->next;
    };
    new_node -> prev = ptr;
    new_node -> next = posptr;
    ptr -> next = new_node;
    posptr -> prev = new_node;
    return start;
};	

struct node *delete_beg(struct node *start){
    start -> next -> prev = start ->prev;
    start -> prev -> next = start ->next;
    start = start -> next;
    return start;
};
