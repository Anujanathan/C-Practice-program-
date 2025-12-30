#include <stdio.h>

int main()
{
    int a[100];
    int i = 0, n, sum = 0;
    while (1)
    {
        scanf("%d", &n);

        if (n == 0)
        {
            break;
        }

        a[i] = n;
        sum = sum + a[i];
        i++;
    }

    printf("%d\n", i);
    printf("%d\n", sum);

    return 0;
}
