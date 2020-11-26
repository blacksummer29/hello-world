#include<stdio.h>
#include<conio.h>
void main()
{
     double wi1, ci1, wi2, ci2, result;
     clrscr(); printf("Weight - Item1:");
     scanf("%lf", &wi1);
     printf("No of item1: ");
     scanf("%lf", &ci1);
     printf("Weight - Item2:");
     scanf("%lf", &wi2);
     printf("No of Item2:");
     scanf("%lf",&ci2);
     result = ((wi1 * ci1) + (wi2 * ci2)) / (ci1 + ci2);
     printf("Average Value = %f\n", result);
     getch();
}