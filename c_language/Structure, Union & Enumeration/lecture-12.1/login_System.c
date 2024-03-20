#include <stdio.h>
#include <string.h>

struct Student {
    int stu_id;
    char stu_name[50];
    int stu_age;
    char stu_course[50];
    char stu_city[50];
    int stu_standard;
    char stu_school[50];
    char username[50];
    char password[50];
};

int main() {
    struct Student students[3];
    int i;
    for (i = 0; i < 3; i++) 
	{
        printf("Enter details for student %d:\n", i + 1);
        printf("Student ID: ");
        scanf("%d", &students[i].stu_id);
        printf("Student Name: ");
        scanf("%s", students[i].stu_name);
        printf("Student Age: ");
        scanf("%d", &students[i].stu_age);
        printf("Student Course: ");
        scanf("%s", students[i].stu_course);
        printf("Student City: ");
        scanf("%s", students[i].stu_city);
        printf("Student Standard: ");
        scanf("%d", &students[i].stu_standard);
        printf("Student School: ");
        scanf("%s", students[i].stu_school);
        printf("Username: ");
        scanf("%s", students[i].username);
        printf("Password: ");
        scanf("%s", students[i].password);
        printf("\n");
    }


    char username[50];
    char password[50];
    printf("Enter your username: ");
    scanf("%s", username);
    printf("Enter your password: ");
    scanf("%s", password);

    
    int found = 0;
    struct Student loggedInStudent;
    for (i = 0; i < 3; i++) 
	{
        if (strcmp(username, students[i].username) == 0 && strcmp(password, students[i].password) == 0) 
		{
            found = 1;
            loggedInStudent = students[i];
            break;
        }
    }

    if (found) 
	{
        printf("\nLogin Successful, Welcome %s!\n", loggedInStudent.stu_name);
        printf("Student ID: %d\n", loggedInStudent.stu_id);
        printf("Student Age: %d\n",loggedInStudent.stu_age);
        printf("Student Course: %s\n",loggedInStudent.stu_course);
        printf("Student City: %s\n",loggedInStudent.stu_city);
        printf("Student Standard:%d\n",loggedInStudent.stu_standard);
        printf("Student School:%s\n",loggedInStudent.stu_school);
	}
    else
    {
	 printf("\nInvalid username or password. Please try again.\n");
    }
}

