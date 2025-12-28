#include <stdio.h>

void disp_single_digit_square()
{
    int n, digit, count = 0;

    scanf("%d", &n);

    while(n != 0)
    {
        digit = n % 10;

        if(digit == 1 || digit == 4 || digit == 9)
        {
            count = count + 1;
        }

        n = n / 10;
    }

    printf("%d", count);
}

int main()
{
    disp_single_digit_square();
}
