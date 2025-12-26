#include<stdio.h>
int main()
{
    int i,num=0,a,b;
  
    for(i=11;i<=99;i++)
    {
       if(i%10==5)
       
       {
           num=num+i;
       }
    }
    printf("%d",num);
    
}