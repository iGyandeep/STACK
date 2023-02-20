#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int push(int[], int);
int pop(int [], int);
void display(int [], int);
void peek(int [], int);

int main()
{
	int stack[MAX], op, top = -1;
	while (1) {
		printf("\n_____________________________________________\n");
		printf("Perform from following option: \n");
		printf("1. Push \n");
		printf("2. Pop \n");
		printf("3. Display \n");
		printf("4. Peek \n");
		printf("5. Exit \n$>");
		scanf("%d", &op);
		switch (op) {
			case 1:
				system("cls");
				top = push(stack, top);
			break;
			case 2:
				system("cls");
				top = pop(stack, top);
			break;
			case 3:
				system("cls");
				display(stack, top);
			break;
			case 4:
				system("cls");
				peek(stack, top);
			break;
			case 5:
				exit(0);
			break;
			default:
				system("cls");
				printf("!!! ERROR !!!\nSelect correct option.\n");
			break;
		}
	}
}

int push(int stack[], int top) {
	if (top == MAX - 1) 
		printf("Overflow or Stack is Full.\n");
	else {
		top++;
		printf("Input an element to push: ");
		scanf("%d", &stack[top]);
	}
	return top;
}

int pop(int stack[], int top) {
	if (top == -1)
		printf("Underflow or Stack is empty.\n");
	else {
		printf("Pop element is %d", stack[top]);
		top--;
	}
	return top;
}

void display(int stack[], int top) {
	int i;
	if (top == -1)
		printf("Underflow or Stack is empty.\n");
	else {
		for (i=top; i>=0; i--)
			printf("%d\n", stack[i]);
	}
}

void peek(int stack[], int top) {
	if (top == -1)
		printf("Underflow or Stack is empty.\n");
	else
		printf("Peek Element = %d", stack[top]);
}
