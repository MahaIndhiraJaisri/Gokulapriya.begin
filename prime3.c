#include<stdio.h>
void main()
{
int N ,i,count=0;
scanf("%d",&N);
for(i=1;i<=N;i++)
{
if((N%i)==0)
{
count++;
}
}
if(count==0)
{
printf("prime number");
}
else
{
printf("not a prime number");
}
}
