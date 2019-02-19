#include <stdio.h>

int main()
{
    char a[20],b[20];
    int count=0,i;
    printf("enter the strings");
    scanf("%s%s",&a,&b);
    for(i=0;(a[i]!=0&&b[i]!=0);i++)
    {
        if(a[i]!=b[i])
        {
            count++;
        }
    }
    if(count==1)
    {
        printf("\nstrings are differ from one character");
    }
    else
    {
        printf("\nstrings are not differ from one character ");
    }
    return 0;
}



