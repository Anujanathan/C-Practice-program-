#include <stdio.h>

int main()
{
    int num, temp, sum = 0, i, flag = 0;

    scanf("%d", &num);
    temp = num;
    while (temp > 0)
    {
        sum = sum + (temp % 10);
        temp = temp / 10;
    }

    if (num <= 1)
        flag = 1;
    else
    {
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 0 && sum == 14)
        printf("Prime & sum of digits is 14");
    else if (flag == 1 && sum == 14)
        printf("Not Prime but sum of digits is 14");
    else if (flag == 0 && sum != 14)
        printf("Prime & sum of digits is not 14");
    else
        printf("Not Prime & Sum of Digits is not 14");

}
