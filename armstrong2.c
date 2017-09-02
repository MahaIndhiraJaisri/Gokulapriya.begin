#include <stdio.h>
void main()
{
int  remainder, result,start,end;
printf("Enter a the integer: ");
scanf("%d", &number);
printf("enter starting and ending integer");
scanf("%d%d",&start,&end);
printf("armstrong numbers are..");
for(num=start;num<=end;num++)
{
i=num;
result=0;
while (i != 0)
{
remainder = i%10;
result += i*i*i;
i /= 10;
}
if(result == num)
{
printf("%d",num);
}
}
}
