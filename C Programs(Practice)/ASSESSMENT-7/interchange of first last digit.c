#include <stdio.h>

void disp_interchange_first_last_digit()
{
    int n, temp, first, last, power = 1, result;

    scanf("%d", &n);

    last = n % 10;
    temp = n;

    while(temp >= 10)
    {
        temp = temp / 10;
        power = power * 10;
    }

    first = temp;

    result = n - (first * power) - last;
    result = result + (last * power) + first;

    printf("%d", result);
}

int main()
{
    disp_interchange_first_last_digit();
    
}
