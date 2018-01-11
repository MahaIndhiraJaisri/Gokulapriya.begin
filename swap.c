#include<stdio.h>
void main()
{
int n1,n2,t;
printf("enter the numbers");
scanf("%d%d",&n1,&n2);
t=n1;
n1=n2;
n2=t;
printf("after swappping the numbers are %d,%d",n1,n2);
}
