#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define SIZE 4

int top = -1, i, input_array[SIZE];

void push();
void pop();
void show();

int main()
{
	int choice;
	
	while(1)
	{
		printf("\n Perform Operations on the Stack:");
		printf("\n1. Push the Element \n2. Pop the Element \n3. Show \n4.End");
	    printf("\n\n Enter the Choice: ");
	    scanf("%d", &choice);
	    
	    switch(choice)
	    {
	    	case 1:
			    push();
	    		break;
	    	
			case 2:
				pop();
				break;
			
			case 3:
			    show();
				break;
			
			case 4:
			    exit(0);
				
			default:
			    printf("\n Invalid Choice !!");	
		}
    }
}

void push()
{
	int x;
	
	if (top == SIZE - 1)
	{
		printf("\n Overflow!!");
	}
	else
	{
		printf("\n Enter the element to be added onto the Stack:");
		scanf("%d", &x);
		top = top + 1;
		input_array[top] = x;
	}
}

void pop()
{
	if(top == -1)
	{
		printf("\n Underflow !!");
	}
	else
	{
		printf("\n Popped Element: %d", input_array[top]);
		top = top - 1;
	}
}

void show()
{
	if(top == -1)
	{
		printf("\n Underflow!!");
	}
	else
	{
		printf("\n Elements present in the stack: \n");
		for (i = top; i >= 0; --i)
		    printf("%d\n", input_array[i]);
	}
}
