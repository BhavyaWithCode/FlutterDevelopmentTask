#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char ch;

   
    sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL) 
	{
        printf("Unable to open the source file.\n");
        return 1; 
    }


    destinationFile = fopen("destination.txt", "w");
    if (destinationFile == NULL) 
	{
        printf("Unable to create or open the destination file.\n");
        fclose(sourceFile);
        return 1; 
    }


    while ((ch = fgetc(sourceFile)) != EOF)
    {
        printf("%c", ch); 
        fputc(ch, destinationFile);
    }

    
    fclose(sourceFile);
    fclose(destinationFile);

    printf("Content copied from source file to destination file successfully.\n");

    return 0; 
}

