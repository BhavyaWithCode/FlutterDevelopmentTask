#include<stdio.h>

int main() {
    char string[100];
    int i;

    printf("\nEnter the string: ");
    scanf("%s", string);

    if (string[0] >= 'a' && string[0] <= 'z') 
	{
        string[0] = string[0] - 32;
    }

    for (i = 1; string[i] != '\0'; i++) 
	{
        if (string[i] == ' ' && string[i + 1] >= 'a' && string[i + 1] <= 'z') 
		{
            string[i + 1] = string[i + 1] - 32;
        }
    }

    printf("Title case string: %s\n", string);
}
