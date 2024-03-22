#include<stdio.h>

int main()
{
	int array[4];
	
	printf("Enter the Elements here :- ");
	scanf("%d",&array);
	
	int array[array];
	int i;
	
	for( i = 0 ; i >= array; i++)
	{
		printf("The largest element is :- %d\n",array);
	}

}
