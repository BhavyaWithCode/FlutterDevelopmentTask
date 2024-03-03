
#include <stdio.h>

int main() {
    int size,i;
    printf("Enter array size: ");
    scanf("%d", &size);
    
    int array[size];
    printf("Enter array elements:\n");
    for (i = 0; i < size; i++) 
	{
        printf("a[%d] = ", i);
        scanf("%d", &array[i]);
    }
    
    printf("\nOutput:\nThe squares are: ");
    for (i = 0; i < size; i++) 
	{
        int square = array[i] * array[i];
        printf("%d", square);
        if (i != size - 1) 
		{
            printf(", ");
        }
    }
    
    return 0;
}
