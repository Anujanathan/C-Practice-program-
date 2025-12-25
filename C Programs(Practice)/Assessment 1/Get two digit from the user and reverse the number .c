#include<stdio.h>
int main()
{
    int num,a,b,c;
    scanf("%d",&num);
    a=num%10*10;
    b=num/10;
    c=a+b;
    printf("%d",c);
}
