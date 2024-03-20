#include<stdio.h>

struct student
{
    int student_id;
    char student_name[50];
    int student_age;
    char student_course[50];
    char student_city[50];
    int student_standard;
    char student_school[50];
}; 

int main()
{
    struct student students[3];
    int i;
    for(i = 0; i < 3; i++)
    {
        printf("\nEnter Student Details - %d\n\n", i + 1);
        
        printf("Student ID: ");
        scanf("%d", &students[i].student_id);
        
        printf("Student Name: ");
        scanf("%49s", students[i].student_name); 
        
        printf("Student Age: ");
        scanf("%d", &students[i].student_age);
        
        printf("Student Course: ");
        scanf("%49s", students[i].student_course); 
        
        printf("Student City: ");
        scanf("%49s", students[i].student_city); 
        
        printf("Student Standard: ");
        scanf("%d", &students[i].student_standard);
        
        printf("Student School: ");
        scanf("%49s", students[i].student_school); 
    }
    
    
    printf("\nStudents Record System\n");
    printf("-----------------------\n");
    
    for(i = 0; i < 3; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("ID: %d\n", students[i].student_id);
        printf("Name: %s\n", students[i].student_name);
        printf("Age: %d\n", students[i].student_age);
        printf("Course: %s\n", students[i].student_course);
        printf("City: %s\n", students[i].student_city);
        printf("Standard: %d\n", students[i].student_standard);
        printf("School: %s\n", students[i].student_school);
        printf("\n");
    }
    
    return 0; 
}

