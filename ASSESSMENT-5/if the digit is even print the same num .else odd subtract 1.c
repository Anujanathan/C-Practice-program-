#include <stdio.h>
int main()
{
    int num, temp, last, first, div = 1;
    scanf("%d", &num);
    last = num % 10;   
    if (last % 2 == 0)
    {
        printf("%d", num);
    }
    else
    {
        temp = num;

        while (temp >= 10)
        {
            temp /= 10;
            div *= 10;
        }
        first = temp - 1;   

        num = first * div + (num % div);
        printf("%d", num);
    }
}
