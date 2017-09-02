#include<stdio.h>
#include<conio.h>
void main() {
int i,first=0,second=1,next,n;
printf("\nEnter number of elements:");
scanf("%d",&n);
printf("\n%d",first);
printf("\n%d",second);
for(i=0;i<n;i++)
{
next=first+second;
printf("\n%d",next);
first=second;
second=next;
}
getch();
}
		