#include <stdio.h>
void main()
{
int number, original, remainder, result,start,end;
printf("Enter a the integer: ");
scanf("%d", &number);
original = number;
printf("enter starting and ending integer");
scanf("%d%d",&start,&end);
printf("armstrong numbers are..");
for(i=start;i<=end;i++)
{
result=0;
while (original != 0)
{
remainder = original%10;
result += remainder*remainder*remainder;
original /= 10;
}
if(result == number)
{
printf("%d",i);
}
}
}
