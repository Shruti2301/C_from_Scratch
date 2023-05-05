#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

void enqueue(int value)
{
	if(rear == MAX_SIZE - 1)
	{
		printf("Queue Overflow \n");
		return;
	}
	
	if(front == -1)
	{
 		front = 0;
    }
    rear++;
    queue[rear] = value;
}

void dequeue()
{
	if(front == -1 || front > rear)
	{
		printf("Queue Underflow \n");
		return;
	}
	front++;
}

int frontValue()
{
	if(front == -1 || front > rear)
	{
		printf("Queue is Empty");
		return -1;
	}
}

int isEmpty()
{
	if(front == -1 || front > rear)
	{
		return 1;
	}
	return 0;
}

int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	printf("Front value: %d\n", frontValue());
	dequeue();
	printf("Front value: %d\n", frontValue());
	dequeue();
	printf("Front value: %d\n", frontValue());
	dequeue();
	printf("Queue is empty :%d\n", isEmpty());
	return 0;
}
