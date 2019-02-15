#include <stdio.h>
#include<math.h>
int main()
{
 int i,mul=1,num,a;  
scanf(" %d",&num);
while(num>0)
{
  a=num%10;   
  num=num/10;
  mul=mul*a;
}
  printf("product=%d",mul);
    return 0;
}


