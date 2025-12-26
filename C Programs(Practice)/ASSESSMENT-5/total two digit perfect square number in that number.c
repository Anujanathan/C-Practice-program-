#include <stdio.h>
int main()
{
    int num, two, count = 0;

    scanf("%d", &num);

    while (num >= 10)
    {
        two = num % 100;   
        if (two == 16 || two == 25 || two == 36 ||
            two == 49 || two == 64 || two == 81)
        {
            count++;
        }

        num = num / 10;    
    }

    printf("%d", count);
}
