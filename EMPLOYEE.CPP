#include<stdio.h>
#include<conio.h>
void main()
{
     char id[10];
     int hour;
     double value, salary;
     printf("Input the Employees ID(Max 10 chars):");
     scanf("%s", &id);
     printf("\nInput the working hour:");
     scanf("%d", &hour);
     printf("\nSalary amount/hr:");
     scanf("%lf", &value);
     salary = value * hour;
     printf("\n Employees ID = %s\nSalary = U$ %.21f\n", id,salary);
     getch();
}