#include<stdio.h>

main()
{
	int FirstNumber , SecondNumber , Size , i , years;
	
	printf("\nEnter the firstnumber :- ");
	scanf("%d",&FirstNumber);
	
	printf("\nEnter the secondnumber :- ");
	scanf("%d",&SecondNumber);
	
	Size = (SecondNumber - FirstNumber ) / 2 + 1;
	
	int evenYears[Size];
	
	years = FirstNumber;
	
	for(i = 0; i < Size; i++)
	{
		evenYears[i]  = years; 
		years+=2;
	}
	
	printf("\nThe array is :- ");
	
	for(i = 0; i < Size; i++)
	{
		printf("%d",evenYears[i]);
		if(i != Size - 1)
		{
			printf(",");
		}
	}
}
