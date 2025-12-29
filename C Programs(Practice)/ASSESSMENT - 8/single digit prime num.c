#include <stdio.h>

int disp_2digit_even_sum6()
{
    int i, count = 0;

    for (i = 2; i <= 9; i++)
    {
        if (i == 2 || i == 3 || i == 5 || i == 7)
        {
            count++;
        }
    }

    return count;
}

int main()
{
     printf("%d", disp_2digit_even_sum6());
}

