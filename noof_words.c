#include<stdio.h>
void main()
{
char str[30];
int count,i;
printf("enter the string");
scanf("%s",&str);
for(i=0;str[i]!='\0';i++)
{
count++;
}
printf("number of characters in a sentence is %d",count);
}
