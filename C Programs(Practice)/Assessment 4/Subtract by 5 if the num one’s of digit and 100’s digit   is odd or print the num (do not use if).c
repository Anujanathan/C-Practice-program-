#include<stdio.h>
int main()
{
    int num,a,b,c,sum;
    printf("Enter the number:");
    scanf("%d",&num);
    b=num%10;
    c=num/100;
    a=num-((b%2)&&(c%2))*5;
    printf("%d",a);
    
}

