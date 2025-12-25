#include <stdio.h>

int main() {
    int n = 70, sum = 0;

start:
    if (n / 10 == 7 && n % 2 != 0) {   
        sum = sum + n;
    }

    n++;

    if (n < 80)
        goto start;

    printf("%d", sum);

    return 0;
}
