#include<stdio.h>
void main()
{
int a[30],n,k,i;
printf("enter the limit");
scanf("%d%d",&n,&k);
printf("array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("k-th element is: %d",a[--k]);
}

