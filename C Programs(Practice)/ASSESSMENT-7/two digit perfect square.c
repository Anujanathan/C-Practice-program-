#include <stdio.h>

void disp_two_digit_square()
{
    int n, last, second_last, two_digit, count = 0;

    scanf("%d", &n);

    while(n >= 10)
    {
        last = n % 10;
        second_last = (n / 10) % 10;

        two_digit = second_last * 10 + last;

        if(two_digit == 16 || two_digit == 25 || two_digit == 36 ||
           two_digit == 49 || two_digit == 64 || two_digit == 81)
        {
            count = count + 1;
        }

        n = n / 10;
    }

    printf("%d", count);
}

int main()
{
    disp_two_digit_square();
 
}
