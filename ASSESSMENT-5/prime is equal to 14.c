#include <stdio.h>
int main()
{
    int num, temp, i, sum = 0, flag = 0;

    scanf("%d", &num);
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
    temp = num;
    for (; temp != 0; temp = temp / 10)
    {
        sum = sum + (temp % 10);
    }
    if (flag == 0 && sum == 14)
        printf("Prime & sum of digits is 14");
    else if (flag == 1 && sum == 14)
        printf("Not Prime but sum of digits is 14");
    else if (flag == 0 && sum != 14)
        printf("Prime & sum of digits is not 14");
    else
        printf("Not Prime & sum of digits is not 14");

    return 0;
}
