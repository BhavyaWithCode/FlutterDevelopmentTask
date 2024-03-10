#include <stdio.h>

int main() {
    int RowSize, ColSize;
    int i, j;

    printf("\nEnter the array's row & column size: ");
    scanf("%d", &RowSize);

    ColSize = RowSize;

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

    printf("\nThe transpose matrix of an array: \n");

    for (i = 0; i < RowSize; i++) 
	{
        for (j = 0; j < ColSize; j++) 
		{
            printf("%d ", array[j][i]);
        }
        printf("\n");
    }
}

