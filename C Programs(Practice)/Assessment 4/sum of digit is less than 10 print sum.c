#include<stdio.h>
int main()
{
    int num,a,b,c,sum,add;
    printf("Enter the number:");
    scanf("%d",&num);
    a=num%10;
    b=num/100;
    c=num/10%10;
    sum=a+b+c;
    if(sum<10)
    {
       printf("%d",sum);
        
    }
    else
    {
        
        a=sum%10;
        b=sum/10;
        c=a+b;
    
        if(c>10)
        {
        printf("%d",c);
        }
        else
        {
            a=c%10;
        b=c/10;
        add=a+b;
        printf("%d",add);
            
             
        }
       
    }
    
}
