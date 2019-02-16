#include<stdio.h>
#include<math.h>
int main()
{
 long int a,b,sum=0,c;
 int n=0;
 scanf(" %ld",&a);
 b=a;
c=a;
 while(a>0)
{
 a=a/10;
n++;
}
while(c>0)
{
 a=c%10;
 sum=sum+pow(a,n);
 c=c/10;

}
if(sum==b)
printf(" yes");
else
printf(" no");
return 0;
}
