#include<stdio.h>
void main()
{
int t1,t2,t3,min1,min2,min3,hr1,hr2,hr3;
printf("enter the first time in hr and min");
scanf("%d%d",&hr1,&min1);
printf("enter the second time in hr and min");
scanf("%d%d",&hr2,&min2);
t1=(hr1*60)+min1;
t2=(hr2*60)+min2;
t3=t1-t2;
hr3=t3/60;
min3=t3%60;
printf("difference between two times are  %d:%d",hr3,min3);
}

