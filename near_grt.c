#include<stdio.h>
void main()
{
int n;
printf("enter the number");
scanf("%d",&n);
if((n%10)==0)
{
printf("the given number %d is a mulitiple of 10",n);
}
else
{
do
{
n++;
}while((n%10)!=0);
printf("%d is a nearset greater multiple of 10",n);
}
}
