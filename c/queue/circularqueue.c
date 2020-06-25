#include <stdio.h>
#define MAX 10

int queue[MAX];
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
	int val;
	printf("Enter the value to be inserted: ");
	scanf("%d", &val);
	if(rear == MAX-1 && front ==0)
		printf("\n QUEUE OVERFLOW");
	else if(rear + 1 == front)
		printf("\n QUEUE OVERFLOW");
	else if(rear == -1 && front == -1){
		rear = front = 0;
		queue[rear]=val;
	}
	else if(rear == MAX-1 && front !=0){
		rear = 0;
		queue[rear] = val;
	}
	else{
		queue[rear]=val;
		rear++;
	}
}
int delete_element(){
	int val;
	if(front == -1 && rear == -1){
		printf("\n QUEUE UNDERFLOW");
		return -1;
	}else if( front == rear ){
		val = queue[front];
		front = rear = -1;
		return val;
	}else if( front ==  MAX -1 && rear != MAX -1){
		val = queue[front];
		front = 0;
		return val;
	}else{
		val = queue[front];
		front++;
		return val;
	}
}
int peek(){
	int val;
	if(front == -1){
		printf("\n EMPTY QUEUE");
		return -1;
	}else{
		val = queue[front];
		return val;
	}
}
void display(){
	printf("\n");
	if(front == -1)
		printf("\n EMPTY QUEUE");
	else{
		if(front < rear){
			for (int i = front; i<= rear; i++)
				printf(" %d", queue[i]);
		}else{
			for(int i = front; i<= MAX -1; i++)
				printf(" %d",queue[i]);
			for(int i = 0; i<= rear; i++)
				printf(" %d", queue[i]);
		}
	}
}
