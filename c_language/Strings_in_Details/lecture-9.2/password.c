//Q.1 Write a Program to check if a given password is strong or not by satisfying the below criteria:
//- Password must contain at least one letter, one digit & one special symbol.
//- Password must be 6 characters.

#include<stdio.h>

main()
{
	char password[50];
	
	int hasDigit = 0, hasLetter = 0, hasSpecial = 0;
	int i;
	
	printf("\nCreate Your Password :- ");
	scanf("%s", &password);
	
    if(strlen(password < 6))
    {
    	printf("Your Password Is Not Strong. It's Should Be AtLeast 6 Characters\n");
    	return 0;
	}
	
	for(i = 0; i < strlen(password); i++)
	{
		if ((password[i] >= 'A' && password[i] <= 'Z') || (password[i] >= 'a' && password[i] <= 'z')) 
		{
          hasLetter = 1;
        } else if (password[i] >= '0' && password[i] <= '9')
		{
          hasDigit = 1;
        } else 
		{
          hasSpecial = 1;
        }
	}
	
	if(hasLetter && hasDigit && hasSpecial)
	{
		printf("Your password is strong!\n");
	}
	else
	{
		printf("Your password is not strong. It must contain at least one letter, one digit, and one special symbol.\n");
	}
}
