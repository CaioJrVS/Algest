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
	printf("\n 11: Delete list");
	
	switch(option){
	    case 1: start = create_ll(start);
		    printf("\n List was created!");
		    break;
	    case 2: start = display(start);
		    break;
	    case 3: start = insert_beg(start);
	}
    }while( option != 12);
    return 0;
};

struct main *create_ll(struct node *start){
    struct node *new_node;
    int data;
    printf("\n Enter the data: ");
    scanf("%d", &data);
    new_node ->data = data;
    if( start == NULL){
	new_node -> prev = NULL;
	new_node -> next = 
    };
};
