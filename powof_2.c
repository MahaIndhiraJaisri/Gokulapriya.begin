#include<stdio.h>
#include<math.h>
void main()
{
int n,i=1;
printf("enter the number");
scanf("%d",&n);
if(n==0)
{
printf("yes");
}
else
{
while(i<(n/2))
{
if(pow(2,i)==n)
{
printf("yes");
}
else
{
printf("no");
}
}
}
}

