#include<stdio.h>
void main()
{
char str1[20],str2[20];
int i=0,count=0;
  ptintf("enter the the 1st string");
  scanf("%s",&str1);
   ptintf("enter the the 2nd string");
  scanf("%s",&str2);
  
while((str1[i]!='\0')||(str2[i]!='\0'))
{
if(str1[i]==str2[i])
{
i++;
++count;
}
else if(str1[i]>str2[i])
{
printf("greatest string is %s",str1);
break;
}
else
{
printf("greatest string is %s",str2);
break;
}
}
if(count!=0)
{
printf("strings are same.....the string is %s",str1);
}
}
