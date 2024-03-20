#include<stdio.h>

struct Employee
{
	int employee_id;
	char employee_name[50];
	int employee_age;
	char employee_role[50];
	char employee_city[50];
	int employee_experience;
	char company_name[50];
};


int main()
{
	int Number_Employees;
	int i;
	
	printf("\nEnter The Number Of Employees :- ");
	scanf("%d",&Number_Employees);
	
	struct Employee employees[Number_Employees];
	
	for(i = 0; i < Number_Employees;i++)
	{
		printf("Enter The Details Of Employees %d :- \n",i + 1);
		
		printf("Employees ID :- ");
		scanf("%d",&employees[i].employee_id);
		
		printf("Employees Name :- ");
		scanf("%s",&employees[i].employee_name);
		
		printf("Employees Age :- ");
		scanf("%d",&employees[i].employee_age);
		
		printf("Employees Role :- ");
		scanf("%s",&employees[i].employee_role);
		
		printf("Employees City :- ");
		scanf("%s",&employees[i].employee_city);
		
		printf("Employees Experience :- ");
		scanf("%d",&employees[i].employee_experience);
		
		printf("Employees Company's Name :- ");
		scanf("%s",&employees[i].company_name);
	}
	
	
	printf("\nEmployees Record System\n");
	printf("---------------------------\n");
	
	for(i = 0; i < Number_Employees; i++)
	{
		printf("Employees :- %d\n", i + 1);
		
		printf("Employees ID :- %d\n",employees[i].employee_id);
		printf("Employees Name :- %s\n",employees[i].employee_name);
		printf("Employees Age :- %d\n",employees[i].employee_age);
		printf("Employees Role :- %s\n",employees[i].employee_role);
		printf("Employees City:- %s\n",employees[i].employee_city);
		printf("Employees Experience:- %d\n",employees[i].employee_experience);
		printf("Employees Company's Name:- %s\n",employees[i].company_name);
		
		printf("\n");
	}
	return 0;
}

