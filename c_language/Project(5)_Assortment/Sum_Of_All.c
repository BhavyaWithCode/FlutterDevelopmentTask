#include<stdio.h>

int main() {
    int RowSize, ColSize;
    int i, j;

    printf("\nEnter the array's row size: ");
    scanf("%d", &RowSize);

    printf("\nEnter the array's col size: ");
    scanf("%d", &ColSize);

    int array[RowSize][ColSize];

    printf("\nEnter array's elements: ");

    for (i = 0; i < RowSize; i++) 
	{
        for (j = 0; j < ColSize; j++) 
		{
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    int RowNumber, ColNumber;

    printf("\nEnter row number: ");
    scanf("%d", &RowNumber);

    printf("\nElements of row : ");

    for (j = 0; j < ColSize; j++) 
	{
        printf("%d ", array[RowNumber][j]);
    }

    int RowSum = 0;

    for (j = 0; j < ColSize; j++) 
	{
        RowSum += array[RowNumber][j];
    }

    printf("\nThe sum of row %d : %d\n", RowNumber, RowSum);


    printf("\nEnter col number: ");
    scanf("%d", &ColNumber);

    printf("\nElements of column : ");

    for (i = 0; i < RowSize; i++) 
	{
        printf("%d ", array[i][ColNumber]);
    }

    int ColSum = 0;

    for (i = 0; i < RowSize; i++) 
	{
        ColSum += array[i][ColNumber];
    }

    printf("\nThe sum of column %d : %d\n", ColNumber, ColSum);

}

