#include<stdio.h>
void main()
{
int n1,n2,min;
scanf("%d%d",&n1,&n2);
min=(n1<n2)?n1:n2;
for(min=1; min <= n1 && min <= n2; ++min)
{
if((n1%min==0)&&(n2%min==0))
{
printf("gcd of given num is %d",min);
  break;
}
}
}
