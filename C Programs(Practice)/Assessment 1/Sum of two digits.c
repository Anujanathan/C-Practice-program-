
#include<stdio.h>
int main()
{
    int num,a,b,c,sum,add;
    printf("Enter the number:");
    scanf("%d",&num);
    a=num%10;
    b=num/10;
    sum=a+b;
    printf("%d",sum);
}
