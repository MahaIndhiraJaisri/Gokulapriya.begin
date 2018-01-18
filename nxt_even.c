#include<stdio.h>
void main()
{
int n;
printf("enter the number");
scanf("%d",&n);
if((n/2)==0)
{
printf("nearest even is  %d",n);
}
else
{
printf("nearest even is %d",--n);
}
}


