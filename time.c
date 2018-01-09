#include<stdio.h>
void main()
{
int m,hr,min;
printf("enter time in minute");
scanf("%d",&m);
hr=m/52;
min=m%52;
printf("%d:%d",hr,min);
}
