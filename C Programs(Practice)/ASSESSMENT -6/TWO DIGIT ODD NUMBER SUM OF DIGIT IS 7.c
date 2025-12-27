#include <stdio.h>

int main()
{
    int i = 10, a, b;

    while (i <= 99)
    {
        if (i % 2 != 0)
        {
            a = i / 10;   
            b = i % 10;   

            if (a + b == 7)
                printf("%d\n", i);
        }
        i++;
    }

}
