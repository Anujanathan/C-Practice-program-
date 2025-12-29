#include <stdio.h>

int check_last_digit_odd(int num)
{
    int last, first, temp, place = 1;

    last = num % 10;
    if (last % 2 == 0)
    {
        return num;
    }
    temp = num;
    while (temp >= 10)
    {
        temp = temp / 10;
        place = place * 10;
    }

    first = temp - 1;
    return (first * place) + (num % place);
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d", check_last_digit_odd(num));
}
