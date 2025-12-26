#include <stdio.h>

int main()
{
    int num, i, digit, rev = 0;

    scanf("%d", &num);

    for(i = num; i != 0; i = i / 10)
    {
        digit = i % 10;          
        rev = rev * 10 + digit; 
    }

    printf("%d", rev);

    return 0;
}
