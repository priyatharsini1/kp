#include<conio.h>
#include<conio.h>
void main()
{
int a[20],i,j,count=0,n;
scanf(" %d",&n);
for(i=0;i<n;i++)
{
scanf(" %d",&a[i]);
}
for(i=0;i<n;i++)
{
count=0;
for(j=0;j<n;j++)
{
if(a[i]==a[j])
{
count++;
}
}
if(count==0)
{
printf(" %d",a[i]);
}
}
getch();
}
