#include<stdio.h>
#include<string.h>
char str[20],k;
int i,val1=0,val2=0,j;
void main()
{
scanf("%s",str);
for(i=0;str[i]!='+'&&str[i]!='-'&&str[i]!='*'&&str[i]!='/';i++)
{
	val1=val1*10+(str[i]-48);
}
k=str[i++];
for(j=i;str[j]!='\0';j++)
	val2=val2*10+(str[j]-48);
switch(k)
{case '+':
	printf("%d",val1+val2);
	break;
	case '-':
	printf("%d",val1-val2);
	break;
	case '*':
	printf("%d",val1*val2);
	break;
	case '/':
	printf("%d",val1/val2);
	break;
}
}
