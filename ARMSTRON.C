#include<stdio.h>
#include<conio.h>
#include<math.h>
void main() {
	int c=0,n,b,r,a=0;
	clrscr();
	printf("\nEnter a number:");
	scanf("%d",&n);
	b=n;
	while(b!=0)
	{
	b/=10;
	c++;
	}
	b=n;
	while(b!=0)
	{
		r=b%10;
		a+=pow(r,c);
		b=b/10;
	}
	if(a==n)
	printf("It is an armstrong number");
	else
	printf("no");
	getch();
}
