#include<stdio.h>

int main() {
    int RowSize, ColSize;
    int i, j;

    printf("\nEnter the RowSize : ");
    scanf("%d", &RowSize);

    printf("\nEnter the ColSize : ");
    scanf("%d", &ColSize);

    int array[RowSize][ColSize];

    printf("\nEnter array's elements:");

    for (i = 0; i < RowSize; i++) 
	{
        for (j = 0; j < ColSize; j++) 
		{
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    int largest = array[0][0];

    for (i = 0; i < RowSize; i++) 
	{
        for (j = 0; j < ColSize; j++) 
		{
            if (array[i][j] > largest) 
			{
                largest = array[i][j];
            }
        }
    }

    printf("The largest element is: %d\n", largest);

    return 0;
}

