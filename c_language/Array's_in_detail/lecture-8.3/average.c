#include<stdio.h>

main()
{
	int row,col;
	int i,j;
	float sum = 0;
	
	printf("\nEnter the array's row size :- ");
	scanf("%d",&row);
	
	printf("\nEnter the array's col size :- ");
	scanf("%d",&col);
	
	int arrays[row][col];
	
	printf("\nEnter an array's elements :- ");
	
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&arrays[i][j]);
			sum+=arrays[i][j];
		}
	}
	
	float average = sum / (row * col);
	
	printf("\n Average of an array :- %.2f\n",average);	
}
