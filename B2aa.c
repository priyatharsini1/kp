#include<stdio.h>
#include<string.h>
int main()
{
	int i=1,a,fact=1;
	printf(" Enter the number");
	scanf(" %d",&a);
	 while(i<=a)
	 {
	 	fact=fact*i;
	 	i++;
	 }
	 printf("%d ",fact);
	 return 0;
}
