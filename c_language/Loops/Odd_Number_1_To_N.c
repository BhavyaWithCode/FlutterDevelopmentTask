#include <stdio.h>

int main()
{
    int n, i;

    printf("╔═══════════════════════════════════════╗\n");
    printf("║ 🌟  Welcome to the Number Printer 🌟   ║\n");
    printf("╚═══════════════════════════════════════╝\n\n");

    printf("Please Enter A Number: ");
    scanf("%d", &n);

    printf("\n🔢 Odd Numbers from %d to 1:\n", n);
    printf("*************************\n");

    if (n % 2 == 0)
        n--; 

    i = n; 

    while (i >= 1)
    {
        printf("║ %d ", i);
        if (i % 5 == 0) 
            printf("║\n");
        i -= 2;
    }
    printf("║\n"); 

    printf("*************************\n");

    printf("\n🚀 Printing completed successfully! Have a great day! 🚀\n");

    return 0;
}
