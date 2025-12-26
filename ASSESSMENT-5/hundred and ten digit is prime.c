#include <stdio.h>
int main()
{
    int num, middle, i, flag = 0;
    scanf("%d", &num);
    middle = (num / 10) % 100;
    if (middle <= 1)
        flag = 1;
    else
    {
        for (i = 2; i <= middle / 2; i++)
        {
            if (middle % i == 0)
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

    return 0;
}
