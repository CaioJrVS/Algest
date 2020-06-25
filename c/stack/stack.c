#include <stdio.h>
#include <malloc.h>
#define MAX 5

int st[MAX],top=-1;
void push (int st[],int val);
int pop(int st[]);
int peek(int st[]);
void display(int st[]);

int main(int argc, char *argv[]){
	int val,option;
	do{
		printf("\n *****MAIN MENU*****");
		printf("\n 1. PUSH");
		printf("\n 2. POP");
		printf("\n 3. PEEK");
		printf("\n 4. DISPLAY");
		printf("\n 5. EXIT");
		printf("\n Enter your option: ");
		scanf("%d", &option);
		switch(option)
		{
			case 1:
				printf("\n Enter the number to be pushed on stack: ");
				scanf("%d", &val);
				push(st, val);
				break;
			case 2:
				val = pop(st);
				if (val != -1)
					printf("\n The value returned from the stack is: %d", val);
				break;
			case 3:
				val = peek(st);
				if(val != -1)
					printf("\n The value stored at the top of the stack is: %d",val);
				break;
			case 4:
				display(st);
				break;
		}
	}while(option != 5);
	return 0;
}

void push(int st[], int value){
	if(top == MAX -1){
		printf("\n STACK OVERFLOW");
	}else{
		top++;
		st[top]=value;
	};
}

int pop(int st[]){
	int val;
	if (top == -1){
		printf("\n STACK UNDERFLOW");
		return -1;
	}else{
		val = st[top];
		top--;
		return val;
	}
}
int peek(int st[]){
	if (top ==-1){
		printf("\n EMPTY STACK");
		return -1;
	}else{
		return st[top];
	}
}
void display(int st[]){
	if (top == -1){
		printf("\n EMPTY STACK");
	}else{
		for(int i = top; i>= 0; i--){
			printf ("\n %d ",st[i]);
			printf("\n");
			}
	}
}
