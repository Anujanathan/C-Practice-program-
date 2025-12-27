#include <stdio.h>
int main()
{
    int num, lastTwo, i, flag = 0;

    scanf("%d", &num);
    lastTwo = num % 100;
    if (lastTwo <= 1)
        flag = 1;
    else
    {
        for (i = 2; i <= lastTwo / 2; i++)
        {
            if (lastTwo % i == 0)
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 0)
        printf("Prime");
    else
        printf("Not Prime");

}
