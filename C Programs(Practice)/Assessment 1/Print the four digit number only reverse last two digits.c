#include<stdio.h>
int main()
{
    int num,a,b,c,sum,add;
    scanf("%d",&num);
    a=num%10*10;
    b=num%100/10;
    sum=a+b;
    c=num/100*100;
    add=sum+c;
    printf("%d",add);
}
