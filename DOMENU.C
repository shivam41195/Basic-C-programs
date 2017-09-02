#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("\n Enter two numbers:");
scanf("%d%d",&a,&b);
do
{
clrscr();
printf("\n MAIN MENU");
printf("\n 1)ADDITION");
printf("\n 2)SUBTRACTION");
printf("\n 3)EXIT");
printf("\nEnter your choice:");
scanf("\%d",&c);
switch(c)
{
case 1:printf("\nAddition of two numbers is %d",a+b);
break;
case 2:printf("\nSubtraction of two numbers is  %d",a-b);
break;
case 3:printf("\n Thank You!");
break;
default:printf("invalid");
break;
}
getch();
}
while(c!=3);
}