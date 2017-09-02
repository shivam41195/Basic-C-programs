#include<stdio.h>
#include<conio.h>
void main()
{
double arr[20],small;
int i,size,pos;
clrscr();
printf("\n Enter the size of the array:");
scanf("\n%d",&size);
for(i=0;i<size;++i)
{
printf("\n Enter the elements of the array a pos %d:",i);
scanf("%lf",&arr[i]);
small=arr[0];
pos=0;
}
for(i=0;i<size;++i)
{
if(arr[i]<small)
	{
	small=arr[i];
	pos=i;
	}
}
printf("\n The smallest element in the array is %lf at position %d",small,pos+1);
getch();
}
