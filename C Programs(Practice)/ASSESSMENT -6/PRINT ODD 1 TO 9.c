#include <stdio.h>

int main()
{
    int i = 1;

    while (i <= 9)
    {
        if (i % 2 != 0)
            printf("%d\n", i);

        i++;
    }
}
