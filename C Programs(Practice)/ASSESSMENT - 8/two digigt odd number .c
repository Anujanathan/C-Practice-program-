#include <stdio.h>

int disp_total_2digit_odd(int num)
{
    int last, prev, count = 0;

    last = num % 10;
    num = num / 10;

    while (num != 0)
    {
        prev = num % 10;

        if (((prev * 10) + last) % 2 != 0)
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
    printf("%d", disp_total_2digit_odd(num));
}
