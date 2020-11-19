#include<stdio.h>

int main()
{
 int length,breadth,height,volume;

 printf("\n Enter the length,breadth and height of the cuboid:");
 scanf("%d%d%d",&length,&breadth,&height);
 volume=(length*breadth*height);
 printf("\n Volume of cuboid is %d",volume);
 return 0;
}