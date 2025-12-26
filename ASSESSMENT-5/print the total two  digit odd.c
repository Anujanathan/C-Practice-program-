#include <stdio.h>
int main()
{
    int num, two, count = 0;
    scanf("%d", &num);

    while (num >= 10)
    {
        two = num % 100;     

        if (two >= 10 && two % 2 != 0)
            count++;

        num = num / 10;      
    }
    printf("%d", count);
}
