#include<stdio.h>
void main()
{
    int a[10],i,max,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max>a[i])
        {
        printf(" %d",i+1);
        break;
        }
    
    }
}
