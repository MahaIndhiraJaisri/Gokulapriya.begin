#include<stdio.h>
void main()
{
int n ,i,c=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if((n%i)==0)
{
c++;
}
}
if(c==0)
{
printf("no,not a composite");
}
else
{
printf("yes, composite");
}
}
