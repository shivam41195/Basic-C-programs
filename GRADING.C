#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("\nPlease enter marks obtained(0-100):");
scanf("%d",&a);
if(a>100 || a<0)
{
printf("\n PLEASE ENTER A VALID RANGE 0-100");
if(a>=80 && a<=100)
{
printf("\nThe grade obtained by you is:\t A GRADE");
}
else if(a>=70&&a<80)
{
printf("\nThe grade obtained by you is:\t B GRADE");
}
else if(a>=55&& a<=69)
{
printf("\nThe grade obtained by you is:\t C GRADE");
}
else if(a>=35&& a<=54)
{
printf("\nThe grade obtained by you is:\t D GRADE");
}
else if(a<35&&a>=0)
{
printf("\n You have FAILED! TRY next SEMESTER");
}
getch();
}
}



