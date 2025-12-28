#include <stdio.h>

void check_prime_and_sum14()
{
    int n, i, flag = 0;
    int temp, sum = 0, digit;

    scanf("%d", &n);

      if(n <= 1)
        flag = 1;
    else
    {
        for(i = 2; i < n; i++)
        {
            if(n % i == 0)
            {
                flag = 1;
                break;
            }
        }
    }
    temp = n;
    while(temp != 0)
    {
        digit = temp % 10;
        sum = sum + digit;
        temp = temp / 10;
    }
    if(flag == 0 && sum == 14)
        printf("Prime & sum of digits is 14");
    else if(flag == 1 && sum == 14)
        printf("Not Prime but sum of digits is 14");
    else if(flag == 0 && sum != 14)
        printf("Prime & sum of digits is not 14");
    else
        printf("Not Prime & sum of digits is not 14");
}

int main()
{
    check_prime_and_sum14();
 
}
