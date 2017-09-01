#include<stdio.h>
void main()
{
int start,end,i;
scanf("%d%d",&start,&end);
for(i=start;i<=end;i++)
{
if((i%2)!=0)
{
printf("%d\t",i);
}
}
