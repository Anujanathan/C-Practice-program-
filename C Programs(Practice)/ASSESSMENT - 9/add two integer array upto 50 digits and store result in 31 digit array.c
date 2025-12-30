#include <stdio.h>

int main()
{
    int a[50], b[50], c[51];
    int n, i, carry = 0, sum;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    for (i = n - 1; i >= 0; i--)
    {
        sum = a[i] + b[i] + carry;
        c[i + 1] = sum % 10;
        carry = sum / 10;
    }

    c[0] = carry;

    if (c[0] != 0)
    {
        for (i = 0; i <= n; i++)
        {
            printf("%d", c[i]);
        }
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            printf("%d", c[i]);
        }
    }

}
