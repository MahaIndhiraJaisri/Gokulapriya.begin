#include<stdio.h>
void main()
{
char str[30];
int count=0,i=0,vow=0;
printf("enter the string");
scanf("%s",&str);
while(str[i]!='\0')
{
count++;
}
for(i=0;i<count;i++)
{
if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u'))
{
vow++;
}
}
if(vow==0)
{
printf("no");
}
else
{
printf("yes");
}
}

