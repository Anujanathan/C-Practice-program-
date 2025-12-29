#include <stdio.h>

int disp_count_sum14()
{
    int i, temp, digit, sum, count = 0;

    for (i = 0; i < 100000; i++)
    {
        temp = i;
        sum = 0;

        while (temp != 0)
        {
            digit = temp % 10;
            sum = sum + digit;
            temp = temp / 10;
        }

        if (sum == 14)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    printf("%d", disp_count_sum14());
}
