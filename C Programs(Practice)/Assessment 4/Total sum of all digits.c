#include <stdio.h>

int main() {
    long int n;
    int sum = 0, digit;

    scanf("%ld", &n);

start:
    digit = n % 10;
    sum = sum + digit;
    n = n / 10;

    if (n != 0)
        goto start;

    printf("%d", sum);

    return 0;
}
