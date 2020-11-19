#include<stdio.h>

int main()
{
 int radius;
 float pi=3.142,area;

 printf("\n Enter the radius of the circle:");
 scanf("%d",&radius);
 area=pi*radius*radius;
 printf("\n Area of circle is %f",area);
 return 0;
}