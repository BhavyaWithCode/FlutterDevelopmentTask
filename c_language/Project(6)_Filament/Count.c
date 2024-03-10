#include<stdio.h>

main()
{
	char string[100];
	
	int frequency[256] = {0};
	
	printf("\nEnter an string :- ");
	scanf("%s",&string);
	
	int i = 0;
	int j;
	do
	{
		frequency[string[i]]++;
		i++;
	}while(string[i]);
	
	printf("Character frequency:\n");
	
	for(j = 0; j < 256; j++)
	{
		 if (frequency[j]) 
		{
            printf("%c: %d\n", j, frequency[j]);
        }
	}
}
