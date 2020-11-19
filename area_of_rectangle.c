#include<stdio.h>

int main()
{
 int length,breadth,area;
 
 printf("\n Enter the length and breadth of the rectangle:");
 scanf("%d%d",&length,&breadth);
 area=length*breadth;
 printf("\n Area of rectangle is %d",area);
 return 0;
}