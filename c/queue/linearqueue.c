#include <stdio.h>
#define MAX 10

int queue[10];
void insert(void);
int front = -1, rear = -1;
int delete_element(void);
int peek(void);
void display(void);

int main (){
	int option, val;
	do{
		printf("\n\n ****Main Menu****");
		printf("\n 1. Insert an element");
		printf("\n 2. Delete an element");
		printf("\n 3. Peek");
		printf("\n 4. Display queue");
		printf("\n 5. Exit");
		printf("\n Enter your option: ");
		scanf("%d",&option);
		switch(option){
			case 1: insert();
					break;
			case 2: val = delete_element();
					if (val != -1)
						printf("\n The value deleted is: %d ", val);
					break;
			case 3: val = peek();
					if(val != -1)
					printf("\n The peek value is: %d", val);
					break;
			case 4:
					display();
					break;
		};				
	}while (option != 5);

};

void insert(){
	int num;
	printf("\n Enter the number to be inserted: ");
	scanf ("%d",&num);
	if(rear == MAX -1 && front ==0)
		printf("\n OVERFLOW");
	else if (rear == MAX -1 && front !=0){
		rear = 0;
		queue
	else if(front == -1 && rear == -1){
		front = rear =0;
		queue[front] = num;
	}
	else{
		rear++;
	queue[rear]= num;
	}
};
int delete_element(){
	int val;
	if(front == -1 || front >rear){
		printf("\n UNDERFLOW");
		return -1;
	}else{
		val = queue[front];
		front++;
		if(front>rear)
			front = rear=-1;
		return val;
		}
}
int peek(){
	if(front == -1 || front > rear){
		printf("\n EMPTY QUEUE");
		return -1;
	}
	else
	return queue[front];
}
void display(){
	int i;
	printf("\n");
	if (front == -1 || front > rear)
		printf("\n EMPTY QUEUE");
	else{
		for (i = front; i<= rear; i++){
			printf(" %d", queue[i]);
		}
	}
}
