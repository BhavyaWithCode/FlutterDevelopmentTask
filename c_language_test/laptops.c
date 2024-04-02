#include <stdio.h>

struct laptop 
{
    char Company_Name[50];
    char processor[50];
    float price;
    char Max_Size[100];
};

int main() {
    int Number_Of_Laptops;
    int i;

    printf("Enter The Number Of Laptops :- ");
    scanf("%d", &Number_Of_Laptops);

    struct laptop laptops[Number_Of_Laptops];

    for (i = 0; i < Number_Of_Laptops; i++) 
	{
        printf("Enter The Details Of Laptops:- %d\n", i);
        printf("Company Name:- ");
        scanf("%s", laptops[i].Company_Name);
        printf("Processor:- ");
        scanf("%s", laptops[i].processor);
        printf("Price:- ");
        scanf("%f", &laptops[i].price);
    }

    printf("\nList of Laptops:\n");
    for (i = 0; i < Number_Of_Laptops; i++) 
	{
        printf("\nLaptop %d:\n", i);
        printf("Company Name: %s\n", laptops[i].Company_Name);
        printf("Processor: %s\n", laptops[i].processor);
        printf("Price: %.2f\n", laptops[i].price);
    }

    return 0;
}

