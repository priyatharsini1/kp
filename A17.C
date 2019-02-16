#include <stdio.h>

int main(void) {
int n,sum=0,r,a;
printf("enter the number\n");
scanf("%d \n",&n);
if(n>0)
{
	r=n%10;
	a=r*r*r;
	sum=sum+a;
	n=n/10;
	
}
if(n=sum)
{
printf( " armstrong" );
}
else
{
	printf(" not armstrong");
}

 


	return 0;
}
