#include <stdio.h>

int disp_2digit_odd_sum_tens7()
{
    int i, sum = 0;

    for (i = 71; i <= 79; i = i + 2)
    {
        sum = sum + i;
    }

    return sum;
}

int main()
{
    int result;

    result = disp_2digit_odd_sum_tens7();
    printf("%d", result);

}
