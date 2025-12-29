#include <stdio.h>

int disp_total_odd_digits(int num)
{
    int digit, count = 0;

    while (num != 0)
    {
        digit = num % 10;

        if (digit % 2 != 0)
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
    printf("%d", disp_total_odd_digits(num));

}
