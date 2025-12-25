#include <stdio.h>

int main() {
    long int n;
    int count = 0;

    scanf("%ld", &n);

start:
    n = n / 10;
    count++;

    if (n != 0)
        goto start;

    printf("%d", count);

    return 0;
}

