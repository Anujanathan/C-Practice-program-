#include <stdio.h>

void disp_single_digit_prime_count()
{
    int i, j, flag, count = 0;

    for(i = 2; i <= 9; i++)
    {
        flag = 0;

        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            count = count + 1;
        }
    }

    printf("%d", count);
}

int main()
{
    disp_single_digit_prime_count();
    return 0;
}
