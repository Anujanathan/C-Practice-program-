#include <stdio.h>

int main()
{
    int i, num, a=0,b;

    scanf("%d", &num);   

    for (i = num; i != 0; i = i / 10)  
    {
        b=i%10;
       
        
        a=a+b;
    }

    printf("%d", a);

}
