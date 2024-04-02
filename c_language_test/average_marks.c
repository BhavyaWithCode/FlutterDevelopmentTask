#include<stdio.h>

int main() {
    int subjects = 5;

    int marks[subjects];
    int i;

    printf("Enter marks for 5 subjects (out of 100):\n");

    for(i = 0; i < subjects; ++i) 
	{
        scanf("%d", &marks[i]);
    }

    float totalmarks = 0;

    for(i = 0; i < subjects; ++i) 
	{
        totalmarks = totalmarks + marks[i];
    }

    float averagemarks = totalmarks / subjects;

    char grades[subjects];

    for(i = 0; i < subjects; ++i) 
	{
        if(marks[i] >= 90) 
		{
            grades[i] = 'A';
        } else if (marks[i] >= 80) 
		{
            grades[i] = 'B';
        } else if (marks[i] >= 70) 
		{
            grades[i] = 'C';
        } else if (marks[i] >= 60) 
		{
            grades[i] = 'D';
        } else {
            grades[i] = 'F';
        }
    }

    printf("Average marks of students :- %.2f\n", averagemarks);
    printf("Students grades of students :- %c\n", grades);

    return 0;
}

