#include<stdio.h>
int main()
{
    int i,num=0,a,b;
  
    for(i=11;i<=99;i++)
    {
        if(i%2!=0)
        {
       if(i/10==7)
       
       {
           num=num+i;
       }
        }
    }
    printf("%d",num);
    
}