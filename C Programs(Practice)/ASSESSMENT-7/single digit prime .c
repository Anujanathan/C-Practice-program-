#include <stdio.h>

void disp_single_digit_prime()
{
    int n, digit, count = 0;

    scanf("%d", &n);

    while(n != 0)
    {
        digit = n % 10;

        if(digit == 2 || digit == 3 || digit == 5 || digit == 7)
        {
            count = count + 1;
        }

        n = n / 10;
    }

    printf("%d", count);
}

int main()
{
    disp_single_digit_prime();
}
