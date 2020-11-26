#include<stdio.h>
#include<conio.h>
void main()
{
     int ndays, y, m, d;
     clrscr();
     printf("Input no of days:");
     scanf("%d", &ndays);
     y = (int)ndays/365;
     ndays = ndays-(365*y);
     m = (int)ndays/30;
     d = (int)ndays - (m*30);

     printf("%d Year(s) \n %dMonth(s)\n %d Day(s)", y, m ,d);
     getch();
}