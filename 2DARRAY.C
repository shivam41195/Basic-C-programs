#include<stdio.h>
#include<conio.h>
/*the following program depicts 2D array*/
void main()
{
int a[3][3];
int row,col;
clrscr();
for(row=0;row<3;row++)
{
for(col=0;col<3;col++)
{
printf("\n Enter the values:");
scanf("%d",&a[row][col]);
}
}
for(row=0;row<3;row++)
{
for(col=0;col<3;col++)
{
printf("\t%d",a[row][col]);
}
printf("\n");
}
getch();
}
