#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int value)
{
	if(top == MAX_SIZE -1)
	{
		printf("Stack Overflow \n");
		return;
	}
	top++;
	stack[top] = value;
}

void pop()
{
	if(top == -1)
	{
		printf("Stack Underflow \n");
		return;
	}
	top--;
}

int topValue()
{
	if(top == -1)
	{
		printf("Stack is Empty \n");
		return -1;
	}
	return stack[top];
}

int isEmpty()
{
	if(top == -1)
	{
		return 1;
	}
	return 0;
}

int main()
{
	push(10);
	push(20);
	push(30);
	printf("Top Value: %d\n", topValue());
	pop();
	printf("Top Value: %d\n", topValue());
	pop();
	printf("Top Value: %d\n", topValue());
	pop();
	printf("Stack is empty: %d\n", isEmpty());
	return 0;
}
