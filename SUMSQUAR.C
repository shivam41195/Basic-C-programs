#include<stdio.h>
#include<conio.h>
void main() {
	int i,low,high,sum=0,total_sum=0;
	clrscr();
	printf("Enter the range to find the square:");
	scanf("%d%d",&low,&high);
	for(i=low;i<=high;i++)
	{
	sum+=i*i;
	total_sum+=sum;
	printf("\n%d square is:%d",i,sum);
	sum=0;
	}
	printf("\nThe sum of squares is:%d",total_sum);
	getch();
}

	