#include<stdio.h>
void main()
{
int n,arr[1000],i=0,mid;
printf("enter array limit");
scanf("%d",&n);
if(!(n<=1000)&&(n>=1))
{
printf("limit should with in 1 to 1000");
}
else
{
printf("enter array elements");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i])
}
mid=n/2;
printf("middle element is %d",arr[mid]);
}
}
