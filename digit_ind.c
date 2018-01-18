#include<stdio.h>
void main()
{
int n,rem,count,temp,a[20],i=0,N;
printf("enter the number");
scanf("%d",&n);
temp=n;
while(n!=0)
{
n=n/10;
count++;
}
N=count;
while(temp!=0)
{
rem=temp%10;
a[--count]=rem;
temp/=10;
}
printf("digits in a given number");
for(i=0;i<N;i++)
{
printf("%d\t",a[i]);
}
}


