#include<stdio.h>

int main()
{
	int square[2];
	int firstNumber;
	int SecondNumber;
	int result;
	printf("Enter the first a number :- ");
	scanf("%d",&firstNumber);
	
	printf("Enter the Second a number :- ");
	scanf("%d",&SecondNumber);
	
	int *ptr;
	ptr = &square;
	
	*result = *firstNumber *  *SecondNumber;
	printf("The Result Of Square of FirstNumber And SecondNumber is :- %d",result);
	
}
