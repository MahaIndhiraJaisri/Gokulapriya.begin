#include<stdio.h>
void main()
{
char str[30];
int i=0,count=0;
  printf("enter the string");
  scanf("%s",&str);
while(str[i]!='\0')
{
if(str[i]=="\n")
{
++count;
}
++i;
}
count++;
printf("no of lines is %d ",count);
}
