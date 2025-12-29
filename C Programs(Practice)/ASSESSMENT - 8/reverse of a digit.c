#include <stdio.h>

int disp_reverse_number(int num)
{
    int rev = 0, digit;

    while (num != 0)
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    }

    return rev;
}

int main()
{
    int num, result;

    scanf("%d", &num);

    result = disp_reverse_number(num);
    printf("%d", result);
}
