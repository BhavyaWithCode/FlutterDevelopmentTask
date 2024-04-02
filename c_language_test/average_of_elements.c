
#include <stdio.h>

float calculateAverage(int arr[][3], int rows, int cols) 
{
    int sum = 0;
    int count = 0;
    int i;
    int j;
    
    for (i = 0; i < rows; i++) 
	{
        for (j = 0; j < cols; j++) 
		{
            sum += arr[i][j];
            count++;
        }
    }

    return (float)sum / count;
}

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

    float average = calculateAverage(arr, rows, cols);
    printf("The average of all elements in the array is: %.2f\n", average);

    return 0;
}

