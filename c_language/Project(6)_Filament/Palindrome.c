#include<stdio.h>

int main() {
    char string[100];
    int length = 0, isPalindrome = 1, i = 0;

    printf("\nEnter a string: ");
    scanf("%s", string);

   
    while (string[length] != '\0') 
	{
        length++;
    }

    i = 0; 

  
    while (i < length / 2) 
	{
        if (string[i] != string[length - i - 1]) 
		{
            isPalindrome = 0;
            break;
        }
        i++;
    }

    if (isPalindrome) 
	{
        printf("Palindrome!\n");
    } else {
        printf("Not a palindrome.\n");
    }

    return 0;
}

