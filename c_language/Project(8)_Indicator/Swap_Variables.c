#include<stdio.h>

void swap(int *FirstNumber , int *SecondNumber)
{
	*FirstNumber = *FirstNumber + *SecondNumber;
	*SecondNumber = *FirstNumber - *SecondNumber;
	*FirstNumber = *FirstNumber - *SecondNumber;
}

int main()
{
	int FirstNumber , SecondNumber;
	
	
	printf("\nEnter A FirstNumber:- ");
	scanf("%d",&FirstNumber);
	
	
	
	printf("\nEnter A SecondNumber:- ");
	scanf("%d",&SecondNumber);
	
	printf("Before Swapping:- \n");
	printf("a = %d\n",FirstNumber);
	printf("b = %d\n",SecondNumber);
	
	swap(&FirstNumber , &SecondNumber);
	
	printf("After Swapping:- \n");
	printf("a = %d\n",FirstNumber);
	printf("b = %d\n",SecondNumber);
}
