#include<stdio.h>
void main()
{
int a[20],i=0,n;
printf("enter the number if elements");
scanf("%d",&n);
printf("enter the array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if((a[i]%2)==0)
{
a[i]=a[i]/2;
}
else
{
printf("%d",a[i]);
break;
}
}
}
