#include<stdio.h>
void main()
{
int num,pow,i,mul;
printf("enter num and power");
scanf("%d",&num);
scanf("%d",&pow);
mul=num;
for(i=1;i<=pow;i++)
{
mul=mul*num;
}
printf("answer = %d",mul);
}
