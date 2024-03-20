#include<stdio.h>

int main()
{
	FILE *file;
	
	int number;
	
	file = fopen("divisible_numbers.txt","w");
	
	if(file == NULL)
	{
		printf("Unable To Create Or Open A File\n");
	}
	
	for(number = 1; number <= 50; number++)
	{
		if(number % 3 == 0 && number % 5 == 0)
		{
			fprintf(file,"%d\n",number);
		}
	}
	
	fclose(file);
	
	printf("Numbers are divisible by both 3 and 5 between 1 to 50 have been written to the file");
	
	return 0;
}
