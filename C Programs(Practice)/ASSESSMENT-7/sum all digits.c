#include <stdio.h>

void disp_sum_all_digits()
{
    int n, sum = 0, digit;

    scanf("%d", &n);

    while(n != 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    printf("%d", sum);
}

int main()
{
    disp_sum_all_digits();
 
}
