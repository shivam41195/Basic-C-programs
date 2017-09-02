#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
//printf("\n Values of c=%d,d=%d",c,d);
}
void main()
{
int c,d;
clrscr();
printf("\nEnter the values to swap:");
scanf("%d%d",&c,&d);
swap(&c,&d);
printf("\n Swapped values are c=%d,d=%d",c,d);
getch();
}