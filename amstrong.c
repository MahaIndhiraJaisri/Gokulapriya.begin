#include <stdio.h>
void main()
{
int number, original, remainder, result = 0;
printf("Enter a the integer: ");
scanf("%d", &number);
original = number;
while (original != 0)
{
remainder = original%10;
result += remainder*remainder*remainder;
original /= 10;
}
if(result == number)
{
printf("%d is an Armstrong number.",number);
}
else
{
printf("%d is not an Armstrong number.",number);
}
}
