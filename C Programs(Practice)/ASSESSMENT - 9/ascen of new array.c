#include <stdio.h>

int main()
{
    int a[20], b[20];
    int i = 0, j, n, temp;
    int num, sum, k;

    while (1)
    {
        scanf("%d", &n);

        if (n == 0)
        {
            break;
        }

        a[i] = n;
        i++;
    }

    for (j = 0; j < i; j++)
    {
        num = a[j];
        sum = 0;

        while (num > 0)
        {
            sum = sum + (num % 10);
            num = num / 10;
        }

        b[j] = sum;
    }

    for (j = 0; j < i - 1; j++)
    {
        for (k = j + 1; k < i; k++)
        {
            if (b[j] > b[k])
            {
                temp = b[j];
                b[j] = b[k];
                b[k] = temp;
            }
        }
    }

    for (j = 0; j < i; j++)
    {
        printf("%d ", b[j]);
    }

}
