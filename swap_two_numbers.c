#include<stdio.h>

int main()
{
 int a,b,c;

 printf("\n Enter two numbers that needs to swapped:");
 scanf("%d%d",&a,&b);
 printf("\n Before swapping");
 printf("\n a=%d and b=%d",a,b);
 c=a;
 a=b;
 b=c;
 printf("\n After swapping");
 printf("\n a=%d and b=%d",a,b);
 return 0;
}
