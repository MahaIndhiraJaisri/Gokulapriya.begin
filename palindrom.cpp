#include<iostream.h>
void main()
{
char s1[30],s2[30];
int i,j,l;
cout<<"enter the string";
cin>>s1;
l=strlen(s1);
for(i=0,j=l;s[i]!='\0';i++,j--)
{
s2[j]=s1[i];
}
if(strcmp(s1,s2))
{
cout<<"palindrom";
}
else
{
cout<<"not a palindrom";
}
}


