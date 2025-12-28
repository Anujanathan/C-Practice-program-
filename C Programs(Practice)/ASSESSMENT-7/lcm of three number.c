#include <stdio.h>

void disp_LCM3()
{
    int a, b, c;
    int x, y, temp, gcd, lcm1, lcm2;

    scanf("%d %d %d", &a, &b, &c);
    x = a;
    y = b;
    while(y != 0)
    {
        temp = y;
        y = x % y;
        x = temp;
    }
    gcd = x;

    lcm1 = (a * b) / gcd;
    x = lcm1;
    y = c;
    while(y != 0)
    {
        temp = y;
        y = x % y;
        x = temp;
    }
    gcd = x;

    lcm2 = (lcm1 * c) / gcd;

    printf("%d", lcm2);
}

int main()
{
    disp_LCM3();
    
}
