#include <stdio.h>

void check_first_2digits_prime()
{
    int n, last2, i, flag = 0;

    scanf("%d", &n);
    last2 = n % 100;
    if(last2 <= 1)
    {
        flag = 1;
    }
    else
    {
        for(i = 2; i < last2; i++)
        {
            if(last2 % i == 0)
            {
                flag = 1;
                break;
            }
        }
    }

    if(flag == 0)
        printf("Prime");
    else
        printf("Not Prime");
}

int main()
{
    check_first_2digits_prime();
}
