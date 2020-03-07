#include <stdio.h>

struct node {
	int data;
	struct node *next;
};

struct node *start = NULL;
struct node *create_cll(struct node *);
struct node *insert_bet(struct node *);
struct node *insert_end(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_after(struct node *);
struct node *delete_list(struct node *);

int main (){
	int option;
	do{
		printf(" Enter option -1 to terminate,\n 1 to create\n 2 to insert beg\n 3 to insert end\n 4 to delete beg\n 5 to delete end\n 6 to delete after\n 7 to delete list");
		switch(option){
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
			case 6: start = delete_after(start);
					break;
			case 7: start = delete_list(start);

		}
	}
	while(option != -1);
	return 0;	
}

struct node *create_cll(struct node *start){
	struct node *new_node, *ptr;
	int data;
	printf(" Enter -1 to end");
	printf(" Enter the data: ");
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
	scanf("%d", &data);
	new_node = (struct node *)malloc(sizeof(struct node));
};

struct node *display
struct node *insert_beg(struct node *start){
	struct node *new_node, *ptr;
	int data;
	printf(" Enter -1 to end");
	printf(" Enter the data: ");
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
			start = new_node;
			new_node -> next = start;
		};
		printf(" Enter the data: ");
		scanf("%d", &data);
	}
	scanf("%d", &data);
	new_node = (struct node *)malloc(sizeof(struct node));
};
