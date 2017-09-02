#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char q;
int pos;
char *a;
char s1[50];
clrscr();
printf("\n Enter a text or phrase:");
scanf("%s",s1);
fflush(stdin);
printf("\n Enter the char to be searched:");
scanf("%c",&q);
a=strchr(s1,q);
pos=a-s1;
printf("\n The character is at position:%d",pos);
getch();
}