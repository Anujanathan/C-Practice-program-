#include <stdio.h>
int main()
{
    int i, num, sum, count = 0;

    for (i = 0; i < 100000; i++)
    {
        num = i;
        sum = 0;

        while (num != 0)
        {
            sum = sum + (num % 10);
            num = num / 10;
        }

        if (sum == 14)
            count++;
    }

    printf("%d", count);
}
