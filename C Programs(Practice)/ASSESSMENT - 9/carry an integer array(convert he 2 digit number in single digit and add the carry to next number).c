#include <stdio.h>

int main()
{
    int a[50];
    int n, i, carry;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = n - 1; i > 0; i--)
    {
        if (a[i] >= 10)
        {
            carry = a[i] / 10;
            a[i] = a[i] % 10;
            a[i - 1] = a[i - 1] + carry;
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

}
