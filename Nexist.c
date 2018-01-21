#include<stdio.h>
int main()
{
int n,k,a[30];
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==k)
{
printf("yes");
return(0);
}
}
printf("no");
}
