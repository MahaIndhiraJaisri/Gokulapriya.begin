#include <iostream.h>
#include<string.h>
int main()
{
   char str[20][20],temp[20];
   int i,j,n;
  cout<<"enter the no of string";
   cin>>n;
   cout<<"enter the strings";
   for(i=0;i<n;i++)
   {
       cin>>str[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n;j++)
        {
            if(strcmp(str[i],str[j]))
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    for(i=0;i<n;i++)
   {
       cout<<str[i];
    }
          

    return 0;
}
