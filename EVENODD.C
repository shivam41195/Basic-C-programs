#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("\n Enter the value you want to check for:");
scanf("%d",&a);
if(a%2==0)
{
printf("the vale entered %d is an even number");
}
else
{
printf("it is odd");
}
getch();
}