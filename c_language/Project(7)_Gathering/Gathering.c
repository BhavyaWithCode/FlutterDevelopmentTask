#include <stdio.h>

int addition(int FirstNumber, int SecondNumber) 
{
    return FirstNumber + SecondNumber;
}

int substraction(int FirstNumber, int SecondNumber) 
{
    return FirstNumber - SecondNumber;
}

int multiplication(int FirstNumber, int SecondNumber) 
{
    return FirstNumber * SecondNumber;
}

int division(int FirstNumber, int SecondNumber) 
{
    return FirstNumber / SecondNumber;
}

int modulos(int FirstNumber, int SecondNumber) 
{
    return FirstNumber % SecondNumber;
}

int main() 
{
    int Choice;
    int FirstNumber, SecondNumber;

    do {
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 to exit\n\n\n");

        printf("Enter Your Choice: ");
        scanf("%d", &Choice);

        if (Choice == 0) 
		{
            printf("Thanks for connecting with us!\n");
            printf("Visit again!\n");
        } else if (Choice >= 1 && Choice <= 5)
	    {
            printf("Enter First Number: ");
            scanf("%d", &FirstNumber);

            printf("Enter Second Number: ");
            scanf("%d", &SecondNumber);

            switch (Choice) {
                case 1:
                    printf("Addition of %d and %d is %d\n\n\n", FirstNumber, SecondNumber, addition(FirstNumber, SecondNumber));
                    break;

                case 2:
                    printf("Subtraction of %d and %d is %d\n\n\n", FirstNumber, SecondNumber, substraction(FirstNumber, SecondNumber));
                    break;

                case 3:
                    printf("Multiplication of %d and %d is %d\n\n\n", FirstNumber, SecondNumber, multiplication(FirstNumber, SecondNumber));
                    break;

                case 4:
                    printf("Division of %d and %d is %d\n\n\n", FirstNumber, SecondNumber, division(FirstNumber, SecondNumber));
                    break;

                case 5:
                    printf("Modulus of %d and %d is %d\n\n\n", FirstNumber, SecondNumber, modulos(FirstNumber, SecondNumber));
                    break;
            }
        } else 
		{
            printf("Invalid choice! Please select 1 to 5 or 0 to exit.\n\n\n");
        }
    } while (Choice != 0);

    return 0;
}

