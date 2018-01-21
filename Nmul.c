#include<stdio.h>
void main()
{
int i,mul=1,num,a[30];  
scanf("%d",&num);
printf("enter numbers");
for(i=1;i<=num;i++)
{
scanf("%d",a[i]);
mul=mul*a[i];
}
  printf("product=%d",mul);
}
