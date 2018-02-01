#include<stdio.h>
void main()
{
int a,b,min,l;
scanf("%d%d",&a,&b);
min=(a<b)?a:b;
for(min=2; min <= a && min <= b; ++min)
{
if((a%min==0)&&(b%min==0))
{
  break;
}
}
l=(a*b)/min;
printf("LCM of given number is = %d",l);
}
