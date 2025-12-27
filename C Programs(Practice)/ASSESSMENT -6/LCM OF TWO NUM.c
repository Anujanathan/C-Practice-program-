#include <stdio.h>

int main()
{
    int a, b, lcm;

    scanf("%d %d", &a, &b);

    lcm = a;

    while (!(lcm % a == 0 && lcm % b == 0))
    {
        lcm++;
    }

    printf("%d", lcm);

}
