#include<stdio.h>
void main()
{
int n,flag=0;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
flag++;
}
printf("no of digits %d",flag);
}
