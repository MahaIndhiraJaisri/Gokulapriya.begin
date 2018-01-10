#include<stdio.h>
void main()
{
char str[30];
int i=0,count=0;
while(str[i]!='\o')
{
if(!(str[i]==" "))
{
++count;
}
++i;
}
printf("no of characters is %d ",count);
}
