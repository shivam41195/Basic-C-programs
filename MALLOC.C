/*dynamic memory allocation is done by malloc*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
int i;
int *arr,size;
clrscr();
printf("\nEnter the size of the array:");
scanf("%d",&size);
//arr=(int *)realloc(arr,size*sizeof(int));reallocates more memory if needed
arr=(int *)calloc(sizeof(int),size);//clears the junk values and allocates
/*arr=(int*)malloc(size*sizeof(int));//malloc
/*for(i=0;i<size;i++)
{
printf("Enter the values in array:");
scanf("%d",arr);
arr++;
}*/
//arr=arr-size;
for(i=0;i<size;i++)
{
printf("\nThe value at %d is %d",i+1,*arr);
arr++;
}
free(arr);
getch();
}