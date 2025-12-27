#include <stdio.h>

int main()
{
    int n = 1, temp, sum, count = 0;

    while (n < 100000)
    {
        temp = n;
        sum = 0;

        while (temp > 0)
        {
            sum = sum + (temp % 10);
            temp = temp / 10;
        }

        if (sum == 14)
        {
            count++;
        }

        n++;
    }

    printf("%d", count);

}
