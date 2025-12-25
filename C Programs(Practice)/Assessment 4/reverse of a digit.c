#include <stdio.h>

int main() {
    long int n;
    long int rev = 0;
    int digit;

    scanf("%ld", &n);

start:
    digit = n % 10;
    rev = rev * 10 + digit;
    n = n / 10;

    if (n != 0)
        goto start;

    printf("%ld", rev);

    return 0;
}
