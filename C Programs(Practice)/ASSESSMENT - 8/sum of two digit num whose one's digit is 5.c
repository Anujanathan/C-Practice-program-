#include <stdio.h>

int disp_2digit_ones5()
{
    int i, sum = 0;

    for (i = 15; i <= 95; i = i + 10)
    {
        sum = sum + i;
    }

    return sum;
}

int main()
{
    int result;

    result = disp_2digit_ones5();
    printf("%d", result);

}
