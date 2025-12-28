#include <stdio.h>

void disp_total_2digit_odd()
{
    int n, last, second_last, two_digit, count = 0;

    scanf("%d", &n);

    while(n >= 10)
    {
        last = n % 10;
        second_last = (n / 10) % 10;

        two_digit = second_last * 10 + last;

        if(two_digit % 2 != 0)
        {
            count = count + 1;
        }

        n = n / 10;
    }

    printf("%d", count);
}

int main()
{
    disp_total_2digit_odd();
    return 0;
}
