#include<stdio.h>
#include<conio.h>
void greatest(double,double,double);
void greatest(double a,double b,double c)
{
if(a>b&&a>c)
{
printf("\n A=%lf is greatest",a);
}
 else if(b>c&&b>a)
 {
   printf("\n B=%lf is greatest",b);
 }
  else if(c>a&&c>b)
  {
   printf("\n C=%lf is greatest",c);
  }
    else if(a=b=c)
    {
     printf("\n A=%lf,B=%lf and C=%lf all are equal",a,b,c);
    }
}
void main()
{
double i,j,k;
clrscr();
printf("\n Enter three numbers to find the greates of three:");
scanf("%lf %lf %lf",&i,&j,&k);
greatest(i,j,k);
getch();
}