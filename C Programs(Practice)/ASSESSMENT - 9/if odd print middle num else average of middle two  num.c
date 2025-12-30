#include <stdio.h>

int main()
{
    int a[20];
    int i = 0, n, mid, avg;

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

    if (i % 2 != 0)
    {
        mid = a[i / 2];
        printf("%d", mid);
    }
    else
    {
        avg = (a[(i / 2) - 1] + a[i / 2]) / 2;
        printf("%d", avg);
    }

}
