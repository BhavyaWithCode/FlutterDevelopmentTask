#include <stdio.h>

int main()
{
    int firstNumber, secondNumber, thirdNumber, fourthNumber, fifthNumber;

    printf("\n************************************************************\n");
    printf("Enter The First Number  :- ");
    scanf("%d", &firstNumber);
    printf("Enter The Second Number :- ");
    scanf("%d", &secondNumber);
    printf("Enter The Third Number  :- ");
    scanf("%d", &thirdNumber);
    printf("Enter The Fourth Number :- ");
    scanf("%d", &fourthNumber);
    printf("Enter The Fifth Number  :- ");
    scanf("%d", &fifthNumber);
    printf("************************************************************\n\n");

    printf("************************************************************\n");
    printf("*                     Output Of Maximum                     *\n");

    if (firstNumber == secondNumber && secondNumber == thirdNumber && thirdNumber == fourthNumber && fourthNumber == fifthNumber)
    {
        printf("All values are same.\n");
    }
    else if (firstNumber == secondNumber)
    {
        printf("FirstNumber and SecondNumber both are same.\n");
    }
    else if (firstNumber == thirdNumber)
    {
        printf("FirstNumber and ThirdNumber both are same.\n");
    }
    else if (secondNumber == thirdNumber)
    {
        printf("SecondNumber and ThirdNumber both are same.\n");
    }
    else if (thirdNumber == fourthNumber)
    {
        printf("ThirdNumber and FourthNumber both are same.\n");
    }
    else if (secondNumber == fourthNumber)
    {
        printf("SecondNumber and FourthNumber both are same.\n");
    }
    else if (fourthNumber == fifthNumber)
    {
        printf("FourthNumber and FifthNumber both are same.\n");
    }
    else
    {
        if (firstNumber >= secondNumber && firstNumber >= thirdNumber && firstNumber >= fourthNumber && firstNumber >= fifthNumber)
        {
            printf("%d Is The Maximum Number\n", firstNumber);
        }
        else if (secondNumber >= firstNumber && secondNumber >= thirdNumber && secondNumber >= fourthNumber && secondNumber >= fifthNumber)
        {
            printf("%d Is The Maximum Number\n", secondNumber);
        }
        else if (thirdNumber >= firstNumber && thirdNumber >= secondNumber && thirdNumber >= fourthNumber && thirdNumber >= fifthNumber)
        {
            printf("%d Is The Maximum Number\n", thirdNumber);
        }
        else if (fourthNumber >= firstNumber && fourthNumber >= secondNumber && fourthNumber >= thirdNumber && fourthNumber >= fifthNumber)
        {
            printf("%d Is The Maximum Number\n", fourthNumber);
        }
        else
        {
            printf("%d Is The Maximum Number\n", fifthNumber);
        }
    }
    printf("************************************************************\n");
    return 0;
}
