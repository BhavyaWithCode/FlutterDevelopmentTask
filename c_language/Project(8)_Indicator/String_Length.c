#include<stdio.h>

int main()
{
	char string[100];
	
	printf("Enter any string:- \n");
	scanf("%[^\n]s",&string);
	
	int length = 0;
	
	char *ptr = string;
	
	while(*ptr)
	{
		length++;
		ptr++;
	}
	
	printf("The length of a string is:- %d\n",length);
}
