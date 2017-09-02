#include<stdio.h>
#include<conio.h>
void main()
{
int a[10];
int i,j;
clrscr();
printf("\n Enter the values in the array:\n");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
printf("\n Enter the number to find the index:\t");
scanf("%d",&j);
for(i=0;i<10;i++)
{
if (j==a[i])
{
printf("\n number found at pos:%d",i);
break;
}
}
if(j>=10)
{
printf("\n not found");
}
getch();
}
