#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2,result;
clrscr();
printf("\nEnter two numbers to add:");
scanf("%d %d",&num1,&num2);
result=num1+num2;
printf("\nThe addition of %d and %d is:%d",num1,num2,result);
getch();
}
