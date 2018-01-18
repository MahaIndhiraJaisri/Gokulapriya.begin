#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],i=0,min,temp;
printf("enter array elements");

  for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
min=a[0];
for(i=0;i<10;i++)
{
if(a[i]<min)
{
temp=a[i];
a[i]=min;
min=temp;
}
}
printf("maximum element is %d",a[10]);
}
