#include<stdio.h>
void main()
{
int a,b,min;
scanf("%d%d",&a,&b);
min=(a<b)?a:b;
for(min=2; min <= a && min <= b; ++min)
{
if((a%min==0)&&(b%min==0))
{
printf("gcd of %d and %d is %d",a,b,min);
  break;
}
}
}

