#include <stdio.h>

int main()
{
    int a, b, hcf = 1, i = 1;

    scanf("%d %d", &a, &b);

    while (i <= a && i <= b)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
        i++;
    }

    printf("%d", hcf);

    return 0;
}
