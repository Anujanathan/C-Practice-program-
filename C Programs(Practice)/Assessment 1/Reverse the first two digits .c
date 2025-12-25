#include<stdio.h>
int main()
{
    int num,a,b,c,sum,add;
    printf("Enter the number:");
    scanf("%d",&num);
    a=num/100%10*1000;
    b=num/1000*100;
    c=num%100;
    sum=a+b+c;
    printf("%d",sum);
    
    
}

