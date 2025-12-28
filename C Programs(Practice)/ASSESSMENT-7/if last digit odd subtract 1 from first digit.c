#include <stdio.h>

void check_last_digit_odd()
{
    int n, temp, first, last, power = 1;
    scanf("%d", &n);
    last = n % 10;   
    temp = n;
    while(temp >= 10)
    {
        temp = temp / 10;
        power = power * 10;
    }

    first = temp;
    if(last % 2 != 0)
    {
        n = n - power;
    }

    printf("%d", n);
}

int main()
{
    check_last_digit_odd();
 
}
