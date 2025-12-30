#include <stdio.h>

int main()
{
    int a[10];
    int i = 0, n;
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

    if (i == 4 && a[0] == a[i - 1])
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }

    return 0;
}
