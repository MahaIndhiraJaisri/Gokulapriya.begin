#include<iostream.h>
#include<string.h>
void main()
{
char ch[30];
int l;
printf("enter the string");
scanf("%s",&ch);
l=strlen(ch);
ch[0]=toupper(ch[0]);
for(i=1;i<l;i++)
{
if(ch[i]==" ")
{
ch[i+1]=toupper(ch[i+1]);
}
}
printf("the string is = %s",ch);
}
