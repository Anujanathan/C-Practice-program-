#include <stdio.h>

int main()
{
    int a, b, c, i;
    int gcd1 = 1, gcd2 = 1;
    int lcm1, lcm;

    scanf("%d %d %d", &a, &b, &c);
    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
            gcd1 = i;
    }

    lcm1 = (a * b) / gcd1;

    for (i = 1; i <= lcm1 && i <= c; i++)
    {
        if (lcm1 % i == 0 && c % i == 0)
            gcd2 = i;
    }

    lcm = (lcm1 * c) / gcd2;

    printf("%d", lcm);

    return 0;
}
