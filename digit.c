#include<stdio.h>
void main()
{
int n,count=0;
scanf("%d",&n);
while(n>0)
{
n=n/2;
count++;
}
printf("no.of digit = %d",count);
}
