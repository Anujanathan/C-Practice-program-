#include <stdio.h>

void disp_LCM2()
{
    int a, b, x, y, temp, gcd, lcm;

    scanf("%d %d", &a, &b);

    x = a;
    y = b;
    while(y != 0)
    {
        temp = y;
        y = x % y;
        x = temp;
    }

    gcd = x;

    lcm = (a * b) / gcd;

    printf("%d", lcm);
}

int main()
{
    disp_LCM2();
}
