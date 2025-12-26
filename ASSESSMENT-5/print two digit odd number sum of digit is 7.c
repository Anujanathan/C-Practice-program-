#include<stdio.h>
int main()
{
    int i,num,a,b;
  
    for(i=11;i<=99;i++)
    {
        if(i%2!=0)
        {
        a=i/10;
        b=i%10;
        num=a+b;
        if(num==7)
        {
        printf("%d\n",i);   
        }
        }
        
    }
    
}