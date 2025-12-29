#include <stdio.h>

int disp_LCM3(int a, int b, int c)
{
    int max;

    if (a >= b && a >= c)
        max = a;
    else if (b >= a && b >= c)
        max = b;
    else
        max = c;

    while (1)
    {
        if (max % a == 0 && max % b == 0 && max % c == 0)
        {
            return max;
        }
        max++;
    }
}

int main()
{
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);
    printf("%d", disp_LCM3(a, b, c));

}
