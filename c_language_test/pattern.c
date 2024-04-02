#include<stdio.h>

int main()
{
	int Number_Of_Fruits;
	int i;
	char fruits[50];
	char color[50];
	
	printf("Enter The Number Of Fruits:- ");
	scanf("%d ",Number_Of_Fruits);
	
	FILE*file = fopen("data.txt","w");
	
	if(file == NULL)
	{
		printf("The file isn't opening!");
	}
	
	for(i = 0; i < Number_Of_Fruits; i++)
	{
		printf("Enter the name of fruit %d: ", i++);
        scanf("%s", fruit);
	}
	
		printf("Enter the color of fruits %d: ", i++);
        scanf("%s", fruit);
        
   }
    fclose(file);
    printf("Fruits and colors have been written to data.txt successfully!");

    return 0;
}
