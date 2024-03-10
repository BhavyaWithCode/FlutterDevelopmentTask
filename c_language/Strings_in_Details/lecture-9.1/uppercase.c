//Q.1 Write a Program to convert the given string in uppercase.

#include<stdio.h>

main()
{
	char string[100];
	int i;
	
	printf("\nEnter the string :- ");
	scanf("%s",&string);
	
	for(i = 0; string[i]!='\0'; i++)
	{
		if(string[i] >= 'a' && string[i] <='z')
		{
			string[i] = string[i] - 32;
		}
	}
	
	printf("Uppercase string: %s\n", string);
}
