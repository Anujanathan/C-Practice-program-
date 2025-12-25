#include<stdio.h>
int main()
{
    int num,a,b,c,sum,mul;
    scanf("%d",&num);
    a=num%10*100;
    mul=num/10%10;
    b=mul*10;
    c=num/100;
    sum=a+b+c;
    printf("%d\n",sum);
}
