#include <stdio.h>
#include <malloc.h>
// Aqui criei o struct para representar o nó
struct node {
    int data;
    struct node *next;
};

// Aqui criei um nó nulo e uma função que recebe um ponteiro como argumento
struct node *start = NULL;
struct node *create_ll(struct node *);
struct node *display(struct node *);

int main (){
    int num;
    do{
	printf("\n****Main Menu****");
	printf("\nChoose 1 to create a linked list");
	printf("\nChoose 2 to display the linked list");
	printf("\n\nEnter your option\n");
	scanf("%d", &num);
	switch (num) {
	    case 1: start = (create_ll(start));
		    printf("\nYOUR LIST HAS BEEN CREATED!");
		    break;
	    case 2: start = display(start);
		    break;
	}
    }while(num !=13);
}

// Criar uma função para inicializar uma linkedlist
// Ela deve pedir os valores ao usuario até que este forneça o valor "-1"

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
