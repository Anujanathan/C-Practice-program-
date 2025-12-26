#include <stdio.h>
int main()
{
    int num, temp, first, last, div = 1;
    scanf("%d", &num);
    last = num % 10;
    temp = num;
    while (temp >= 10)
    {
        temp /= 10;
        div *= 10;
    }
    first = temp;
    num = last * div + (num % div) / 10 * 10 + first;
    printf("%d", num);
  
}
