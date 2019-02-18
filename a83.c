#include <stdio.h>
#include <string.h>
#include<ctype.h>
int main ()
{
    char *a[50],*p;
    char pl='+',min='-',pro='*',div='/',mod='%';
    char r[1000];
    int i=0,j=0,g=0,q,t[100];
    printf("\nEnter the combination of numbers and operators : ");
    scanf("%[^\t]%*s",&a);
    p=strtok(r," \n");
    while(p!=NULL)
    {
        a[i++]=p;
        j++;
        p=strtok (NULL," \n");
    }
    q=0;
   for(i=0;i<j;i++)
    {
     if(*a[i]==pl)
     {
    	t[q]=(atoi(a[i-1]))+(atoi(a[i+1]));
    	q++;
     }
     else if(*a[i]==min)
     {
    	t[q]=(atoi(a[i-1]))-(atoi(a[i+1]));
    	q++;
     }
     else if(*a[i]==pro)
     {
    	t[q]=(atoi(a[i-1]))*(atoi(a[i+1]));
    	q++;
     }
     else if(*a[i]==div)
     {
    	t[q]=(atoi(a[i-1]))/(atoi(a[i+1]));
    	q++;
     }
     else if(*a[i]==mod)
     {
    	t[q]=(atoi(a[i-1]))%(atoi(a[i+1]));
    	q++;
     }
    }
    for(i=0;i<q;i++)
    {
    	printf("\n %d",t[i]);
    }
    return 0;
}
