#include <stdio.h>
int isdigit(int);
int main()
{
    char str[20],ch;
    int i,j,n1=0,n2=0,nn1=0,nn2=0;
  printf("enter the string");
  scanf("%d",&str);
  for(i=0;str[i]!='\0';i++)
  { 
      nn1=(int)str[i];
      if(is_digit(nn1))
      {
          n1=(n1*10)+nn1;
      }
      else
      {
          ch=str[i];
          for(j=i+1;str[j]!='\0';j++)
          {
              nn2=(int)str[j];
              n2=(n2*10)+nn2;
          }
          break;
      }
  }
  switch(ch)
  {
      case '/':printf("\ndivision of two numbers=%d",(n1/n1));
               break;
      case '%':printf("\nmodulo division of two numbers=%d",(n1%n2));
               break;
      default:printf("\nonly '/' or '%' only can be perform");           
  }
    return 0;
}
int is_digit(int n)
{
    if((n>=0)||(n<=9))
    {
        return 1;
    }
    else
    {
        return 0;
   
    }
}
