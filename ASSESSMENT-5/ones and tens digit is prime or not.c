#include <stdio.h>
int main()
{
    int num, last_two, i, flag = 0;
    scanf("%d", &num);
    last_two = num % 100;   
    if (last_two <= 1)
        flag = 1;
    else
    {
        for (i = 2; i <= last_two / 2; i++)
        {
            if (last_two % i == 0)
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
