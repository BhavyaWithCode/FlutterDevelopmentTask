#include<stdio.h>

main()
{
	int sizeA , sizeB , sizeC , i , j;
	
	printf("\nEnter The SizeA :- ");
	scanf("%d",&sizeA);
	
	int arrayA[sizeA];
	
	printf("\nEnter array A's Elements :- ");
	for(i = 0; i<sizeA; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d",&arrayA[i]);
	}
	
	printf("\nEnter The SizeB :- ");
	scanf("%d",&sizeB);
	
	
	int arrayB[sizeB];
	
	printf("\nEnter array B's Elements :- ");
	for(i = 0; i<sizeB; i++)
	{
		printf("b[%d]= ", i);
		scanf("%d",&arrayB[i]);
	}
	
	sizeC = sizeA + sizeB;
	
	int arrayC[sizeC];
	
	for(i = 0; i<sizeA; i++)
	{
		arrayC[i] = arrayA[i];
	}
	
	for(i = 0, j = sizeA; i < sizeB; i++ , j++)
	{
		arrayC[j] = arrayB[i];
	}
	
	printf("\nArray C is :- ");

	for(i = 0; i < sizeC; i++)
	{
		printf("%d",arrayC[i]);
		if(i != sizeC -1)
		{
			printf(",");
		}
	}	
}
