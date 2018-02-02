#include<stdio.h>
void main()
{
    int a[10],b[10],i,n;
    printf("enter the no of opponent team");
    scanf("%d",&n);
    printf("\nno of nijas in kabali's team and his opponent team");
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    printf("\ndifference between two teams");
    for(i=0;i<n;i++)
    {
        printf("\n%d",(b[i]-a[i]));
    }
}
