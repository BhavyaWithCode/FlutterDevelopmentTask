//Q.3 Write a Program to convert the given string in toggle case.

#include<stdio.h>

int main() {
    char string[100];
    int i;

    printf("\nEnter the string: ");
    scanf("%s", string);

    for (i = 0; string[i] != '\0'; i++) 
	{
        if (string[i] >= 'A' && string[i] <= 'Z') 
		{
            string[i] = string[i] + 32;
        } else if (string[i] >= 'a' && string[i] <= 'z') 
		{
            string[i] = string[i] - 32;
        }
    }

    printf("Toggle case string: %s\n", string);
}
