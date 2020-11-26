#include<stdio.h>
#include<conio.h>
void main()
{    int day;
     int year, weeks, days;clrscr();
     printf("Enter number of days\n");
     scanf("%d", &day);
     year = day/365;
     weeks = (day % 365)/7;
     days = day- ((year*365)+ (weeks*7));
     printf("year: %d\n", year);
     printf("weeks %d\n", weeks);
     printf("days: %d\n", days);
     getch();
}