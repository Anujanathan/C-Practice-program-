#include<stdio.h>
int main()
{
    int num,a,b,c,sum;
    printf("Enter the number:");
    scanf("%d",&num);
    b=num%10;
    c=num/10;
    sum=b+c;
    a=num-(sum%2)*5;
    printf("%d",a);
    
}
