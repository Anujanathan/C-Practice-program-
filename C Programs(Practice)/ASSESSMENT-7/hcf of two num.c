#include <stdio.h>

void disp_count_HCF2()
{
    int a, b, temp;

    scanf("%d %d", &a, &b);

    while(b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("%d", a);
}

int main()
{
    disp_count_HCF2();
    return 0;
}
