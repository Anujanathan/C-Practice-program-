#include <stdio.h>

int disp_count_HCF2(int a, int b)
{
    int i, hcf = 1, min;

    if (a < b)
        min = a;
    else
        min = b;

    for (i = 1; i <= min; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }

    return hcf;
}

int main()
{
    int a, b;

    scanf("%d%d", &a, &b);
    printf("%d", disp_count_HCF2(a, b));

}
