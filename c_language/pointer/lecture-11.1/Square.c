#include <stdio.h>

int main() 
{
    int size;
    int i;
    printf("Enter the array's size: ");
    scanf("%d", &size);

    int arr[size];
    printf("\nEnter array's elements:\n");
    for (i= 0; i < size; i++) 
	{
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nSquare of each element:\n");
    for (i = 0; i < size; i++) 
	{
        int *ptr = &arr[i];
        int square = *ptr * *ptr;
        printf("%d", square);
        if (i != size - 1) 
		{
            printf(", ");
        }
    }

    printf("\n");
}
