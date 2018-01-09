#include<stdio.h>
#include<conio.h>
void main()
{
int n,arr[20],i=0,min,temp;
printf("enter array limit");
scanf("%d",&n);
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
printf("sorted array is");
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
getch();
}

