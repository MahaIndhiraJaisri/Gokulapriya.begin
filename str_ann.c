#include<stdio.h> 
void main()
{
char arr[1000];
int i=0,digit=0,ch=0;
printf("enter the string");
scanf("%s",&arr);
for(i=0;arr[i]!='\0';i++)
{
if(((arr[i]>='a')||(arr[i]>='z'))&&((arr[i]>='A')||(arr[i]>='Z')))
{
ch++;
}
if(isdigit(arr[i]))
{
digit++;
}
}
if((ch>0)&&(digit>0))
{
printf("string contains both alphabets and number");
}
else
{
printf("string does not contains both alphabets and number");
}
}



