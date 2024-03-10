//Q.2 Write a Program to convert the given string in lowercase.

#include<stdio.h>

main()
{
	char string[100];
	int i;
	
	printf("\nEnter the string :- ");
	scanf("%s",&string);
	
	for(i = 0; string[i]!='\0'; i++)
	{
		if(string[i] >= 'A' && string[i] <='Z')
		{
			string[i] = string[i] + 32;
		}
	}
	
	printf("Lower string: %s\n", string);
}
