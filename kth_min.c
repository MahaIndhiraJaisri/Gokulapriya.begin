#include<stdio.h>
#include<conio.h>
void main()
{
int n,arr[20],i=0,min,temp;
scanf("%d%d",&n,&k);
 printf("enter numbers");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
min=arr[0];
for(i=0;i<n;i++)
{
if(arr[i]<min)
{
temp=arr[i];
arr[i]=min;
min=temp;
}
}
printf("k-th minimum is %d",&arr[--k]);
}
