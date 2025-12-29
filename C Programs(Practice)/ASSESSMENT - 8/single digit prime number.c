#include <stdio.h>

int disp_single_digit_prime(int num)
{
    int digit, count = 0;

    while (num != 0)
    {
        digit = num % 10;

        if (digit == 2 || digit == 3 || digit == 5 || digit == 7)
        {
            count++;
        }

        num = num / 10;
    }

    return count;
}

int main()
{
    int num;

    scanf("%d", &num);
    printf("%d", disp_single_digit_prime(num));
}
