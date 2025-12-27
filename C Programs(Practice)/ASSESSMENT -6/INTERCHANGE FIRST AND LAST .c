#include <stdio.h>
int main()
{
    int num, temp, first, last, middle, result, place = 1;
    scanf("%d", &num);
    temp = num;
    last = num % 10;
    while (temp >= 10)
    {
        temp = temp / 10;
        place = place * 10;
    }

    first = temp;
    middle = (num % place) / 10;
    result = last * place + middle * 10 + first;
    printf("%d", result);
}
