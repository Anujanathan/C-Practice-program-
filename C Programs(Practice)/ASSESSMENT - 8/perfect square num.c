#include <stdio.h>

int disp_single_digit_square(int num)
{
    int digit, count = 0;

    while (num != 0)
    {
        digit = num % 10;

        if (digit == 1 || digit == 4 || digit == 9)
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
    printf("%d", disp_single_digit_square(num));
}
