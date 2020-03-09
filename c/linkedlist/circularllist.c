#include <stdio.h>
#include <malloc.h>

struct node {
    int data;
    struct node *next;
};

struct node *start = NULL;
struct node *display(struct node*);
struct node *create_cll(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_after(struct node *);
struct node *delete_list(struct node *);

int main (){
    int option;
    do{
	printf("\n\n Enter option -1 to terminate,\n 0 to display\n 1 to create\n 2 to insert beg\n 3 to insert end\n 4 to delete beg\n 5 to delete end\n 6 to delete after\n 7 to delete list\n");
	scanf("%d",&option);
	switch(option){
	    case 0: start = display(start);
		    break;
	    case 1: start = create_cll(start);
		    printf("\n Circular Linked List Created!");
		    break;
	    case 2: start = insert_beg(start);
		    break;
	    case 3: start = insert_end(start);
	            break;
	    case 4: start = delete_beg(start);
	            break;
	    case 5: start = delete_end(start);
	            break;
	  //  case 6: start = delete_after(start);
	  //          break;
	  //  case 7: start = delete_list(start);
	}
    }while(option != -1);
    return 0;	
}

struct node *create_cll(struct node *start){
    struct node *new_node, *ptr;
    int data;
    printf("\n Enter -1 to end");
    printf("\n Enter the data: ");
    scanf("%d",&data);
    while (data != -1){
	new_node = (struct node *)malloc(sizeof(struct node));
	new_node -> data = data;
	if (start == NULL){
	    new_node ->next = new_node;
	    start = new_node;
	}else{
	    ptr = start;
	    while (ptr -> next != start)
		ptr = ptr -> next;
	    ptr ->next = new_node;
	    new_node -> next = start;
	};
	printf(" Enter the data: ");
	scanf("%d", &data);
    }
    return start;
};

struct node *insert_beg(struct node *start){
    struct node *new_node, *ptr;
    int data;
    printf(" Enter the data: ");
    scanf("%d",&data);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node -> data = data;
    ptr = start;
    while (ptr -> next != start)
	ptr = ptr -> next;
    ptr ->next = new_node;
    new_node -> next = start;
    start = new_node;
    return start;
};

struct node *display(struct node *start){
    struct node *ptr;
    ptr= start;
    while (ptr->next != start){
	printf("%d ", ptr->data);
	ptr = ptr->next;
    }
    printf("%d\n",ptr->data);
    return start;
};

struct node *insert_end(struct node *start){
    struct node *new_node, *ptr;
    int data;
    printf("\n Enter the data: ");
    scanf("%d",&data);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node -> data = data;
    ptr = start;
    while (ptr ->next != start)
	ptr = ptr->next;
    ptr ->next = new_node;
    new_node -> next = start;
    return start;
};

struct node *delete_beg(struct node *start){
    struct node *ptr, *lptr;
    lptr = start;
    while (lptr ->next != start)
	lptr = lptr->next;
    ptr = start->next;
    lptr ->next = ptr;
    free(start);
    start = ptr;
    return start;
};

struct node *delete_end(struct node *start){
    struct node *ptr;
    ptr = start;
    while (ptr->next->next != start)
	ptr = ptr->next;
    ptr -> next = start;
    return start;
};

struct node *delete
