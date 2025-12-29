#include <stdio.h>

int disp_interchange_first_last_digit(int num)
{
    int first, last, temp, place = 1, result;

    last = num % 10;

    temp = num;
    while (temp >= 10)
    {
        temp = temp / 10;
        place = place * 10;
    }
    first = temp;

    result = (last * place) + (num % place) / 10 * 10 + first;

    return result;
}

int main()
{
    int num;

    scanf("%d", &num);
    printf("%d", disp_interchange_first_last_digit(num));
}
