#include<stdio.h>
#include<conio.h>
void printarray(int *a);
void printarray(int *a)
{
int i;
for(i=0;i<5;i++)
{
printf("\n%d",a[i]);
}
}
void main()
{
int a[5],i;
clrscr();
for(i=0;i<5;i++)
{
printf("\n Enter number%d:",i+1);
scanf("%d",&a[i]);
}
printarray(&a[0]); /*sends the address of
the starting array to the function*/
getch();
}