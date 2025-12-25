#include<stdio.h>
int main()
{
    int num,a,b,c,sum,add;
    printf("Enter the number:");
    scanf("%d",&num);
    b=num%10;
    c=num/10;
    a= (b!=c)*1;
    printf("%d",a);
}
