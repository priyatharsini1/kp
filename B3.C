#include <stdio.h>

int main() 

 

{

int n,remainder,r=0;

int result;

scanf(" %d",&n);

while(n!=0)

 

{

 

remainder=n%10;

 

r=r*10+remainder;

 

n=n/10;

 

}

 

printf("\n %d",r);

return 0;

 

}
