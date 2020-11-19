#include<stdio.h>

int main()
{
 int num1,num2,remainder;

 printf("\n Enter two numbers:");
 scanf("%d%d",&num1,&num2);
 remainder=num1%num2;
 printf("\n Remainder is %d",remainder);
 return 0;
}