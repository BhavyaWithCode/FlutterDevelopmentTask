#include<stdio.h>

int IsDivisibleByThreeAndFive(int num)
{
	if(num % 3 == 0 && num % 5 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int Number;
	int IsDivisible;
	
	do
	{
        printf("\nEnter An Number :- ");
		scanf("%d",&Number);		
		
		IsDivisible = IsDivisibleByThreeAndFive(Number);
		
		
		if(IsDivisible)
		{
			printf("\nThe Given Divisible Number Is Divided By 3 and 5 Both");
		}
		else
		{
			printf("The Given Divisible Number Is Not Divided By 3 and 5 Both ");
		}
	}while(IsDivisible != 1);
}

