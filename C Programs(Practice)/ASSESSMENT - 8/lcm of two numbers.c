#include <stdio.h>

int disp_LCM2(int a, int b)
{
    int max;

    if (a > b)
        max = a;
    else
        max = b;

    while (1)
    {
        if (max % a == 0 && max % b == 0)
        {
            return max;
        }
        max++;
    }
}

int main()
{
    int a, b;

    scanf("%d%d", &a, &b);
    printf("%d", disp_LCM2(a, b));
}
