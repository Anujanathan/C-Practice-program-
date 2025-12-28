#include <stdio.h>

void middle_2digits_prime()
{
    int n, middle, i, flag = 0;

    scanf("%d", &n);
    middle = (n / 10) % 100;
    if(middle <= 1)
    {
        flag = 1;
    }
    else
    {
        for(i = 2; i < middle; i++)
        {
            if(middle % i == 0)
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
    middle_2digits_prime();
    return 0;
}
