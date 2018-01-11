#include<stdio.h>
#include<conio.h>
void main()
{
int arr[20],i=0,min,temp;
printf("enter array elements");

  for(i=0;i<10;i++)
{
scanf("%d",&arr[i]);
}
min=arr[0];
for(i=0;i<10;i++)
{
if(arr[i]<min)
{
temp=arr[i];
arr[i]=min;
min=temp;
}
}
printf("maximum element is %d",arr[10]);
}

