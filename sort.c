#include<stdio.h>
#include<conio.h>
void main()
{
int n,arr[20],i=0,j=0,min,temp;
printf("enter array limit between 1 to 1000");
scanf("%d",&n);
  if(!(n>=1)&&(n<=1000))
  {
    printf("limit only with in 1 to 1000");
  }
  else
  {
printf("enter numbers");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
min=arr[0];
    for(j=0;j<n-1;j++)
    {
for(i=j;i<n;i++)
{
if(arr[i]>arr[j])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
printf("sorted array is");
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
  }
getch();
}

