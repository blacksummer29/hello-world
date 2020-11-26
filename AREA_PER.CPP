#include<stdio.h>
#include<conio.h>
void main()
{
     int radius = 6;
     float pi = 3.142;
     int area = pi*radius*radius;
     int perimeter = 2*(pi*radius);
     clrscr();
     printf("\n The area of this circle is %d", area);
     printf("\n The perimeter of this circle is %d", perimeter);
     getch();
}