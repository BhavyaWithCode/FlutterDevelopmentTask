#include <stdio.h>

int SumOfArray(int array[], int size)
{
    int sum = 0, i;
    for (i = 0; i < size; i++)
    {
        sum += array[i];
    }

    return sum; // return the sum, not 0
}

int main()
{
    int size;

    printf("\nEnter array size: ");
    scanf("%d", &size);

    int array[size];
    int i;

    printf("Enter array elements: \n");
    for (i = 0; i < size; i++) 
    {
        printf("a[%d] = ", i);
        scanf("%d", &array[i]); 
    }

    int sum = SumOfArray(array, size); 

    printf("The sum of the array: %d\n", sum); 

    return 0;
}

