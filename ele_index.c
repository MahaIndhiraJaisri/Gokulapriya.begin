#include<stdio.h>
void main()
{
int n,arr[1000],i=0;
printf("enter array limit");
scanf("%d",&n);
printf("enter array elements");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i])
}
printf("array element with it's index");
for(i=0;i<n;i++)
{
printf("%d\t%d",arr[i],i);
}
}
