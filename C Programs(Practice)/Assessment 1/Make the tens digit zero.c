#include<stdio.h>
int main()
{
    int num,a,b,c,sum,add;
    printf("Enter the number:");
    scanf("%d",&num);
    a=num/100;
    b=num%10;
    c=a*100+b;
    printf("%d",c);
    
}
