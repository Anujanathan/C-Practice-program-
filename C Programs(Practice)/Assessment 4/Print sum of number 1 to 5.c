#include<stdio.h>
int main()
{
    int n=0,i,num;
    printf("Enter number :");
   
   i=0;
   loop:
       n=n+i;
       i=i+1;
       if(i<=5)
         goto loop;
   printf("%d",n);
    
             
    
}
