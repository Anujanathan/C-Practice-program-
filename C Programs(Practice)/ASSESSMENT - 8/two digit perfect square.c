#include <stdio.h>

int disp_two_digit_square(int num)
{
    int last, prev, value, count = 0;

    last = num % 10;
    num = num / 10;

    while (num != 0)
    {
        prev = num % 10;
        value = (prev * 10) + last;

        if (value == 16 || value == 25 || value == 36 ||
            value == 49 || value == 64 || value == 81)
        {
            count++;
        }

        last = prev;
        num = num / 10;
    }

    return count;
}

int main()
{
    int num;

    scanf("%d", &num);
    printf("%d", disp_two_digit_square(num));

}
