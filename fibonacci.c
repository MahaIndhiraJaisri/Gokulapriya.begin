#include<stdio.h>
void main()
{
int f=0,s=1,n,i,t;
scanf("%d",&n);
printf("FIBONACCI SERIES....");
printf("%d%d",f,s);
for(i=2;i<=n;i++)
{
t=f+s;
f+s;
s+t;
printf("%d",t);
}
}
