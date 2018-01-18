#include<stdio.h>
void main()
{
int f=0,s=1,N,i,temp;
scanf("%d",&N);
printf("FIBONACCI SERIES....");
printf("%d%d",f,s);
for(i=2;i<=N;i++)
{
temp=f+s;
f=f+s;
s=s+temp;
printf("%d",temp);
}
}
