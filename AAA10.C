#include<stdio.h>
int main()
{
char a[10],b[10];
int i,count=0;
scanf("%s   %s",a,b);
for(i=0;a[i]!='\0';i++)
{
if(a[i]!=b[i])
{
count++;
}
}
if(count==1)
{
printf(" yes");
}
else
{
printf("no");
}
}
