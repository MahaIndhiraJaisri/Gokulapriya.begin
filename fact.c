#include<stdio.h>
void main()
{
int n,fact=1,i;
scanf("%d"",n);
for(i=0;i<=n;i++)
{
fact=fact*i;
}
printf("%d",fact);
}