#include<stdio.h>
int main()
{
    int num,a,b,c,sum;
    printf("Enter the number:");
    scanf("%d",&num);
    a=num-(num%2)*5;
    printf("%d",a);
    
}
