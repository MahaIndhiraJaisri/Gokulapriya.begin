#include<stdio.h>
void main()
{
int n1,n2,sub;
printf("enter the numbers");
scanf("%d%d",&n1,&n2);
sub=n1-n2;
if((sub/2)==0)
{
printf("EVEN");
}
else
{
printf("ODD");
}
}
