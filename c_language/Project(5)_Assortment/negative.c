//Q.1 Write a Program to find all the negative elements from a given 1D array.

#include<stdio.h>

main()
{
	int size;
	int i;
	
	printf("\nEnter the array's size: ");
	scanf("%d",&size);
	
	int array[size];
	
	printf("\nEnter array's elements: ");
	
	for(i = 0; i < size; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&array[i]);
	}
	
	printf("\nNegative elements from an Array:");
	
	for(i = 0; i < size; i++)
	{
		if(array[i] < 0)
		{
			printf("%d",array[i]);
		}
	}
}
