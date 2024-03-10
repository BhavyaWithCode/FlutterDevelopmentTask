#include <stdio.h>

int main() 
{
    char desiredEmail[] = "admin@gmail.com";
    char desiredPassword[] = "123456";

    char enteredEmail[100];
    char enteredPassword[100];

    printf("Enter your email: ");
    scanf("%s", enteredEmail);

    printf("Enter your password: ");
    scanf("%s", enteredPassword);

    if (strcmp(enteredEmail, desiredEmail) == 0 && strcmp(enteredPassword, desiredPassword) == 0) 
	{
        printf("Login Successful...\n");
    } 
	else 
	{
        printf("Login Failed. Please check your email and password.\n");
    }
}
