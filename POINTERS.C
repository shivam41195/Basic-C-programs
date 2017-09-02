#include<stdio.h>
#include<conio.h>
void main()
{
int b=10;
int a=5;
int *ptr;
clrscr();
ptr=&a;
printf("\n value of b=%d",b);
printf("\n value of a=%d",a);
printf("\n Address of a=%u",&a);
printf("\n value in ptr=%u",ptr);
printf("\n value pointed by ptr=%d",*ptr);
ptr=&b;
*ptr=8;

printf("\n new value pointed by ptr=%d",*ptr);
printf("\n new value of b is:%d",*ptr);
getch();
}