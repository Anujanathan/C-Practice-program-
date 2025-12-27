#include <stdio.h>

int main()
{
    int n, num, count = 0;

    scanf("%d", &n);

    while (n >= 10)
    {
        num = n % 100;   

        if (num % 2 != 0)
        {
            count++;
        }

        n = n / 10;     
    }

    printf("%d", count);
}
