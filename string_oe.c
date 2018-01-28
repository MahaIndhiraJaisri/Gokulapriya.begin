#include<stdio.h>
void main()
{
char str[20];
    int i;
printf("enter the string");
scanf("%s",&str);
printf("\neven position\n");
for(i=0;str[i]!='\0';i=i+2)
{
printf("%c\t",str[i]);
}
printf("\nodd position\n");
for(i=1;str[i]!='\0';i=i+2)
{
printf("%c\t",str[i]);
}
}
