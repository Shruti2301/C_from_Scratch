#include <stdio.h>
#include <conio.h>

int main()
{
	int a[10],i,num,min;
	system("cls");
	
	printf("\n Enter number of elements:");
	scanf("%d", &num);
	
	//Taking user input of number of elements
	printf("\n Enter the elements in the array:");
	for (i =0 ; i<num ; i++)
	{
		scanf("%d",&a[i]);
	}
	
	//Printing user elements
	printf("\n Printing all elements entered by user:");
	for(i=0; i<num ; i++)
	{
		printf("\t %d",a[i]);
	}
	
	printf("\n \n Printing minimum elements in 1D:");
	min = a[0];
	
	for (i=0; i<num ; i++)
	{
		if(min >= a[i])
		{
			min = a[i];
		}
	}
	
	printf("\n Minimum Element is : %d",min);
	
	getch();
	return 0;
}
