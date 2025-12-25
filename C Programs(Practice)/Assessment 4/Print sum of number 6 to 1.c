#include<stdio.h>
int main()
{
    int n=0,i,num;
    printf("Enter number :");
   
   i=6;
   loop:
       n=n+i;
       i--;
       if(i>=1)
         goto loop;
   printf("%d",n);
    
 }
