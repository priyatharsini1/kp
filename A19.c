#include<stdio.h>
#include<conio.h>
void main()
{
int fact,i,n;
clrscr();
printf("enter the value of n");
scanf("%d",&n);
for(i=0;i<=n;i++)
fact=fact*i;
printf(" the fact %d",fact);
getch();
}
