#include<stdio.h>
int main()
{
    int num,divi,sum,a,b,c;
    scanf("%d",&num);
     a=num/100;
     b=num%10;
     c=num/10%10;
     sum=a+b+c;
    printf("%d",sum);
}
