#include <stdio.h>

int main() {
    int number_of_fruits;
    int i;
    char fruit[50];
	char color[50];

    printf("Enter the number of fruits: ");
    scanf("%d", &number_of_fruits);

    FILE *file = fopen("data.txt", "w");
    if (file == NULL) 
	{
        printf("Error opening file!");
    }

    for (i = 0; i < number_of_fruits; i++) 
	{
        printf("Enter the name of fruit %d: ", i + 1);
        scanf("%s", fruit);

        printf("Enter the color of fruit %d: ", i + 1);
        scanf("%s", color);

    }
    printf("Fruits and colors have been written to data.txt successfully!");

    return 0;
}
