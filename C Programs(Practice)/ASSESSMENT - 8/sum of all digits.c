#include <stdio.h>

int disp_sum_all_digits(int num)
{
    int sum = 0, digit;

    while (num != 0)
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }

    return sum;
}

int main()
{
    int num, result;

    scanf("%d", &num);

    result = disp_sum_all_digits(num);
    printf("%d", result);

}
