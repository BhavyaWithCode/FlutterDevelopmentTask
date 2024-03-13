#include<stdio.h>

int StringLength(char str[])
{
	int length = 0;
	
	while(str[length] != '\0')
	{
		length++;
	}
	return length;
}


int main()
{
	char string[100];
	
	printf("Enter a string :- ");
	scanf("%s",&string);
	
	int length = StringLength(string);
	
	printf("Length is :- %d " , length);
	
	return 0;
}
