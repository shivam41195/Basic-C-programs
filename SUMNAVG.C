#include<stdio.h>
#include<conio.h>
void main()
{
double marks[5],i=0,sum=0;
double avg;
clrscr();
printf("\n Enter your marks in each subject:");
for(i=0;i<5;i++)
{
scanf("%lf",&marks[i]);
sum+=marks[i];
avg=sum/5;
}
printf("\n Total marks obtained is:%lf",sum);
printf("\n Average is:%lf",avg);
getch();
}
