#include <stdio.h>
int main()
{
    int num, temp, first, last, place = 1, result;
    scanf("%d", &num);
    last = num % 10;    
    temp = num;
    while (temp >= 10)
    {
        temp = temp / 10;
        place = place * 10;
    }
    first = temp;
    if (last % 2 != 0)   
    {
        result = (first - 1) * place + (num % place);
    }
    else
    {
        result = num;
    }

    printf("%d", result);

}
