#include<stdio.h>
void main()
{
float n,t;
int temp,N;
printf("enter the one digit floating point number");
scanf("%f",&n);
temp=n;
t=temp+0.5;
if(n>t)
{
N=temp+1;
printf("rounded value=%d",N);
}
else
{
printf("rounded value=%d",temp);
}
}



