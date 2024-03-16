#include <stdio.h>

void ReverseArray(int *array, int size) 
{
    int *start = array;
    int *end = array + size - 1;
    
    while (start < end) 
	{
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() 
{
    int size;
    int i;
    
    printf("Enter the array's size: ");
    scanf("%d", &size);
    
    int array[size];
    
    printf("Enter the array elements: \n");
    
    for (i = 0; i < size; i++) 
	{
        printf("a[%d] = ", i);
        scanf("%d", &array[i]);
    }
    
    ReverseArray(array, size);
    
    printf("Reversed array elements: \n");
    for (i = 0; i < size; i++) 
	{
        printf("%d ", array[i]); 
    }
    
    return 0;
}

