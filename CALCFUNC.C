#include<stdio.h>
#include<conio.h>
void addsub(double,double);
void addsub(double num1,double num2)
{
double a,s,d,e;
a=num1+num2;
s=num1-num2;
d=num1*num2;
e=num1/num2;
printf("\n Addition of the numbers is:%lf",a);
printf("\n Subtraction of the numbers is:%lf",s);
printf("\n Multiplication of the two numbers is:%lf",d);
printf("\n division of the two numbers is:%lf",e);
}
void main()
{
double i,j;
clrscr();
printf("\n Enter two number to get operations:");
scanf("%lf %lf",&i,&j);
addsub(i,j);
getch();
}