#include<stdio.h>
#include<conio.h>
void main()
{
int arr[20],i=0,max,temp;
printf("enter array elements");

  for(i=0;i<10;i++)
{
scanf("%d",&arr[i]);
}
max=arr[0];
for(i=0;i<10;i++)
{
if(arr[i]>max)
{
temp=arr[i];
arr[i]=max;
max=temp;
}
}
printf("maximum element is %d",arr[10]);
}

