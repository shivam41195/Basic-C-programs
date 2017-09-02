#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3];
int i,j,k,c=0;
clrscr();
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
 {
 printf("\n Enter the array:");
 scanf("%d",&a[i][j]);
 }
}
printf("\n Enter the number to be found:");
scanf("%d",&k);
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
 {
  if(a[i][j]==k)
  {
printf("\nthe position is:%d\t%d",i,j);
c=1;
break;
  }
  if(c==1)
  {
  break;
}
}
}
if(c==0)
{
printf("\n not found");
}
getch();
}