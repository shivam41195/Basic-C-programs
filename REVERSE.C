#include<stdio.h>
#include<conio.h>
void main()
{
char word[20],rev[20];
int i,j,length;
clrscr();
printf("\n Enter a text you want to reverse:");
scanf("%19[^\n]s",&word);
for(i=0;word[i]!='\0';i++);
{
length=i-1;
for(j=0;j<=i-1;j++)
{
rev[j]=word[length];
length--;
}
printf("\n reversed string is:%s",rev);
getch();
}
}

