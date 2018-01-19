#include<stdio.h>
void main()
{
char s1[30],s2[30],i,count=0,j=0;
printf("enter the strings");
scanf("%s%s",&s1,&s2);
for(i=0;s1[i]!='\0';i++)
{
count++;
}
for(i=--count;s2[i]!='\0';i++)
{
s1[i]=s2[j];
}
printf("string is %s",s1);
}
