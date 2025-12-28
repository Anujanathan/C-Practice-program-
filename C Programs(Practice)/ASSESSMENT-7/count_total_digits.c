#include <stdio.h>

void count_total_digits()
{
    int n, count = 0;

    scanf("%d", &n);

    while(n != 0)
    {
        count = count + 1;
        n = n / 10;
    }

    printf("%d", count);
}

int main()
{
    count_total_digits();
}
