#include<stdio.h>
struct abc
{
	char name[10];
	int age;
	int number;
	int salary;
	
};
int main()
{
	struct abc p;
	printf("Enter the employee name:");
	scanf("%s",&p.name);
	printf("Enter the age:");
	scanf("%d",&p.age);
	printf("Enter the number of employee:");
	scanf("%d",&p.number);
	printf("Enter salary :");
	scanf("%d",&p.salary);
	
	struct abc q;
	printf("Enter the employee name:");
	scanf("%s",&q.name);
	printf("Enter the age:");
	scanf("%d",&q.age);
	printf("Enter the number of employee:");
	scanf("%d",&q.number);
	printf("Enter salary :");
	scanf("%d",&q.salary);
	
	struct abc r;
	printf("Enter the employee name:");
	scanf("%s",&r.name);
	printf("Enter the age:");
	scanf("%d",&r.age);
	printf("Enter the number of employee:");
	scanf("%d",&r.number);
	printf("Enter salary :");
	scanf("%d",&r.salary);
	
	printf("\n\tThe data of the employees is:");
	printf("\n\tName=%s",p.name);
	printf("\n\tAge=%d",p.age);
	printf("\n\tPhone number=%d",p.number);
	printf("\n\tSalary=%d",p.salary);
	
	
	printf("\n\tName=%s",q.name);
	printf("\n\tAge=%d",q.age);
	printf("\n\tPhone number=%d",q.number);
	printf("\n\tSalary=%d",q.salary);
	

	printf("\n\tName=%s",r.name);
	printf("\n\tAge=%d",r.age);
	printf("\n\tPhone number=%d",r.number);
	printf("\n\tSalary=%d",r.salary);
	
	return 0;
	
	
}
