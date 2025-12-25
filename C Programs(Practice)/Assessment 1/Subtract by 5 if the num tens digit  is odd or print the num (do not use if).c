#include<stdio.h>
int main()
{
    int num,a,b,c,sum;
    printf("Enter the number:");
    scanf("%d",&num);
    b=num%100/10;
    a=num-(b%2)*5;
    printf("%d",a);
    
}
